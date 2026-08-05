#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define FOUNDATION_NAPSTRINGJOINSTYLE_GET_BRACKET_OFFSET UNITYSDK_OFFSET(0x1D9729F0)
#define FOUNDATION_NAPSTRINGJOINSTYLE_GET_COMMA_OFFSET UNITYSDK_OFFSET(0x1D9729B0)
#define FOUNDATION_NAPSTRINGJOINSTYLE_GET_NOSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1D972A40)
#define FOUNDATION_NAPSTRINGJOINSTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x4DBD40)

namespace Foundation
{
	inline static constexpr unsigned int NapStringJoinStyle_TypeDefinitionIndex = 8139;

	struct alignas(8) NapStringJoinStyle
	{
		::System::String* Separator; // 0x10
		::System::String* Prefix; // 0x18
		::System::String* Suffix; // 0x20

		::System::Void _ctor(::System::String* separator, ::System::String* prefix, ::System::String* suffix)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOINSTYLE__CTOR_OFFSET))(this, separator, prefix, suffix);
		}

		static ::Foundation::NapStringJoinStyle get_Comma()
		{
			return ((::Foundation::NapStringJoinStyle(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOINSTYLE_GET_COMMA_OFFSET))();
		}

		static ::Foundation::NapStringJoinStyle get_Bracket()
		{
			return ((::Foundation::NapStringJoinStyle(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOINSTYLE_GET_BRACKET_OFFSET))();
		}

		static ::Foundation::NapStringJoinStyle get_NoSeparator()
		{
			return ((::Foundation::NapStringJoinStyle(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOINSTYLE_GET_NOSEPARATOR_OFFSET))();
		}
	};
}
