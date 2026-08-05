#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_E3D6F8A293A67E6A.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_0_16E4307DCC419505_175;
class Class_1_358E07D5792C2681;
class Class_2_8A53D7DD6F94B903;
class Class_2_D1CED082B4F1459A_Class_2_EDF9FC262B9CBBA4;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIBangkovTalentPageController_TalentConnectionLine; }
namespace MoleMole { class UIBangkovTalentPointWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_CREATEFULLHIERACHY_OFFSET UNITYSDK_OFFSET(0x19310400)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_CREATETALENTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x19312E20)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1930FEA0)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1930FEB0)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_ISINPUTMENUNAVIGATION_OFFSET UNITYSDK_OFFSET(0x19314D70)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1930FF20)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x19312AE0)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x19314BF0)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x19314610)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_ONNODELEVELCHANGED_OFFSET UNITYSDK_OFFSET(0x19314B80)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_ONNODESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x193146D0)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19312150)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x193124F0)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1930FFC0)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_OPENBANGKOVITEMINFOFROMCOSTICON_OFFSET UNITYSDK_OFFSET(0x193128B0)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_REFRESHALLTALENTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x19314230)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_REFRESHPROGRESSBAR_OFFSET UNITYSDK_OFFSET(0x19313970)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19312A80)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19314DC0)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER__ONINPUTACTION_B__33_0_OFFSET UNITYSDK_OFFSET(0x193152B0)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER__OPENBANGKOVITEMINFOFROMCOSTICON_B__21_0_OFFSET UNITYSDK_OFFSET(0x19315110)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x193152C0)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x19315360)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x19315410)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x19315440)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x193154D0)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19315590)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x193155A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTalentPageController_TypeDefinitionIndex = 58581;

	class UIBangkovTalentPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* _bangkovTalentRowPanelPath; // 0x0
		// static const ::System::String* _bangkovTalentRowPath; // 0x0
		// static const ::System::String* _bangkovStaffTalentPanelPath; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _talentColPanelsLayer1; // 0x318
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _talentColPanelsLayer2; // 0x320
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _talentCols; // 0x328
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _staffTalentAnchorsLayer1; // 0x330
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _staffTalentAnchorsLayer2; // 0x338
		::System::Collections::Generic::List_1<::System::Int32>* _staffTalentLevelChecks; // 0x340
		::System::Collections::Generic::Dictionary_2<::Class_2_D1CED082B4F1459A_Class_2_EDF9FC262B9CBBA4*, ::MoleMole::UIBangkovTalentPointWidgetController*>* _nodeControllers; // 0x348
		::System::Collections::Generic::Dictionary_2<::Class_2_D1CED082B4F1459A_Class_2_EDF9FC262B9CBBA4*, ::System::Collections::Generic::List_1<::MoleMole::UIBangkovTalentPageController_TalentConnectionLine*>*>* _nodeConnections; // 0x350
		::System::Collections::Generic::List_1<::MoleMole::UIBangkovTalentPointWidgetController*>* _staffTalentNodes; // 0x358
		::Class_1_358E07D5792C2681* _bangkovItemInfo; // 0x360
		::System::Boolean _blockMenuNavigation; // 0x368

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_8A53D7DD6F94B903* get__viewModel()
		{
			return ((::Class_2_8A53D7DD6F94B903*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OpenBangkovItemInfoFromCostIcon(::Class_0_16E4307DCC419505_175* iconController, ::System::Int32 logicItemId)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_OPENBANGKOVITEMINFOFROMCOSTICON_OFFSET))(this, iconController, logicItemId);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void CreateFullHierachy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_CREATEFULLHIERACHY_OFFSET))(this);
		}

		::System::Void CreateTalentConnections()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_CREATETALENTCONNECTIONS_OFFSET))(this);
		}

		::System::Void RefreshAllTalentConnections()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_REFRESHALLTALENTCONNECTIONS_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnNodeStateChanged(::Class_2_D1CED082B4F1459A_Class_2_EDF9FC262B9CBBA4* node, ::Enum_3_E3D6F8A293A67E6A oldValue, ::Enum_3_E3D6F8A293A67E6A newValue)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D1CED082B4F1459A_Class_2_EDF9FC262B9CBBA4*, ::Enum_3_E3D6F8A293A67E6A, ::Enum_3_E3D6F8A293A67E6A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_ONNODESTATECHANGED_OFFSET))(this, node, oldValue, newValue);
		}

		::System::Void OnNodeLevelChanged(::Class_2_D1CED082B4F1459A_Class_2_EDF9FC262B9CBBA4* chagnedNode, ::System::Int32 oldValue, ::System::Int32 newValue)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D1CED082B4F1459A_Class_2_EDF9FC262B9CBBA4*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_ONNODELEVELCHANGED_OFFSET))(this, chagnedNode, oldValue, newValue);
		}

		::System::Void RefreshProgressBar(::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_REFRESHPROGRESSBAR_OFFSET))(this, anim);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Boolean IsInputMenuNavigation(::MoleMole::InputLogicEventType logicEvent)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER_ISINPUTMENUNAVIGATION_OFFSET))(this, logicEvent);
		}

		::UnityEngine::RectTransform* _OpenBangkovItemInfoFromCostIcon_b__21_0()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER__OPENBANGKOVITEMINFOFROMCOSTICON_B__21_0_OFFSET))(this);
		}

		::System::Void _OnInputAction_b__33_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER__ONINPUTACTION_B__33_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
