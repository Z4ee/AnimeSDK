#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IComparer; }
namespace System::Collections { class IHashCodeProvider; }

#define SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x19E04820)
#define SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x19E04A00)
#define SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19E04A20)
#define SYSTEM_COLLECTIONS_COMPATIBLECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E04810)

namespace System::Collections
{
	inline static constexpr unsigned int CompatibleComparer_TypeDefinitionIndex = 1457;

	class CompatibleComparer : public ::System::Object
	{
	public:
		::System::Collections::IComparer* _comparer; // 0x10
		::System::Collections::IHashCodeProvider* _hcp; // 0x18

		::System::Void _ctor(::System::Collections::IComparer* comparer, ::System::Collections::IHashCodeProvider* hashCodeProvider)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IComparer*, ::System::Collections::IHashCodeProvider*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPATIBLECOMPARER__CTOR_OFFSET))(this, comparer, hashCodeProvider);
		}

		::System::Int32 Compare(::System::Object* a, ::System::Object* b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_COMPARE_OFFSET))(this, a, b);
		}

		::System::Boolean Equals(::System::Object* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_EQUALS_OFFSET))(this, a, b);
		}

		::System::Int32 GetHashCode(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
