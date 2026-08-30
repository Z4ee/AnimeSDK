#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TarotBookStory; }

#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT___C__DISPLAYCLASS65_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE17CDF0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT___C__DISPLAYCLASS65_0__GETPOOLSTORYCOUNTOFCHARACTER_B__0_OFFSET UNITYSDK_OFFSET(0xE17E480)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookProcessContext___c__DisplayClass65_0_TypeDefinitionIndex = 68066;

	class TarotBookProcessContext___c__DisplayClass65_0 : public ::System::Object
	{
	public:
		::System::UInt32 characterID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT___C__DISPLAYCLASS65_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetPoolStoryCountOfCharacter_b__0(::RPG::Client::TarotBookStory* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookStory*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT___C__DISPLAYCLASS65_0__GETPOOLSTORYCOUNTOFCHARACTER_B__0_OFFSET))(this, a1);
		}
	};
}
