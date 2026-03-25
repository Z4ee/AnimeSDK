#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IComparer; }
namespace System::Collections { class IHashCodeProvider; }

#define SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x161C6E20)
#define SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x161C7000)
#define SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x161C7020)
#define SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_GET_COMPARER_OFFSET UNITYSDK_OFFSET(0x161C7110)
#define SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_GET_HASHCODEPROVIDER_OFFSET UNITYSDK_OFFSET(0x161C7120)
#define SYSTEM_COLLECTIONS_COMPATIBLECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x161C6E10)

namespace System::Collections
{
	inline static constexpr unsigned int CompatibleComparer_TypeDefinitionIndex = 1458;

	class CompatibleComparer : public ::System::Object
	{
	public:
		::System::Collections::IHashCodeProvider* _hcp; // 0x10
		::System::Collections::IComparer* _comparer; // 0x18

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

		::System::Collections::IComparer* get_Comparer()
		{
			return ((::System::Collections::IComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_GET_COMPARER_OFFSET))(this);
		}

		::System::Collections::IHashCodeProvider* get_HashCodeProvider()
		{
			return ((::System::Collections::IHashCodeProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_GET_HASHCODEPROVIDER_OFFSET))(this);
		}
	};
}
