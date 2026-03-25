#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class Match; }

#define MIHOYO_SDK_COMMON_STRINGUTILS___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15DFCF20)
#define MIHOYO_SDK_COMMON_STRINGUTILS___C__DISPLAYCLASS2_0__SAFEFORMATNOTCSHARPSTANDARDSTRING_B__0_OFFSET UNITYSDK_OFFSET(0x15DFD240)

namespace MiHoYo::SDK::Common
{
	inline static constexpr unsigned int StringUtils___c__DisplayClass2_0_TypeDefinitionIndex = 7444;

	class StringUtils___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Int32 count; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_STRINGUTILS___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::String* _SafeFormatNotCSharpStandardString_b__0(::System::Text::RegularExpressions::Match* m)
		{
			return ((::System::String*(*)(::PVOID, ::System::Text::RegularExpressions::Match*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_STRINGUTILS___C__DISPLAYCLASS2_0__SAFEFORMATNOTCSHARPSTANDARDSTRING_B__0_OFFSET))(this, m);
		}
	};
}
