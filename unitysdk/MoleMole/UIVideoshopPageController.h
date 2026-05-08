#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F84CC85C56AAC977.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_A52448A5FC9E30AD;
class Class_1_C376DB68B1C74261;
class Class_2_065F6532BB8853AC;
class Class_2_208CC9941471731A_953;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRoleEquipReplaceWidgetController; }
namespace MoleMole { class UIVideoshop3DModelController; }
namespace MoleMole { class UIVideoshopShowPageController; }
namespace MoleMole { class UIWindowController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_1_A71D2AA0025EF256;

#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0x14C45C60)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_CHANGEBACKBIND_OFFSET UNITYSDK_OFFSET(0x14C466A0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_CLEARLOCALFORGETAB_OFFSET UNITYSDK_OFFSET(0x14C45A30)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_GETSMITHYMUSICCONFIG_OFFSET UNITYSDK_OFFSET(0x14C48B00)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_INITPLAYERBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x14C47700)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ISFORGEWIDGETSHOWINGRESULT_OFFSET UNITYSDK_OFFSET(0x14C494C0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONBACK_OFFSET UNITYSDK_OFFSET(0x14C49200)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONCLOSEFILTER_OFFSET UNITYSDK_OFFSET(0x14C46E50)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C44E40)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONEQUIPGACHAPERFORMENDFINISHED_OFFSET UNITYSDK_OFFSET(0x14C48E70)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONEQUIPGACHAPERFORMFINISHED_OFFSET UNITYSDK_OFFSET(0x14C48D00)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONEQUIPGACHAPERFORMSTARTFINISHED_OFFSET UNITYSDK_OFFSET(0x14C48BB0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONEQUIPGACHASUITUPCHANGED_OFFSET UNITYSDK_OFFSET(0x14C49160)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14C456E0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONOPENFILTER_OFFSET UNITYSDK_OFFSET(0x14C46DC0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14C44FC0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C46980)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C45920)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C44ED0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_OPENBLACKSMITHWIDGET_OFFSET UNITYSDK_OFFSET(0x14C471A0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_OPENFORGEWIDGET_OFFSET UNITYSDK_OFFSET(0x14C46EE0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_OPENSTOREWIDGET_OFFSET UNITYSDK_OFFSET(0x14C474A0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_PLAYEQUIPGACHASHOW_OFFSET UNITYSDK_OFFSET(0x14C48600)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_REFRESHLASTACKSMITHYLEVEL_OFFSET UNITYSDK_OFFSET(0x14C45330)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_SETNPCTRIGGER_OFFSET UNITYSDK_OFFSET(0x14C46D00)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_SHOWBACKBTNGAMEPADTIP_OFFSET UNITYSDK_OFFSET(0x14C46D60)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_TRIGGERNEWBIE_OFFSET UNITYSDK_OFFSET(0x14C46040)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x14C458A0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__BIND_B__13_0_OFFSET UNITYSDK_OFFSET(0x14C496F0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C49690)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C49680)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__OPENBLACKSMITHWIDGET_B__22_0_OFFSET UNITYSDK_OFFSET(0x14C49800)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__OPENFORGEWIDGET_B__21_0_OFFSET UNITYSDK_OFFSET(0x14C49700)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__OPENSTOREWIDGET_B__23_0_OFFSET UNITYSDK_OFFSET(0x14C49950)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONCLOSEFILTER_OFFSET UNITYSDK_OFFSET(0x14C49A50)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C49AE0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14C49B70)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONOPENFILTER_OFFSET UNITYSDK_OFFSET(0x14C49BA0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14C49C30)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C49CD0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C49CE0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C49CF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopPageController_TypeDefinitionIndex = 38297;

