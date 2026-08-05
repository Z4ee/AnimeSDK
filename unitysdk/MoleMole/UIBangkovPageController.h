#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_9F36F0CF0780ECE5.h"
#include "unitysdk/Enum_3_E3D6F8A293A67E6A.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_A81CBDB57D910CB0;
class Class_2_448A9D19758F7811;
class Class_2_D1CED082B4F1459A;
class Class_2_D1CED082B4F1459A_Class_2_EDF9FC262B9CBBA4;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_BANGBOOFRIENDCLEAR_OFFSET UNITYSDK_OFFSET(0x1602A3E0)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_BANGBOOFRIENDINIT_OFFSET UNITYSDK_OFFSET(0x16029DF0)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_GETUIBANGBOOEOUSPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1602B550)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_GETUIBANGBOOPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1602B220)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1602B700)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1602B710)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_HANDLEGOBTNNAVTORIGHT_OFFSET UNITYSDK_OFFSET(0x1602E0A0)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_HANDLERIGHTNAVTOGOBTN_OFFSET UNITYSDK_OFFSET(0x1602E1B0)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_INITATTACHPOINTS_OFFSET UNITYSDK_OFFSET(0x16029F50)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1602B780)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET UNITYSDK_OFFSET(0x1602DF50)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_ONSELECTBANGBOOCHANGED_OFFSET UNITYSDK_OFFSET(0x1602A5B0)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1602BEA0)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_ONTALENTNODESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1602D8B0)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1602D170)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1602CDA0)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1602BC30)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_PLACEEOUS_OFFSET UNITYSDK_OFFSET(0x1602B390)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_REFRESHALLBUTTONS_OFFSET UNITYSDK_OFFSET(0x1602D090)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_REFRESHTOKEN_OFFSET UNITYSDK_OFFSET(0x1602C7D0)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_REGISTERUNLOCKEVENT_OFFSET UNITYSDK_OFFSET(0x1602BB60)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1602D810)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_TRYSHOWSETTLECOINRATEDIALOG_OFFSET UNITYSDK_OFFSET(0x1602CC10)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_UNREGISTERUNLOCKEVENT_OFFSET UNITYSDK_OFFSET(0x1602CFC0)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER__BANGBOOFRIENDINIT_B__9_0_OFFSET UNITYSDK_OFFSET(0x1602E3F0)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1602E2C0)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER__PLACEEOUS_B__13_0_OFFSET UNITYSDK_OFFSET(0x1602E640)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER__REGISTERUNLOCKEVENT_B__29_0_OFFSET UNITYSDK_OFFSET(0x1602E760)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER__UNREGISTERUNLOCKEVENT_B__30_0_OFFSET UNITYSDK_OFFSET(0x1602E770)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1602E780)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET UNITYSDK_OFFSET(0x1602E7D0)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1602E860)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1602E900)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1602E910)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1602E920)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1602E930)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovPageController_TypeDefinitionIndex = 49125;

	class UIBangkovPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		// static const ::System::Int32 _storeDynamicObjectId = 0x35AC63D9; // 0x0
		// static const ::System::Int32 _maxInTeamBangbooCount = 0x3; // 0x0
		// static const ::System::String* _eousAttachPointName; // 0x0
		// static const ::System::String* NameOfRightModule; // 0x0
		// static const ::System::String* NameOfGoBtnModule; // 0x0
		// static const ::System::String* NameOfWarehouseInfo; // 0x0
		// static const ::System::String* NameOfNightBtn; // 0x0
		// static const ::System::Int32 SettleCoinRateDialogId = 0x2DD1B9; // 0x0
		::Il2CppArray<::System::String*>* _bangbooAttachPointNames; // 0x328
		::Il2CppArray<::UnityEngine::Transform*>* _bangbooAttachPoints; // 0x330
		::UnityEngine::Transform* _eousAttachPoint; // 0x338
		::Class_1_A81CBDB57D910CB0* _loadProxy; // 0x340
		::Il2CppArray<::System::Int32>* _bangbooRobotIds; // 0x348
		::Il2CppArray<::UnityEngine::GameObject*>* _bangbooGameObjects; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void BangbooFriendInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_BANGBOOFRIENDINIT_OFFSET))(this);
		}

		::System::Void BangbooFriendClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_BANGBOOFRIENDCLEAR_OFFSET))(this);
		}

		::System::Void InitAttachPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_INITATTACHPOINTS_OFFSET))(this);
		}

		::System::Void OnSelectBangbooChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_ONSELECTBANGBOOCHANGED_OFFSET))(this);
		}

		::System::Void PlaceEous()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_PLACEEOUS_OFFSET))(this);
		}

		static ::Foundation::AssetPath GetUiBangbooPrefabPath(::System::Int32 bangbooId)
		{
			return ((::Foundation::AssetPath(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_GETUIBANGBOOPREFABPATH_OFFSET))(bangbooId);
		}

		static ::Foundation::AssetPath GetUiBangbooEousPrefabPath()
		{
			return ((::Foundation::AssetPath(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_GETUIBANGBOOEOUSPREFABPATH_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_448A9D19758F7811* get__viewModel()
		{
			return ((::Class_2_448A9D19758F7811*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void RegisterUnlockEvent(::System::String* lockTipsString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_REGISTERUNLOCKEVENT_OFFSET))(this, lockTipsString);
		}

		::System::Void UnregisterUnlockEvent(::System::String* lockTipsString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_UNREGISTERUNLOCKEVENT_OFFSET))(this, lockTipsString);
		}

		::System::Void RefreshAllButtons()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_REFRESHALLBUTTONS_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnTalentNodeStateChanged(::Class_2_D1CED082B4F1459A_Class_2_EDF9FC262B9CBBA4* node, ::Enum_3_E3D6F8A293A67E6A oldState, ::Enum_3_E3D6F8A293A67E6A newState)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D1CED082B4F1459A_Class_2_EDF9FC262B9CBBA4*, ::Enum_3_E3D6F8A293A67E6A, ::Enum_3_E3D6F8A293A67E6A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_ONTALENTNODESTATECHANGED_OFFSET))(this, node, oldState, newState);
		}

		::System::Void TryShowSettleCoinRateDialog(::Class_2_D1CED082B4F1459A* bangkovModel)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D1CED082B4F1459A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_TRYSHOWSETTLECOINRATEDIALOG_OFFSET))(this, bangkovModel);
		}

		::System::Void RefreshToken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_REFRESHTOKEN_OFFSET))(this);
		}

		::MoleMole::MonoGamepadModule* OnGamepadModuleTryOverrideNavigateTarget(::MoleMole::MonoGamepadModule* gamepadModule, ::MoleMole::MonoGamepadModule* navTarget, ::Enum_3_9F36F0CF0780ECE5 navDir, ::MoleMole::InputActionEvent inputEvent)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MoleMole::MonoGamepadModule*, ::Enum_3_9F36F0CF0780ECE5, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET))(this, gamepadModule, navTarget, navDir, inputEvent);
		}

		::MoleMole::MonoGamepadModule* HandleGoBtnNavToRight(::MoleMole::MonoGamepadModule* gamepadModule, ::MoleMole::MonoGamepadModule* navTarget)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_HANDLEGOBTNNAVTORIGHT_OFFSET))(this, gamepadModule, navTarget);
		}

		::MoleMole::MonoGamepadModule* HandleRightNavToGoBtn(::MoleMole::MonoGamepadModule* gamepadModule, ::MoleMole::MonoGamepadModule* navTarget)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_HANDLERIGHTNAVTOGOBTN_OFFSET))(this, gamepadModule, navTarget);
		}

		::System::Void _BangbooFriendInit_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER__BANGBOOFRIENDINIT_B__9_0_OFFSET))(this);
		}

		::System::Void _PlaceEous_b__13_0(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER__PLACEEOUS_B__13_0_OFFSET))(this, go);
		}

		::System::Void _RegisterUnlockEvent_b__29_0(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER__REGISTERUNLOCKEVENT_B__29_0_OFFSET))(this, _);
		}

		::System::Void _UnregisterUnlockEvent_b__30_0(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER__UNREGISTERUNLOCKEVENT_B__30_0_OFFSET))(this, _);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::MoleMole::MonoGamepadModule* __base_OnGamepadModuleTryOverrideNavigateTarget(::MoleMole::MonoGamepadModule* P0, ::MoleMole::MonoGamepadModule* P1, ::Enum_3_9F36F0CF0780ECE5 P2, ::MoleMole::InputActionEvent P3)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MoleMole::MonoGamepadModule*, ::Enum_3_9F36F0CF0780ECE5, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
