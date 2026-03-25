#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TarotBookProcessContext; }
namespace System { class Action; }

#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA55CFD0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT___C__DISPLAYCLASS62_0__PLAYNOUSTALKPERFORMANCE_B__0_OFFSET UNITYSDK_OFFSET(0xA55E2F0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT___C__DISPLAYCLASS62_0__PLAYNOUSTALKPERFORMANCE_B__1_OFFSET UNITYSDK_OFFSET(0xA55E390)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookProcessContext___c__DisplayClass62_0_TypeDefinitionIndex = 55561;

	class TarotBookProcessContext___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::System::Action* setNotInPerformance; // 0x10
		::RPG::Client::TarotBookProcessContext* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNousTalkPerformance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT___C__DISPLAYCLASS62_0__PLAYNOUSTALKPERFORMANCE_B__0_OFFSET))(this);
		}

		::System::Void _PlayNousTalkPerformance_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT___C__DISPLAYCLASS62_0__PLAYNOUSTALKPERFORMANCE_B__1_OFFSET))(this);
		}
	};
}
