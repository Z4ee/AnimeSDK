#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class MainCityChatBeginUIGameConfig___c__DisplayClass12_0; }
namespace System { class Action; }

#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS12_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1261D7B0)
#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS12_1__ONOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x1261D8E0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatBeginUIGameConfig___c__DisplayClass12_1_TypeDefinitionIndex = 46904;

	class MainCityChatBeginUIGameConfig___c__DisplayClass12_1 : public ::System::Object
	{
	public:
		::MoleMole::GalGame::MainCityChatBeginUIGameConfig___c__DisplayClass12_0* CS___8__locals1; // 0x10
		::System::Action* onFadeOut; // 0x18
		::System::Boolean success; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS12_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnOpen_b__1(::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF r)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS12_1__ONOPEN_B__1_OFFSET))(this, r);
		}
	};
}
