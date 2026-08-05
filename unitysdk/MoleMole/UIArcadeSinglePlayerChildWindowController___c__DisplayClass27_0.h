#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_51;
namespace MoleMole { class UIArcadeSinglePlayerChildWindowController; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIARCADESINGLEPLAYERCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__AUTOSTARTGAME_B__1_OFFSET UNITYSDK_OFFSET(0x1928B4B0)
#define MOLEMOLE_UIARCADESINGLEPLAYERCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__AUTOSTARTGAME_B__2_OFFSET UNITYSDK_OFFSET(0x1928B550)
#define MOLEMOLE_UIARCADESINGLEPLAYERCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__AUTOSTARTGAME_G__ONCONTINUE_0_OFFSET UNITYSDK_OFFSET(0x19289570)
#define MOLEMOLE_UIARCADESINGLEPLAYERCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19289560)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeSinglePlayerChildWindowController___c__DisplayClass27_0_TypeDefinitionIndex = 50549;

	class UIArcadeSinglePlayerChildWindowController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Action_2<::System::Boolean, ::System::Int32>* __9__2; // 0x10
		::Class_2_208CC9941471731A_51* arcadeConfig; // 0x18
		::MoleMole::UIArcadeSinglePlayerChildWindowController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESINGLEPLAYERCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _AutoStartGame_g__OnContinue_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESINGLEPLAYERCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__AUTOSTARTGAME_G__ONCONTINUE_0_OFFSET))(this);
		}

		::System::Void _AutoStartGame_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESINGLEPLAYERCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__AUTOSTARTGAME_B__1_OFFSET))(this);
		}

		::System::Void _AutoStartGame_b__2(::System::Boolean isReasonTimeLimit, ::System::Int32 limitTimeInSecs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESINGLEPLAYERCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__AUTOSTARTGAME_B__2_OFFSET))(this, isReasonTimeLimit, limitTimeInSecs);
		}
	};
}
