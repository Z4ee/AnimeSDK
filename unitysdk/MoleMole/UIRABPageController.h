#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_863445FF70B314F5.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/Struct_2_D7E802D2192B688B.h"

class Class_1_A11CB4C08EF906E4;
class Class_2_AA1B76AD2E04D353;
namespace MoleMole { class ConfigNewbie_HighLightDynamicData; }
namespace MoleMole { class RABPageCtrlContext; }
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRABAutoBattleBase3DModelController; }
namespace MoleMole { class UIRABDepositoryWidgetController; }
namespace MoleMole { class UIRABGachaRowWidgetController; }
namespace MoleMole { class UIRABPageBtnRowWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIRABPAGECONTROLLER_CLEAREYESCREENPLAYER_OFFSET UNITYSDK_OFFSET(0x16146BC0)
#define MOLEMOLE_UIRABPAGECONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x16146260)
#define MOLEMOLE_UIRABPAGECONTROLLER_GET_RAB3DBATTLECONTROLLER_OFFSET UNITYSDK_OFFSET(0x16144860)
#define MOLEMOLE_UIRABPAGECONTROLLER_ONCLOSEBTNCLICK_OFFSET UNITYSDK_OFFSET(0x16144C60)
#define MOLEMOLE_UIRABPAGECONTROLLER_ONCLOSEOVERHANDLE_OFFSET UNITYSDK_OFFSET(0x16144B70)
#define MOLEMOLE_UIRABPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16144870)
#define MOLEMOLE_UIRABPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x16145C90)
#define MOLEMOLE_UIRABPAGECONTROLLER_ONINFOBTNCLICK_OFFSET UNITYSDK_OFFSET(0x16144BD0)
#define MOLEMOLE_UIRABPAGECONTROLLER_ONLOCALENTITYLOADED_OFFSET UNITYSDK_OFFSET(0x16146420)
#define MOLEMOLE_UIRABPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16145D10)
#define MOLEMOLE_UIRABPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16146F10)
#define MOLEMOLE_UIRABPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16144900)
#define MOLEMOLE_UIRABPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x161453B0)
#define MOLEMOLE_UIRABPAGECONTROLLER_PLAYBANGBOOEYESEQUENCE_OFFSET UNITYSDK_OFFSET(0x161469F0)
#define MOLEMOLE_UIRABPAGECONTROLLER_PLAYBLACKMASKANI_OFFSET UNITYSDK_OFFSET(0x16145D70)
#define MOLEMOLE_UIRABPAGECONTROLLER_PLAYCONTENTANI_OFFSET UNITYSDK_OFFSET(0x16146CF0)
#define MOLEMOLE_UIRABPAGECONTROLLER_PLAYSTAGEUPANI_OFFSET UNITYSDK_OFFSET(0x161460B0)
#define MOLEMOLE_UIRABPAGECONTROLLER_SETCONTENTACTIVE_OFFSET UNITYSDK_OFFSET(0x161461D0)
#define MOLEMOLE_UIRABPAGECONTROLLER_SHOWPAGE_OFFSET UNITYSDK_OFFSET(0x16145580)
#define MOLEMOLE_UIRABPAGECONTROLLER_SWITCHPAGE_OFFSET UNITYSDK_OFFSET(0x16144D40)
#define MOLEMOLE_UIRABPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16146C20)
#define MOLEMOLE_UIRABPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16146FD0)
#define MOLEMOLE_UIRABPAGECONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x16146FE0)
#define MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16147070)
#define MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x16147100)
#define MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONLOCALENTITYLOADED_OFFSET UNITYSDK_OFFSET(0x16147190)
#define MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16147240)
#define MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16147250)
#define MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16147260)
#define MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16147270)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABPageController_TypeDefinitionIndex = 65003;

	class UIRABPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		// static const ::System::String* EyeNodeName; // 0x0
		// static const ::System::String* RABPageFadeIn; // 0x0
		// static const ::System::String* RABPageFadeOut; // 0x0
		// static const ::System::String* StageUpChangeEyeDelayKey; // 0x0
		// static const ::System::String* RABContentFadeIn; // 0x0
		// static const ::System::String* RABContentFadeOut; // 0x0
		::MoleMole::UIRABAutoBattleBase3DModelController* _RAB3DBattleController; // 0x328
		::Class_2_AA1B76AD2E04D353* _view; // 0x330
		::MoleMole::RABPageCtrlContext* _openContext; // 0x338
		::Enum_3_863445FF70B314F5 _currentPageType; // 0x340
		::MoleMole::UIRABPageBtnRowWidgetController* _btnRowWidgetController; // 0x348
		::MoleMole::UIRABDepositoryWidgetController* _depositoryWidgetController; // 0x350
		::MoleMole::UIRABGachaRowWidgetController* _gachaRowWidgetController; // 0x358
		::Struct_2_D7E802D2192B688B _buddyContextHandle; // 0x360
		::MoleMole::Battle::Entity* _localEntity; // 0x368
		::UnityEngine::GameObject* _eyeGo; // 0x370
		::MoleMole::ScreenPlayer* _eyeScreenPlayer; // 0x378

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIRABAutoBattleBase3DModelController* get_RAB3DBattleController()
		{
			return ((::MoleMole::UIRABAutoBattleBase3DModelController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_GET_RAB3DBATTLECONTROLLER_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCloseOverHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_ONCLOSEOVERHANDLE_OFFSET))(this);
		}

		::System::Void OnInfoBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_ONINFOBTNCLICK_OFFSET))(this);
		}

		::System::Void OnCloseBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_ONCLOSEBTNCLICK_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void SwitchPage(::Enum_3_863445FF70B314F5 page, ::System::Int32 jumpParam, ::Enum_3_863445FF70B314F5 backPageType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_863445FF70B314F5, ::System::Int32, ::Enum_3_863445FF70B314F5))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_SWITCHPAGE_OFFSET))(this, page, jumpParam, backPageType);
		}

		::System::Void ShowPage(::Enum_3_863445FF70B314F5 type, ::System::Int32 jumpParam)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_863445FF70B314F5, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_SHOWPAGE_OFFSET))(this, type, jumpParam);
		}

		::System::Void PlayBlackMaskAni(::System::Boolean isFadeOut, ::System::Boolean isSamp, ::System::Action* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_PLAYBLACKMASKANI_OFFSET))(this, isFadeOut, isSamp, onComplete);
		}

		::System::Void PlayStageUpAni(::System::Action* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_PLAYSTAGEUPANI_OFFSET))(this, onComplete);
		}

		::Class_1_A11CB4C08EF906E4* GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* config)
		{
			return ((::Class_1_A11CB4C08EF906E4*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, config);
		}

		::System::Void OnLocalEntityLoaded(::System::Int32 configID, ::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_ONLOCALENTITYLOADED_OFFSET))(this, configID, entityHandle);
		}

		::System::Void PlayBangbooEyeSequence(::System::Int32 stageId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_PLAYBANGBOOEYESEQUENCE_OFFSET))(this, stageId);
		}

		::System::Void ClearEyeScreenPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_CLEAREYESCREENPLAYER_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void SetContentActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_SETCONTENTACTIVE_OFFSET))(this, active);
		}

		::System::Single PlayContentAni(::System::Boolean isFadeIn, ::System::Boolean withAni)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_PLAYCONTENTANI_OFFSET))(this, isFadeIn, withAni);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_1_A11CB4C08EF906E4* __base_GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* P0)
		{
			return ((::Class_1_A11CB4C08EF906E4*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnLocalEntityLoaded(::System::Int32 P0, ::MoleMole::EntityHandle P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONLOCALENTITYLOADED_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
