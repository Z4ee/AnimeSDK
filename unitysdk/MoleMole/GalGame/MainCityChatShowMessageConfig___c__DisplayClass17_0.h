#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_50D4513E183E3E1B;
namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x129A5AB0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG___C__DISPLAYCLASS17_0__ONOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x129A5AE0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG___C__DISPLAYCLASS17_0__ONOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x129A5AC0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowMessageConfig___c__DisplayClass17_0_TypeDefinitionIndex = 85915;

	class MainCityChatShowMessageConfig___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::Class_2_50D4513E183E3E1B* messageModel; // 0x10
		::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex* onClose; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnOpen_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG___C__DISPLAYCLASS17_0__ONOPEN_B__1_OFFSET))(this);
		}

		::System::Void _OnOpen_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG___C__DISPLAYCLASS17_0__ONOPEN_B__0_OFFSET))(this);
		}
	};
}
