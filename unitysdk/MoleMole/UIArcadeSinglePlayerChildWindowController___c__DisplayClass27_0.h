#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_977;
namespace MoleMole { class UIArcadeSinglePlayerChildWindowController; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIARCADESINGLEPLAYERCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__AUTOSTARTGAME_B__1_OFFSET UNITYSDK_OFFSET(0x12B52EA0)
#define MOLEMOLE_UIARCADESINGLEPLAYERCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__AUTOSTARTGAME_B__2_OFFSET UNITYSDK_OFFSET(0x12B52F40)
#define MOLEMOLE_UIARCADESINGLEPLAYERCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__AUTOSTARTGAME_G__ONCONTINUE_0_OFFSET UNITYSDK_OFFSET(0x12B50FC0)
#define MOLEMOLE_UIARCADESINGLEPLAYERCHILDWINDOWCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12B50FB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeSinglePlayerChildWindowController___c__DisplayClass27_0_TypeDefinitionIndex = 67142;

	class UIArcadeSinglePlayerChildWindowController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::MoleMole::UIArcadeSinglePlayerChildWindowController* __4__this; // 0x10
		::System::Action_2<::System::Boolean, ::System::Int32>* __9__2; // 0x18
		::Class_2_208CC9941471731A_977* arcadeConfig; // 0x20

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
