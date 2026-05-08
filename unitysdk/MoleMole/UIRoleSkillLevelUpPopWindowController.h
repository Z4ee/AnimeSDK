#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_72D718364F0A8071.h"

class Class_2_1824EF69C8E376A3;
class Class_2_79F6D62CE30E3F8E_106;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralConversionTipsPopWindowContext; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace MoleMole { class UIRoleSkillLevelUpAttributeRowChildWindowController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_BINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x14C060F0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_GETBTNTEXT_OFFSET UNITYSDK_OFFSET(0x14C07ED0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x14C05F40)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14C05F30)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONCLICKCONSOLECHECKCONSUMEBTN_OFFSET UNITYSDK_OFFSET(0x14C08720)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONCLICKCONSUMEICONBTN_OFFSET UNITYSDK_OFFSET(0x14C08680)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C05F50)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONINFOCLICKED_OFFSET UNITYSDK_OFFSET(0x14C08090)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONITEMCHANGEHANDLE_OFFSET UNITYSDK_OFFSET(0x14C07DD0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONLEVELUPOKCLICKED_OFFSET UNITYSDK_OFFSET(0x14C08210)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14C066C0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C06500)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C05FE0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C065F0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x14C06790)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_SHOWLEVELUPERRORHINT_OFFSET UNITYSDK_OFFSET(0x14C07FD0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C08810)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER__ONLEVELUPOKCLICKED_B__37_0_OFFSET UNITYSDK_OFFSET(0x14C089E0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER__ONLEVELUPOKCLICKED_B__37_1_OFFSET UNITYSDK_OFFSET(0x14C089A0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C08BF0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14C08C80)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C08C90)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C08CA0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C08CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkillLevelUpPopWindowController_TypeDefinitionIndex = 78548;

	class UIRoleSkillLevelUpPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* NO_CONSUME_ANIM; // 0x0
		::Class_2_79F6D62CE30E3F8E_106* _view; // 0x310
		::Class_2_1824EF69C8E376A3* _cacheAvatarInfo; // 0x318
		::Struct_2_72D718364F0A8071 _skill; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UIRoleSkillLevelUpAttributeRowChildWindowController*>* _levelUpAttributeList; // 0x330
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _itemCtrlList; // 0x338
		::System::Boolean _isLevelUpAnimPlaying; // 0x340
		::System::Int32 _consumeItemID; // 0x344
		::System::Int32 firstUnenoughID; // 0x348
		::System::Boolean isJumpToCompose; // 0x34C
		::System::Int32 jumpToItemID; // 0x350
		::System::Int32 jumpTabIndex; // 0x354
		::System::Int32 composeNeedCount; // 0x358
		::System::Boolean isSuggestUseMaterialConversion; // 0x35C
		::MoleMole::UIGeneralConversionTipsPopWindowContext* conversionContext; // 0x360
		::System::Boolean isSuggestUseMaterialConversionAndAdaptive; // 0x368
		::System::Boolean isSuggestUseAdaptiveMaterial; // 0x369
		::System::Boolean isUseAdaptiveMaterial; // 0x36A
		::System::Int32 useAdaptiveItemID; // 0x36C
		::System::Int32 useAdaptiveItemCount; // 0x370
		::Foundation::Coroutine::CoroutineHandle okBtnDisableHandle; // 0x374
		::System::Boolean isWaitSkillLevelUpRsp; // 0x378

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnItemChangeHandle(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONITEMCHANGEHANDLE_OFFSET))(this, args);
		}

		::System::String* GetBtnText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_GETBTNTEXT_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Boolean isUpgrading, ::System::Boolean withOutLevelMes, ::System::Boolean closeAfterUpgradeDone, ::System::Boolean withTweenEffect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this, isUpgrading, withOutLevelMes, closeAfterUpgradeDone, withTweenEffect);
		}

		::System::Void ShowLevelUpErrorHint(::System::Boolean bShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_SHOWLEVELUPERRORHINT_OFFSET))(this, bShow);
		}

		::System::Void BindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_BINDCALLBACK_OFFSET))(this);
		}

		::System::Void OnInfoClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONINFOCLICKED_OFFSET))(this);
		}

		::System::Void OnLevelUpOKClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONLEVELUPOKCLICKED_OFFSET))(this);
		}

		::System::Void OnClickConsumeIconBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONCLICKCONSUMEICONBTN_OFFSET))(this);
		}

		::System::Void OnClickConsoleCheckConsumeBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONCLICKCONSOLECHECKCONSUMEBTN_OFFSET))(this);
		}

		::System::Void _OnLevelUpOKClicked_b__37_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER__ONLEVELUPOKCLICKED_B__37_1_OFFSET))(this);
		}

		::System::Void _OnLevelUpOKClicked_b__37_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER__ONLEVELUPOKCLICKED_B__37_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
