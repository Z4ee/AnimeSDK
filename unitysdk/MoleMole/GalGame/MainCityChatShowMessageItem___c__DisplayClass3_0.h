#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGEITEM___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x125CD940)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGEITEM___C__DISPLAYCLASS3_0__ONOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x125CD950)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowMessageItem___c__DisplayClass3_0_TypeDefinitionIndex = 53333;

	class MainCityChatShowMessageItem___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex* onClose; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGEITEM___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnOpen_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGEITEM___C__DISPLAYCLASS3_0__ONOPEN_B__0_OFFSET))(this);
		}
	};
}
