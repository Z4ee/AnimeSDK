#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/EqualityComparer_1.h"

namespace System { class Object; }

#define SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x177F3880)
#define SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x177F3680)
#define SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_GETHASHCODE_1_OFFSET UNITYSDK_OFFSET(0x177F38B0)
#define SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x177F3690)
#define SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_INDEXOF_OFFSET UNITYSDK_OFFSET(0x177F36A0)
#define SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_LASTINDEXOF_OFFSET UNITYSDK_OFFSET(0x177F3820)
#define SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x177F3970)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int ByteEqualityComparer_TypeDefinitionIndex = 1544;

	class ByteEqualityComparer : public ::System::Collections::Generic::EqualityComparer_1<::System::Byte>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Byte x, ::System::Byte y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::System::Byte b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, b);
		}

		::System::Int32 IndexOf(::Il2CppArray<::System::Byte>* array, ::System::Byte value, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Byte, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_INDEXOF_OFFSET))(this, array, value, startIndex, count);
		}

		::System::Int32 LastIndexOf(::Il2CppArray<::System::Byte>* array, ::System::Byte value, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Byte, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_LASTINDEXOF_OFFSET))(this, array, value, startIndex, count);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_GETHASHCODE_1_OFFSET))(this);
		}
	};
}
