#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE_GET_CHARS_OFFSET UNITYSDK_OFFSET(0x5B60)
#define NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x383EDF0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x140A50)
#define NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE_GET_STARTINDEX_OFFSET UNITYSDK_OFFSET(0xDAD0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x383EE20)
#define NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x2C248E0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int StringReference_TypeDefinitionIndex = 9301;

	struct alignas(8) StringReference
	{
		::Il2CppArray<::System::Char>* _chars; // 0x10
		::System::Int32 _startIndex; // 0x18
		::System::Int32 _length; // 0x1C

		::System::Void _ctor(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Char get_Item(::System::Int32 a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE_GET_ITEM_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Char>* get_Chars()
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE_GET_CHARS_OFFSET))(this);
		}

		::System::Int32 get_StartIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE_GET_STARTINDEX_OFFSET))(this);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE_GET_LENGTH_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE_TOSTRING_OFFSET))(this);
		}
	};
}
