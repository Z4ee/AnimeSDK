#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1383F790)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG___C__DISPLAYCLASS4_0__ONOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x1383F7A0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowJourneyConfig___c__DisplayClass4_0_TypeDefinitionIndex = 83992;

	class MainCityChatShowJourneyConfig___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex* onClose; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnOpen_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG___C__DISPLAYCLASS4_0__ONOPEN_B__0_OFFSET))(this);
		}
	};
}
