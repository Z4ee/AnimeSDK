#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_81427F9B3D4E62BC.h"

class Class_2_52FBCCAF8B1412A3_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace UnityEngine { class Camera; }

#define MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186DCEB0)
#define MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186DCF40)
#define MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186DCC80)
#define MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186DCE40)
#define MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0x186DCFC0)
#define MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER_PLAYFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x186DD070)
#define MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER_PLAYLOOPANIM_OFFSET UNITYSDK_OFFSET(0x186DD120)
#define MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER_SYNCTRANSFORM_OFFSET UNITYSDK_OFFSET(0x186DD1C0)
#define MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x186DD3B0)
#define MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186DD410)
#define MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186DD4A0)
#define MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186DD530)
#define MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186DD5C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowTvSelectWidgetWidgetController_TypeDefinitionIndex = 87335;

	class UIHollowTvSelectWidgetWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::UnityEngine::Camera* _chessboardCamera; // 0x2C0
		::Class_2_52FBCCAF8B1412A3_1* _view; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void PlayFadeInAnim(::System::Action* onFinishOrInterrupt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER_PLAYFADEINANIM_OFFSET))(this, onFinishOrInterrupt);
		}

		::System::Void PlayFadeOutAnim(::System::Action* onFinishOrInterrupt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER_PLAYFADEOUTANIM_OFFSET))(this, onFinishOrInterrupt);
		}

		::System::Void PlayLoopAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER_PLAYLOOPANIM_OFFSET))(this);
		}

		::System::Void SyncTransform(::Struct_2_81427F9B3D4E62BC hudTransform)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_81427F9B3D4E62BC))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER_SYNCTRANSFORM_OFFSET))(this, hudTransform);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECTWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