	class UIVideoshopPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		static ::System::String** StaticGet_EquipGachaPerformStartKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIVideoshopPageController_TypeDefinitionIndex)->GetStaticField(0x32C00);
		}
		static ::System::String** StaticGet_EquipGachaPerformKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIVideoshopPageController_TypeDefinitionIndex)->GetStaticField(0x32C08);
		}
		static ::System::String** StaticGet_EquipGachaPerformEndKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIVideoshopPageController_TypeDefinitionIndex)->GetStaticField(0x32C10);
		}
		::System::Boolean _initShow; // 0x320
		::Class_1_A71D2AA0025EF256<::Class_1_0D6706375CDAAE8C*>* savedFilterData; // 0x328
		::System::UInt32 _defaultUpSuitID; // 0x330
		::System::Int32 _fromDevelopmentAvatarID; // 0x334
		::MoleMole::UIRoleEquipReplaceWidgetController* _equipReplaceWidget; // 0x338
		::Class_2_065F6532BB8853AC* _view; // 0x340
		::MoleMole::UIVideoshop3DModelController* _videoshop3DModelController; // 0x348
		::UnityEngine::UI::Extension::UITabButtonGroup* _tabButtonGroup; // 0x350
		::MoleMole::UIWindowController* _curWidget; // 0x358
		::Class_2_208CC9941471731A_953* _curSmithyMusicConfig; // 0x360
		::System::Boolean inClick; // 0x368
		::Class_1_C376DB68B1C74261* _scriptableAnimationPlayer; // 0x370
		::Class_1_C376DB68B1C74261* _endScriptableAnimationPlayer; // 0x378
		::MoleMole::UIVideoshopShowPageController* _showPageController; // 0x380
		::System::Boolean _isInEquipGachaShow; // 0x388
		::System::Boolean _isInEquipGachaEndShow; // 0x389
		::Class_1_A52448A5FC9E30AD* _equipGachaShowArg; // 0x390

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void RefreshLastAckSmithyLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_REFRESHLASTACKSMITHYLEVEL_OFFSET))(this);
		}

		::System::Void TriggerNewBie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_TRIGGERNEWBIE_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_BIND_OFFSET))(this);
		}

		::System::Void ChangeBackBind(::UnityEngine::Events::UnityAction* backAct)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_CHANGEBACKBIND_OFFSET))(this, backAct);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetNPCTrigger(::Enum_3_F84CC85C56AAC977 performTriggerType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F84CC85C56AAC977))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_SETNPCTRIGGER_OFFSET))(this, performTriggerType);
		}

		::System::Void ShowBackBtnGamepadTip(::System::Boolean open)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_SHOWBACKBTNGAMEPADTIP_OFFSET))(this, open);
		}

		::System::Void OnOpenFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONOPENFILTER_OFFSET))(this);
		}

		::System::Void OnCloseFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONCLOSEFILTER_OFFSET))(this);
		}

		::System::Void ClearLocalForgeTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_CLEARLOCALFORGETAB_OFFSET))(this);
		}

		::System::Void OpenForgeWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_OPENFORGEWIDGET_OFFSET))(this);
		}

		::System::Void OpenBlackSmithWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_OPENBLACKSMITHWIDGET_OFFSET))(this);
		}

		::System::Void OpenStoreWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_OPENSTOREWIDGET_OFFSET))(this);
		}

		::System::Void InitPlayerBlackBoard(::Class_1_C376DB68B1C74261* player)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_INITPLAYERBLACKBOARD_OFFSET))(this, player);
		}

		::System::Void PlayEquipGachaShow(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_PLAYEQUIPGACHASHOW_OFFSET))(this, args);
		}

		::System::Void OnEquipGachaPerformStartFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONEQUIPGACHAPERFORMSTARTFINISHED_OFFSET))(this);
		}

		::System::Void OnEquipGachaPerformFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONEQUIPGACHAPERFORMFINISHED_OFFSET))(this);
		}

		::System::Void OnEquipGachaPerformEndFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONEQUIPGACHAPERFORMENDFINISHED_OFFSET))(this);
		}

		::System::Void OnEquipGachaSuitUpChanged(::System::UInt32 selectUpSuitID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONEQUIPGACHASUITUPCHANGED_OFFSET))(this, selectUpSuitID);
		}

		::Class_2_208CC9941471731A_953* GetSmithyMusicConfig()
		{
			return ((::Class_2_208CC9941471731A_953*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_GETSMITHYMUSICCONFIG_OFFSET))(this);
		}

		::System::Void OnBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONBACK_OFFSET))(this);
		}

		::System::Boolean IsForgeWidgetShowingResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ISFORGEWIDGETSHOWINGRESULT_OFFSET))(this);
		}

		::System::Void _Bind_b__13_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__BIND_B__13_0_OFFSET))(this, args);
		}

		::System::Void _OpenForgeWidget_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__OPENFORGEWIDGET_B__21_0_OFFSET))(this);
		}

		::System::Void _OpenBlackSmithWidget_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__OPENBLACKSMITHWIDGET_B__22_0_OFFSET))(this);
		}

		::System::Void _OpenStoreWidget_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__OPENSTOREWIDGET_B__23_0_OFFSET))(this);
		}

		::System::Void __base_OnCloseFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONCLOSEFILTER_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnOpenFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONOPENFILTER_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
