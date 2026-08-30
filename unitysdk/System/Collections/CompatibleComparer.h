#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IComparer; }
namespace System::Collections { class IHashCodeProvider; }

#define SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1C9D16E0)
#define SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C9D1990)
#define SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C9D19B0)
#define SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_GET_COMPARER_OFFSET UNITYSDK_OFFSET(0x1C9D1AB0)
#define SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_GET_HASHCODEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1C9D1AC0)
#define SYSTEM_COLLECTIONS_COMPATIBLECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9D16D0)

namespace System::Collections
{
	inline static constexpr unsigned int CompatibleComparer_TypeDefinitionIndex = 1469;

	class CompatibleComparer : public ::System::Object
	{
	public:
		::System::Collections::IHashCodeProvider* _hcp; // 0x10
		::System::Collections::IComparer* _comparer; // 0x18

		::System::Void _ctor(::System::Collections::IComparer* a1, ::System::Collections::IHashCodeProvider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IComparer*, ::System::Collections::IHashCodeProvider*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPATIBLECOMPARER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Compare(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_GETHASHCODE_OFFSET))(this, a1);
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
