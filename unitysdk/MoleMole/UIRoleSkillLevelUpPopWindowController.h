#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_72D718364F0A8071.h"

class Class_2_1824EF69C8E376A3;
class Class_2_79F6D62CE30E3F8E_36;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralConversionTipsPopWindowContext; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace MoleMole { class UIRoleSkillLevelUpAttributeRowChildWindowController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_BINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1823E600)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_GETBTNTEXT_OFFSET UNITYSDK_OFFSET(0x182403E0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x1823E450)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1823E440)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONCLICKCONSOLECHECKCONSUMEBTN_OFFSET UNITYSDK_OFFSET(0x16524630)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONCLICKCONSUMEICONBTN_OFFSET UNITYSDK_OFFSET(0x16524590)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1823E460)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONINFOCLICKED_OFFSET UNITYSDK_OFFSET(0x16523F40)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONITEMCHANGEHANDLE_OFFSET UNITYSDK_OFFSET(0x182402E0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONLEVELUPOKCLICKED_OFFSET UNITYSDK_OFFSET(0x16524120)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1823EBD0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1823EA10)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1823E4F0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1823EB00)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1823ECA0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER_SHOWLEVELUPERRORHINT_OFFSET UNITYSDK_OFFSET(0x182404E0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16524720)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER__ONLEVELUPOKCLICKED_B__37_0_OFFSET UNITYSDK_OFFSET(0x16524870)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER__ONLEVELUPOKCLICKED_B__37_1_OFFSET UNITYSDK_OFFSET(0x16524830)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16524A80)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16524B10)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16524B20)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16524B30)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16524B40)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkillLevelUpPopWindowController_TypeDefinitionIndex = 44507;

	class UIRoleSkillLevelUpPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* NO_CONSUME_ANIM; // 0x0
		::Class_2_79F6D62CE30E3F8E_36* _view; // 0x318
		::Class_2_1824EF69C8E376A3* _cacheAvatarInfo; // 0x320
		::Struct_2_72D718364F0A8071 _skill; // 0x328
		::System::Collections::Generic::List_1<::MoleMole::UIRoleSkillLevelUpAttributeRowChildWindowController*>* _levelUpAttributeList; // 0x338
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _itemCtrlList; // 0x340
		::System::Boolean _isLevelUpAnimPlaying; // 0x348
		::System::Int32 _consumeItemID; // 0x34C
		::System::Int32 firstUnenoughID; // 0x350
		::System::Boolean isJumpToCompose; // 0x354
		::System::Int32 jumpToItemID; // 0x358
		::System::Int32 jumpTabIndex; // 0x35C
		::System::Int32 composeNeedCount; // 0x360
		::System::Boolean isSuggestUseMaterialConversion; // 0x364
		::MoleMole::UIGeneralConversionTipsPopWindowContext* conversionContext; // 0x368
		::System::Boolean isSuggestUseMaterialConversionAndAdaptive; // 0x370
		::System::Boolean isSuggestUseAdaptiveMaterial; // 0x371
		::System::Boolean isUseAdaptiveMaterial; // 0x372
		::System::Int32 useAdaptiveItemID; // 0x374
		::System::Int32 useAdaptiveItemCount; // 0x378
		::Foundation::Coroutine::CoroutineHandle okBtnDisableHandle; // 0x37C
		::System::Boolean isWaitSkillLevelUpRsp; // 0x380

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
