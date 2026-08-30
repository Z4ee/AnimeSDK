#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TalkOptionData; }

#define RPG_CLIENT_TALKMODULE___C__DISPLAYCLASS134_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4112F0)
#define RPG_CLIENT_TALKMODULE___C__DISPLAYCLASS134_0___ONCHOOSETALKOPTION_B__0_OFFSET UNITYSDK_OFFSET(0x1B412380)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkModule___c__DisplayClass134_0_TypeDefinitionIndex = 68032;

	class TalkModule___c__DisplayClass134_0 : public ::System::Object
	{
	public:
		::System::Int32 infoIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE___C__DISPLAYCLASS134_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnChooseTalkOption_b__0(::RPG::Client::TalkOptionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TalkOptionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE___C__DISPLAYCLASS134_0___ONCHOOSETALKOPTION_B__0_OFFSET))(this, a1);
		}
	};
}
