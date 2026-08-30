#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/EqualityComparer_1.h"

namespace System { class Object; }

#define SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C9D2B00)
#define SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C9D2910)
#define SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_GETHASHCODE_1_OFFSET UNITYSDK_OFFSET(0x1C9D2B50)
#define SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C9D2920)
#define SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1C9D2930)
#define SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_LASTINDEXOF_OFFSET UNITYSDK_OFFSET(0x1C9D2AA0)
#define SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9D2C60)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int ByteEqualityComparer_TypeDefinitionIndex = 1553;

	class ByteEqualityComparer : public ::System::Collections::Generic::EqualityComparer_1<::System::Byte>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Byte a1, ::System::Byte a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::Byte a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}

		::System::Int32 IndexOf(::Il2CppArray<::System::Byte>* a1, ::System::Byte a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Byte, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_INDEXOF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 LastIndexOf(::Il2CppArray<::System::Byte>* a1, ::System::Byte a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Byte, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_LASTINDEXOF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_GETHASHCODE_1_OFFSET))(this);
		}
	};
}
