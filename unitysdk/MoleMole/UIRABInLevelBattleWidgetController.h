#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_2CC23FE9C9AEC1B7.h"

class Class_1_48D56DACBE4271BC;
class Class_1_980AD78C3BD5BDE0;
class Class_2_8CE3622A05CA8724;
class Class_2_911A40000FB6D691;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInLevelDamageTextContainerChildWindowController; }
namespace MoleMole { class UIRABHudContext; }
namespace MoleMole { class UIRABHudWidgetController; }
namespace MoleMole { class UIRABInLevelPageController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_BINDVIEW_OFFSET UNITYSDK_OFFSET(0x1569B760)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_CREATEHUDCONTEXT_OFFSET UNITYSDK_OFFSET(0x1569D460)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_CREATEHUD_OFFSET UNITYSDK_OFFSET(0x1569D5B0)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_HIDEHUDELEMENTADVANTAGE_OFFSET UNITYSDK_OFFSET(0x1569C5F0)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1569D830)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1569C7D0)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1569B490)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x1569CCE0)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONHUDCHANGE_OFFSET UNITYSDK_OFFSET(0x1569CD90)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONSTAGECHANGE_OFFSET UNITYSDK_OFFSET(0x1569CA70)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1569B520)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1569AFD0)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1569B1F0)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_SHOWHUDELEMENTADVANTAGE_OFFSET UNITYSDK_OFFSET(0x1569C440)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_TOGGLEHUDDRAG_OFFSET UNITYSDK_OFFSET(0x1569C300)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_TOGGLEHUDFOCUS_OFFSET UNITYSDK_OFFSET(0x1569C100)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_UPDATEHUDRENDERORDER_OFFSET UNITYSDK_OFFSET(0x1569D990)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1569DE50)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1569DC90)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1569DE90)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1569DF20)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1569DFB0)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1569E040)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABInLevelBattleWidgetController_TypeDefinitionIndex = 85608;

	class UIRABInLevelBattleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_PercentShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIRABInLevelBattleWidgetController_TypeDefinitionIndex)->GetStaticField(0x12740);
		}
		::Class_2_911A40000FB6D691* _view; // 0x2C0
		::MoleMole::UIRABInLevelPageController* _parentCtrl; // 0x2C8
		::UnityEngine::Animation* _anim; // 0x2D0
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x2D8
		::Class_1_980AD78C3BD5BDE0* _viewModel; // 0x2E0
		::MoleMole::UIInLevelDamageTextContainerChildWindowController* _damageTextContainerCtrl; // 0x2E8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::UIRABHudWidgetController*>* _hudControllers; // 0x2F0
		::System::Collections::Generic::List_1<::MoleMole::UIRABHudWidgetController*>* _hudList; // 0x2F8
		::System::Collections::Generic::Queue_1<::MoleMole::UIRABHudContext*>* _unInitQueue; // 0x300
		::System::UInt32 _pendingDragEntityId; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BindView(::MoleMole::UIInLevelDamageTextContainerChildWindowController* dmgCtrl, ::Class_1_980AD78C3BD5BDE0* viewModel)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelDamageTextContainerChildWindowController*, ::Class_1_980AD78C3BD5BDE0*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_BINDVIEW_OFFSET))(this, dmgCtrl, viewModel);
		}

		::System::Void ToggleHUDFocus(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_TOGGLEHUDFOCUS_OFFSET))(this, entityId);
		}

		::System::Void ToggleHUDDrag(::System::UInt32 entityId, ::System::Boolean isDrag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_TOGGLEHUDDRAG_OFFSET))(this, entityId, isDrag);
		}

		::System::Void ShowHUDElementAdvantage(::System::Int32 elementId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_SHOWHUDELEMENTADVANTAGE_OFFSET))(this, elementId);
		}

		::System::Void HideHUDElementAdvantage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_HIDEHUDELEMENTADVANTAGE_OFFSET))(this);
		}

		::System::Void OnBeforeUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONBEFOREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnStageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONSTAGECHANGE_OFFSET))(this);
		}

		::System::Void OnEnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONENTERBATTLE_OFFSET))(this);
		}

		::System::Void OnHUDChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONHUDCHANGE_OFFSET))(this, args);
		}

		::MoleMole::UIRABHudContext* CreateHUDContext(::Struct_2_2CC23FE9C9AEC1B7 hudData, ::Class_2_8CE3622A05CA8724* slot, ::MoleMole::UIRABHudContext* context)
		{
			return ((::MoleMole::UIRABHudContext*(*)(::PVOID, ::Struct_2_2CC23FE9C9AEC1B7, ::Class_2_8CE3622A05CA8724*, ::MoleMole::UIRABHudContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_CREATEHUDCONTEXT_OFFSET))(this, hudData, slot, context);
		}

		::System::Void CreateHUD(::MoleMole::UIRABHudContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRABHudContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_CREATEHUD_OFFSET))(this, context);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void UpdateHUDRenderOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_UPDATEHUDRENDERORDER_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
