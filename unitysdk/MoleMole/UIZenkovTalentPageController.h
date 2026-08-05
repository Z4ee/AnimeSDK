#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_E3D6F8A293A67E6A.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MoleMole/UIZenkovTalentPageController___c__DisplayClass35_0.h"
#include "unitysdk/Struct_2_24A53FACD918DAF7.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_AF5BA1C65F12F4B1;
class Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839;
class Class_2_F42D9A1D1AD1A61F;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIZenkovTalentPageController_Context; }
namespace MoleMole { class UIZenkovTalentPageController_TalentConnectionLine; }
namespace MoleMole { class UIZenkovTalentPointWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_CREATEFULLHIERACHY_OFFSET UNITYSDK_OFFSET(0x174A2720)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_CREATETALENTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x174A1390)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_DELAYEDAUTOSCROLL_OFFSET UNITYSDK_OFFSET(0x174A4CA0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_GETLATESTNOTIFICATIONLEVEL_OFFSET UNITYSDK_OFFSET(0x174A9430)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x174A2620)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_GET__MODEL_OFFSET UNITYSDK_OFFSET(0x174A9370)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x174A21C0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ISINPUTMENUNAVIGATION_OFFSET UNITYSDK_OFFSET(0x174A7DF0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONCLICKTALENTNODE_OFFSET UNITYSDK_OFFSET(0x174A5DA0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONCONTROLCENTERLEVELCHANGED_OFFSET UNITYSDK_OFFSET(0x174A74C0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x174A2630)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x174A7C70)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x174A7780)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONNODESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x174A7970)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x174A4B40)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x174A5E50)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x174A26D0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x174A44A0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_REFRESHALLTALENTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x174A2230)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_REFRESHLISTPANELS_OFFSET UNITYSDK_OFFSET(0x174A7510)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_SETUPTALENTLISTPANEL_OFFSET UNITYSDK_OFFSET(0x174A4D30)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_STARTAUTOSCROLL_OFFSET UNITYSDK_OFFSET(0x174A8090)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_TRYOVERRIDEALLGAMEPADSPACETARGETS_OFFSET UNITYSDK_OFFSET(0x174A61E0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x174A9590)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__ONINPUTACTION_B__32_0_OFFSET UNITYSDK_OFFSET(0x174A9820)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__TRYOVERRIDEALLGAMEPADSPACETARGETS_G__GETNEARESTNODE_35_0_OFFSET UNITYSDK_OFFSET(0x174A7EB0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__TRYOVERRIDEALLGAMEPADSPACETARGETS_G__GETNEXTROW_35_1_OFFSET UNITYSDK_OFFSET(0x174A7E40)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x174A9830)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x174A98D0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x174A9900)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x174A9990)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x174A99A0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x174A9A60)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x174A9A70)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTalentPageController_TypeDefinitionIndex = 84326;

	class UIZenkovTalentPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* _talentListPanelPath; // 0x0
		// static const ::System::String* _talentListPath; // 0x0
		::System::Collections::Generic::Dictionary_2<::Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839*, ::System::Collections::Generic::List_1<::MoleMole::UIZenkovTalentPageController_TalentConnectionLine*>*>* _nodeConnections; // 0x318
		::Struct_2_24A53FACD918DAF7 _controlCenterLevelSubscription; // 0x320
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _talentListPanelsBg; // 0x330
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _talentListPanelsFg; // 0x338
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _talentListsFg; // 0x340
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839*>* _talentPosToNode; // 0x348
		::System::Collections::Generic::Dictionary_2<::Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839*, ::MoleMole::UIZenkovTalentPointWidgetController*>* _talentPointControllers; // 0x350
		::System::Int32 nRow; // 0x358
		::Foundation::Coroutine::CoroutineHandle _animCoroutine; // 0x35C
		::System::Boolean _blockMenuNavigation; // 0x360
		::System::Boolean _spaceTargetInited; // 0x361

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void CreateTalentConnections()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_CREATETALENTCONNECTIONS_OFFSET))(this);
		}

		::System::Void RefreshAllTalentConnections()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_REFRESHALLTALENTCONNECTIONS_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_F42D9A1D1AD1A61F* get__viewModel()
		{
			return ((::Class_2_F42D9A1D1AD1A61F*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetupTalentListPanel(::UnityEngine::GameObject* root, ::System::Boolean show, ::System::Boolean locked, ::System::Int32 level, ::System::Boolean isFirst, ::System::Boolean isLast)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_SETUPTALENTLISTPANEL_OFFSET))(this, root, show, locked, level, isFirst, isLast);
		}

		::System::Void OnClickTalentNode(::Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839* node)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONCLICKTALENTNODE_OFFSET))(this, node);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void CreateFullHierachy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_CREATEFULLHIERACHY_OFFSET))(this);
		}

		::System::Void OnControlCenterLevelChanged(::Struct_2_C8629618711DF8B3& e)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONCONTROLCENTERLEVELCHANGED_OFFSET))(this, e);
		}

		::System::Void RefreshListPanels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_REFRESHLISTPANELS_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnNodeStateChanged(::Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839* node, ::Enum_3_E3D6F8A293A67E6A oldValue, ::Enum_3_E3D6F8A293A67E6A newValue)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839*, ::Enum_3_E3D6F8A293A67E6A, ::Enum_3_E3D6F8A293A67E6A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONNODESTATECHANGED_OFFSET))(this, node, oldValue, newValue);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Boolean IsInputMenuNavigation(::MoleMole::InputLogicEventType logicEvent)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ISINPUTMENUNAVIGATION_OFFSET))(this, logicEvent);
		}

		::System::Void TryOverrideAllGamepadSpaceTargets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_TRYOVERRIDEALLGAMEPADSPACETARGETS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* DelayedAutoScroll(::MoleMole::UIZenkovTalentPageController_Context* context)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::MoleMole::UIZenkovTalentPageController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_DELAYEDAUTOSCROLL_OFFSET))(this, context);
		}

		::System::Void StartAutoScroll(::MoleMole::UIZenkovTalentPageController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovTalentPageController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_STARTAUTOSCROLL_OFFSET))(this, context);
		}

		::System::Int32 GetLatestNotificationLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_GETLATESTNOTIFICATIONLEVEL_OFFSET))(this);
		}

		::Class_2_AF5BA1C65F12F4B1* get__model()
		{
			return ((::Class_2_AF5BA1C65F12F4B1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_GET__MODEL_OFFSET))(this);
		}

		::System::Void _OnInputAction_b__32_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__ONINPUTACTION_B__32_0_OFFSET))(this);
		}

		static ::Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839* _TryOverrideAllGamepadSpaceTargets_g__GetNearestNode_35_0(::System::Collections::Generic::List_1<::Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839*>* nodes, ::System::Int32 col)
		{
			return ((::Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839*(*)(::System::Collections::Generic::List_1<::Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__TRYOVERRIDEALLGAMEPADSPACETARGETS_G__GETNEARESTNODE_35_0_OFFSET))(nodes, col);
		}

		::System::Int32 _TryOverrideAllGamepadSpaceTargets_g__GetNextRow_35_1(::System::Int32 row, ::System::Int32 dir, ::MoleMole::UIZenkovTalentPageController___c__DisplayClass35_0& a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::MoleMole::UIZenkovTalentPageController___c__DisplayClass35_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__TRYOVERRIDEALLGAMEPADSPACETARGETS_G__GETNEXTROW_35_1_OFFSET))(this, row, dir, a3);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
