#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_451601B8BB62C38C_Enum_3_3DCE6AAF7E47B319.h"
#include "unitysdk/Class_1_451601B8BB62C38C_Enum_3_F05C56E76E4AE95C.h"
#include "unitysdk/MoleMole/UILevelGeneralWinResultDialogPopWindowController.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UILevel_MpResult_PopWindowController_ExitMpGameProgress; }
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_ACQUIRETITLETEXT_OFFSET UNITYSDK_OFFSET(0x189B2510)
#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_GETBUTTONCOMBINESTATE_OFFSET UNITYSDK_OFFSET(0x189B25D0)
#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_GETPANELSTATE_OFFSET UNITYSDK_OFFSET(0x189B2620)
#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_ONPOPSHOWED_OFFSET UNITYSDK_OFFSET(0x189B2670)
#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x189B2460)
#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x189B2770)
#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER__ONPOPSHOWED_B__7_0_OFFSET UNITYSDK_OFFSET(0x189B27A0)
#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER__ONPOPSHOWED_B__7_1_OFFSET UNITYSDK_OFFSET(0x189B27C0)
#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER__ONUIOPEN_B__3_0_OFFSET UNITYSDK_OFFSET(0x189B2780)
#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x189B27E0)

namespace MoleMole
{
	inline static constexpr unsigned int UILevel_MpResult_PopWindowController_TypeDefinitionIndex = 47187;

	class UILevel_MpResult_PopWindowController : public ::MoleMole::UILevelGeneralWinResultDialogPopWindowController
	{
	public:
		// static const ::System::String* TITLE_KEY; // 0x0
		::MoleMole::UILevel_MpResult_PopWindowController_ExitMpGameProgress* _exitProgress; // 0x378

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void AcquireTitleText(::System::String*& mainTitleTextID, ::System::String*& resultTitleTextID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_ACQUIRETITLETEXT_OFFSET))(this, mainTitleTextID, resultTitleTextID);
		}

		::Class_1_451601B8BB62C38C_Enum_3_3DCE6AAF7E47B319 GetButtonCombineState()
		{
			return ((::Class_1_451601B8BB62C38C_Enum_3_3DCE6AAF7E47B319(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_GETBUTTONCOMBINESTATE_OFFSET))(this);
		}

		::Class_1_451601B8BB62C38C_Enum_3_F05C56E76E4AE95C GetPanelState()
		{
			return ((::Class_1_451601B8BB62C38C_Enum_3_F05C56E76E4AE95C(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_GETPANELSTATE_OFFSET))(this);
		}

		::System::Void OnPopShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_ONPOPSHOWED_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__3_0(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER__ONUIOPEN_B__3_0_OFFSET))(this, _);
		}

		::System::Void _OnPopShowed_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER__ONPOPSHOWED_B__7_0_OFFSET))(this);
		}

		::System::Void _OnPopShowed_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER__ONPOPSHOWED_B__7_1_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
