#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

class Class_2_15F9FE7F9AD3257D;
namespace MoleMole::GalGame { class MainCityChatBeginUIGameConfig; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18B31920)
#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS9_0__ONAFTERTRANSITION_B__0_OFFSET UNITYSDK_OFFSET(0x18B31930)
#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS9_0__ONAFTERTRANSITION_B__1_OFFSET UNITYSDK_OFFSET(0x18B31A10)
#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS9_0__ONAFTERTRANSITION_B__2_OFFSET UNITYSDK_OFFSET(0x18B31B70)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatBeginUIGameConfig___c__DisplayClass9_0_TypeDefinitionIndex = 46902;

	class MainCityChatBeginUIGameConfig___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Action_1<::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF>* __9__2; // 0x10
		::System::Action* __9__1; // 0x18
		::System::Action* action; // 0x20
		::Class_2_15F9FE7F9AD3257D* node; // 0x28
		::MoleMole::GalGame::MainCityChatBeginUIGameConfig* __4__this; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnAfterTransition_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS9_0__ONAFTERTRANSITION_B__0_OFFSET))(this);
		}

		::System::Void _OnAfterTransition_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS9_0__ONAFTERTRANSITION_B__1_OFFSET))(this);
		}

		::System::Void _OnAfterTransition_b__2(::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF r)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS9_0__ONAFTERTRANSITION_B__2_OFFSET))(this, r);
		}
	};
}
