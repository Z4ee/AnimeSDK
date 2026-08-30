#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/EqualityComparer_1.h"

namespace System { class String; }

#define SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C9D39E0)
#define SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C9D3950)
#define SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1C9D3A50)
#define SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9D3350)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int InternalStringComparer_TypeDefinitionIndex = 1558;

	class InternalStringComparer : public ::System::Collections::Generic::EqualityComparer_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 GetHashCode(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 IndexOf(::Il2CppArray<::System::String*>* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER_INDEXOF_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
