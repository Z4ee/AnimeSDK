#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F84CC85C56AAC977.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_A52448A5FC9E30AD;
class Class_1_D3581D8A71834B25;
class Class_2_065F6532BB8853AC;
class Class_2_208CC9941471731A_195;
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
template <typename T> class Class_1_6CC1C6D9C300847E;

#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0x19171680)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_CHANGEBACKBIND_OFFSET UNITYSDK_OFFSET(0x19172190)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_CLEARLOCALFORGETAB_OFFSET UNITYSDK_OFFSET(0x19171450)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_GETSMITHYMUSICCONFIG_OFFSET UNITYSDK_OFFSET(0x191746C0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_INITPLAYERBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x19173260)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ISFORGEWIDGETSHOWINGRESULT_OFFSET UNITYSDK_OFFSET(0x19175090)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONBACK_OFFSET UNITYSDK_OFFSET(0x19174DD0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONCLOSEFILTER_OFFSET UNITYSDK_OFFSET(0x19172940)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19170860)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONEQUIPGACHAPERFORMENDFINISHED_OFFSET UNITYSDK_OFFSET(0x19174A40)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONEQUIPGACHAPERFORMFINISHED_OFFSET UNITYSDK_OFFSET(0x191748D0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONEQUIPGACHAPERFORMSTARTFINISHED_OFFSET UNITYSDK_OFFSET(0x19174770)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONEQUIPGACHASUITUPCHANGED_OFFSET UNITYSDK_OFFSET(0x19174D30)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x19171100)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONOPENFILTER_OFFSET UNITYSDK_OFFSET(0x191728B0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x191709E0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19172470)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19171340)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x191708F0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_ONWISHLISTTARGETCHANGED_OFFSET UNITYSDK_OFFSET(0x191720E0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_OPENBLACKSMITHWIDGET_OFFSET UNITYSDK_OFFSET(0x19172C90)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_OPENFORGEWIDGET_OFFSET UNITYSDK_OFFSET(0x191729D0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_OPENSTOREWIDGET_OFFSET UNITYSDK_OFFSET(0x19173000)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_PLAYEQUIPGACHASHOW_OFFSET UNITYSDK_OFFSET(0x19174150)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_REFRESHLASTACKSMITHYLEVEL_OFFSET UNITYSDK_OFFSET(0x19170D50)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_SETNPCTRIGGER_OFFSET UNITYSDK_OFFSET(0x191727F0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_SHOWBACKBTNGAMEPADTIP_OFFSET UNITYSDK_OFFSET(0x19172850)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_TRIGGERNEWBIE_OFFSET UNITYSDK_OFFSET(0x19171A90)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x191712C0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__BIND_B__13_0_OFFSET UNITYSDK_OFFSET(0x191752C0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19175260)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19175250)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__OPENBLACKSMITHWIDGET_B__23_0_OFFSET UNITYSDK_OFFSET(0x191753D0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__OPENFORGEWIDGET_B__22_0_OFFSET UNITYSDK_OFFSET(0x191752D0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER__OPENSTOREWIDGET_B__24_0_OFFSET UNITYSDK_OFFSET(0x19175580)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONCLOSEFILTER_OFFSET UNITYSDK_OFFSET(0x19175680)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19175710)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x191757A0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONOPENFILTER_OFFSET UNITYSDK_OFFSET(0x191757D0)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19175860)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19175900)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19175910)
#define MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19175920)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopPageController_TypeDefinitionIndex = 45162;

	class UIVideoshopPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		static ::System::String** StaticGet_EquipGachaPerformEndKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIVideoshopPageController_TypeDefinitionIndex)->GetStaticField(0x370E0);
		}
		static ::System::String** StaticGet_EquipGachaPerformKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIVideoshopPageController_TypeDefinitionIndex)->GetStaticField(0x370E8);
		}
		static ::System::String** StaticGet_EquipGachaPerformStartKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIVideoshopPageController_TypeDefinitionIndex)->GetStaticField(0x370F0);
		}
		::System::Boolean _initShow; // 0x328
		::Class_1_6CC1C6D9C300847E<::Class_1_0D6706375CDAAE8C*>* savedFilterData; // 0x330
		::System::UInt32 _defaultUpSuitID; // 0x338
		::System::Int32 _fromDevelopmentAvatarID; // 0x33C
		::MoleMole::UIRoleEquipReplaceWidgetController* _equipReplaceWidget; // 0x340
		::Class_2_065F6532BB8853AC* _view; // 0x348
		::MoleMole::UIVideoshop3DModelController* _videoshop3DModelController; // 0x350
		::UnityEngine::UI::Extension::UITabButtonGroup* _tabButtonGroup; // 0x358
		::MoleMole::UIWindowController* _curWidget; // 0x360
		::Class_2_208CC9941471731A_195* _curSmithyMusicConfig; // 0x368
		::System::Boolean inClick; // 0x370
		::Class_1_D3581D8A71834B25* _scriptableAnimationPlayer; // 0x378
		::Class_1_D3581D8A71834B25* _endScriptableAnimationPlayer; // 0x380
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

		::System::Void InitPlayerBlackBoard(::Class_1_D3581D8A71834B25* player)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_INITPLAYERBLACKBOARD_OFFSET))(this, player);
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

		::Class_2_208CC9941471731A_195* GetSmithyMusicConfig()
		{
			return ((::Class_2_208CC9941471731A_195*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTROLLER_GETSMITHYMUSICCONFIG_OFFSET))(this);
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
