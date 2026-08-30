#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class Match; }

#define RPG_CLIENT_TEXTMAPSTATIC___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACB94D0)
#define RPG_CLIENT_TEXTMAPSTATIC___C__DISPLAYCLASS38_0___COMPILETEXTICONSPATTERN_B__1_OFFSET UNITYSDK_OFFSET(0x1ACBC4F0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextmapStatic___c__DisplayClass38_0_TypeDefinitionIndex = 72864;

	class TextmapStatic___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::System::UInt32 reindex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::String* __CompileTextIconsPattern_b__1(::System::Text::RegularExpressions::Match* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Text::RegularExpressions::Match*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC___C__DISPLAYCLASS38_0___COMPILETEXTICONSPATTERN_B__1_OFFSET))(this, a1);
		}
	};
}
