#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F84CC85C56AAC977.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_A52448A5FC9E30AD;
class Class_1_C376DB68B1C74261;
class Class_2_065F6532BB8853AC_1;
class Class_2_208CC9941471731A_545;
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
template <typename T> class Class_1_AD45D24679900D19;

#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0x16563760)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_CHANGEBACKBIND_OFFSET UNITYSDK_OFFSET(0x16564270)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_CLEARLOCALFORGETAB_OFFSET UNITYSDK_OFFSET(0x16563530)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_GETSMITHYMUSICCONFIG_OFFSET UNITYSDK_OFFSET(0x16566790)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_INITPLAYERBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x16565340)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ISFORGEWIDGETSHOWINGRESULT_OFFSET UNITYSDK_OFFSET(0x16567160)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONBACK_OFFSET UNITYSDK_OFFSET(0x16566EA0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONCLOSEFILTER_OFFSET UNITYSDK_OFFSET(0x16564A20)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16562940)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONEQUIPGACHAPERFORMENDFINISHED_OFFSET UNITYSDK_OFFSET(0x16566B10)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONEQUIPGACHAPERFORMFINISHED_OFFSET UNITYSDK_OFFSET(0x165669A0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONEQUIPGACHAPERFORMSTARTFINISHED_OFFSET UNITYSDK_OFFSET(0x16566840)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONEQUIPGACHASUITUPCHANGED_OFFSET UNITYSDK_OFFSET(0x16566E00)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x165631E0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONOPENFILTER_OFFSET UNITYSDK_OFFSET(0x16564990)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16562AC0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16564550)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16563420)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x165629D0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONWISHLISTTARGETCHANGED_OFFSET UNITYSDK_OFFSET(0x165641C0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_OPENBLACKSMITHWIDGET_OFFSET UNITYSDK_OFFSET(0x16564D70)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_OPENFORGEWIDGET_OFFSET UNITYSDK_OFFSET(0x16564AB0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_OPENSTOREWIDGET_OFFSET UNITYSDK_OFFSET(0x165650E0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_PLAYEQUIPGACHASHOW_OFFSET UNITYSDK_OFFSET(0x16566230)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_REFRESHLASTACKSMITHYLEVEL_OFFSET UNITYSDK_OFFSET(0x16562E30)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_SETNPCTRIGGER_OFFSET UNITYSDK_OFFSET(0x165648D0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_SHOWBACKBTNGAMEPADTIP_OFFSET UNITYSDK_OFFSET(0x16564930)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_TRIGGERNEWBIE_OFFSET UNITYSDK_OFFSET(0x16563B70)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x165633A0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__BIND_B__13_0_OFFSET UNITYSDK_OFFSET(0x16567390)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16567330)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16567320)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__OPENBLACKSMITHWIDGET_B__23_0_OFFSET UNITYSDK_OFFSET(0x165674A0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__OPENFORGEWIDGET_B__22_0_OFFSET UNITYSDK_OFFSET(0x165673A0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__OPENSTOREWIDGET_B__24_0_OFFSET UNITYSDK_OFFSET(0x16567650)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONCLOSEFILTER_OFFSET UNITYSDK_OFFSET(0x16567750)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x165677E0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16567870)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONOPENFILTER_OFFSET UNITYSDK_OFFSET(0x165678A0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16567930)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x165679D0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x165679E0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x165679F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopPageController_TypeDefinitionIndex = 68854;

	class UIVideoshopPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		static ::System::String** StaticGet_EquipGachaPerformStartKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIVideoshopPageController_TypeDefinitionIndex)->GetStaticField(0x34B00);
		}
		static ::System::String** StaticGet_EquipGachaPerformEndKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIVideoshopPageController_TypeDefinitionIndex)->GetStaticField(0x34B08);
		}
		static ::System::String** StaticGet_EquipGachaPerformKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIVideoshopPageController_TypeDefinitionIndex)->GetStaticField(0x34B10);
		}
		::System::Boolean _initShow; // 0x328
		::Class_1_AD45D24679900D19<::Class_1_0D6706375CDAAE8C*>* savedFilterData; // 0x330
		::System::UInt32 _defaultUpSuitID; // 0x338
		::System::Int32 _fromDevelopmentAvatarID; // 0x33C
		::MoleMole::UIRoleEquipReplaceWidgetController* _equipReplaceWidget; // 0x340
		::Class_2_065F6532BB8853AC_1* _view; // 0x348
		::MoleMole::UIVideoshop3DModelController* _videoshop3DModelController; // 0x350
		::UnityEngine::UI::Extension::UITabButtonGroup* _tabButtonGroup; // 0x358
		::MoleMole::UIWindowController* _curWidget; // 0x360
		::Class_2_208CC9941471731A_545* _curSmithyMusicConfig; // 0x368
		::System::Boolean inClick; // 0x370
		::Class_1_C376DB68B1C74261* _scriptableAnimationPlayer; // 0x378
		::Class_1_C376DB68B1C74261* _endScriptableAnimationPlayer; // 0x380
		::MoleMole::UIVideoshopShowPageController* _showPageController; // 0x388
		::System::Boolean _isInEquipGachaShow; // 0x390
		::System::Boolean _isInEquipGachaEndShow; // 0x391
		::Class_1_A52448A5FC9E30AD* _equipGachaShowArg; // 0x398

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

		::System::Void OnWishlistTargetChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONWISHLISTTARGETCHANGED_OFFSET))(this, args);
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

		::Class_2_208CC9941471731A_545* GetSmithyMusicConfig()
		{
			return ((::Class_2_208CC9941471731A_545*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_GETSMITHYMUSICCONFIG_OFFSET))(this);
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

		::System::Void _OpenForgeWidget_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__OPENFORGEWIDGET_B__22_0_OFFSET))(this);
		}

		::System::Void _OpenBlackSmithWidget_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__OPENBLACKSMITHWIDGET_B__23_0_OFFSET))(this);
		}

		::System::Void _OpenStoreWidget_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__OPENSTOREWIDGET_B__24_0_OFFSET))(this);
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
