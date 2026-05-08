#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

class Class_2_1737D2629B3D075C;
namespace MoleMole::GalGame { class MainCityChatBeginUIGameConfig; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10E1A870)
#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS9_0__ONAFTERTRANSITION_B__0_OFFSET UNITYSDK_OFFSET(0x10E1A880)
#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS9_0__ONAFTERTRANSITION_B__1_OFFSET UNITYSDK_OFFSET(0x10E1A960)
#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS9_0__ONAFTERTRANSITION_B__2_OFFSET UNITYSDK_OFFSET(0x10E1AAC0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatBeginUIGameConfig___c__DisplayClass9_0_TypeDefinitionIndex = 40292;

	class MainCityChatBeginUIGameConfig___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::GalGame::MainCityChatBeginUIGameConfig* __4__this; // 0x10
		::System::Action* action; // 0x18
		::Class_2_1737D2629B3D075C* node; // 0x20
		::System::Action_1<::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF>* __9__2; // 0x28
		::System::Action* __9__1; // 0x30

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

		::System::Void _OnAfterTransition_b__2(::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF r)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS9_0__ONAFTERTRANSITION_B__2_OFFSET))(this, r);
		}
	};
}
