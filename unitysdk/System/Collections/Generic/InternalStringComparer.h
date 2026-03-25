#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/EqualityComparer_1.h"

namespace System { class String; }

#define SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x161C7F50)
#define SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x161C7EC0)
#define SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER_INDEXOF_OFFSET UNITYSDK_OFFSET(0x161C7F80)
#define SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x161C8010)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int InternalStringComparer_TypeDefinitionIndex = 1548;

	class InternalStringComparer : public ::System::Collections::Generic::EqualityComparer_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 GetHashCode(::System::String* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}

		::System::Boolean Equals(::System::String* x, ::System::String* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 IndexOf(::Il2CppArray<::System::String*>* array, ::System::String* value, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER_INDEXOF_OFFSET))(this, array, value, startIndex, count);
		}
	};
}
