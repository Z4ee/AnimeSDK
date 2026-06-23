#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/MoleMole/BangbooBaseWidget.h"
#include "unitysdk/MoleMole/ButtonPressType.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class Class_2_03F4D9B3111E6159;
class Class_2_79F6D62CE30E3F8E_21;
class Class_2_DBC51CF79F50022E;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_CALMAXMATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1735A5B0)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_CLEARMATERIAL_OFFSET UNITYSDK_OFFSET(0x1735A380)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_GETALLSELECTMATERIAL_OFFSET UNITYSDK_OFFSET(0x173571A0)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_GETHASSELECTMATERIAL_OFFSET UNITYSDK_OFFSET(0x173570A0)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_GETLEFTBTNTEXT_OFFSET UNITYSDK_OFFSET(0x17357E10)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_GETRIGHTBTNTEXT_OFFSET UNITYSDK_OFFSET(0x17357EA0)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_GETTIPSTEXT_OFFSET UNITYSDK_OFFSET(0x17357F30)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_LEFTBTNCALL_OFFSET UNITYSDK_OFFSET(0x17356BB0)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_ONBEFOREWORLDUPDATE_OFFSET UNITYSDK_OFFSET(0x17358FB0)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_ONBUDDYLEVELUP_OFFSET UNITYSDK_OFFSET(0x1735B080)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17357960)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x17358A20)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x173598C0)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_ONITEMCHANGE_OFFSET UNITYSDK_OFFSET(0x17356160)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_ONMATITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x1735A7E0)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17356AB0)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17357AE0)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17355E70)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_REFRESHLEVELUPINPUTKEY_OFFSET UNITYSDK_OFFSET(0x17358B40)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_REQLEVELUP_OFFSET UNITYSDK_OFFSET(0x17357500)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_RIGHTBTNCALL_OFFSET UNITYSDK_OFFSET(0x173574B0)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_SETCONSUME_OFFSET UNITYSDK_OFFSET(0x173580B0)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_SETPROGRESSMAT_OFFSET UNITYSDK_OFFSET(0x17357750)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x17357FC0)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_TRIGGERGAMEPADADDBTN_OFFSET UNITYSDK_OFFSET(0x17359060)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_TRIGGERGAMEPADREDUCEBTN_OFFSET UNITYSDK_OFFSET(0x17359490)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x173561B0)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1735B610)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER__ONBUDDYLEVELUP_B__33_1_OFFSET UNITYSDK_OFFSET(0x1735B7F0)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER__ONBUDDYLEVELUP_B__33_2_OFFSET UNITYSDK_OFFSET(0x1735B950)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_GETLEFTBTNTEXT_OFFSET UNITYSDK_OFFSET(0x1735BA70)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_GETRIGHTBTNTEXT_OFFSET UNITYSDK_OFFSET(0x1735BB00)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_GETTIPSTEXT_OFFSET UNITYSDK_OFFSET(0x1735BB90)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_LEFTBTNCALL_OFFSET UNITYSDK_OFFSET(0x1735BC20)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1735BCB0)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1735BD40)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1735BDF0)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1735BE20)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1735BEC0)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1735BF50)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_RIGHTBTNCALL_OFFSET UNITYSDK_OFFSET(0x1735BFE0)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_SETPROGRESSMAT_OFFSET UNITYSDK_OFFSET(0x1735C070)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x1735C100)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooLevelUpWidgetController_TypeDefinitionIndex = 71281;

	class UIBangbooLevelUpWidgetController : public ::MoleMole::BangbooBaseWidget
	{
	public:
		::Class_2_DBC51CF79F50022E* _view; // 0x2E0
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _expMatItems; // 0x2E8
		::System::Int32 _nowLv; // 0x2F0
		::System::Int32 roleToMaxLvNeedExp; // 0x2F4
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* hasMaterialDir; // 0x2F8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* suggestMaterialDir; // 0x300
		::Class_2_03F4D9B3111E6159* _itemDataProxy; // 0x308
		::System::Int32 tarLevel; // 0x310
		::Class_2_79F6D62CE30E3F8E_21* _ParentView; // 0x318
		::System::Int32 curToMaxLeftEXP; // 0x320
		::MoleMole::MonoGamepadCustomList* _monoGamepadCustomList; // 0x328
		::System::Int32 _gamepadAddSelectIndex; // 0x330
		::System::Int32 _gamepadReduceSelectIndex; // 0x334
		::System::Boolean _isGamepadAddBtnPressed; // 0x338
		::System::Boolean _isGamepadReduceBtnPressed; // 0x339

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnItemChange(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_ONITEMCHANGE_OFFSET))(this, obj);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void LeftBtnCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_LEFTBTNCALL_OFFSET))(this);
		}

		::System::Boolean GetHasSelectMaterial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_GETHASSELECTMATERIAL_OFFSET))(this);
		}

		::System::Void RightBtnCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_RIGHTBTNCALL_OFFSET))(this);
		}

		::System::Void SetProgressMat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_SETPROGRESSMAT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::String* GetLeftBtnText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_GETLEFTBTNTEXT_OFFSET))(this);
		}

		::System::String* GetRightBtnText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_GETRIGHTBTNTEXT_OFFSET))(this);
		}

		::System::String* GetTipsText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_GETTIPSTEXT_OFFSET))(this);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_UPDATEUI_OFFSET))(this);
		}

		::System::Void SetProgress(::System::Single current, ::System::Single total, ::System::Int32 tarLv, ::System::Int32 tarOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_SETPROGRESS_OFFSET))(this, current, total, tarLv, tarOffset);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void RefreshLevelUpInputKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_REFRESHLEVELUPINPUTKEY_OFFSET))(this);
		}

		::System::Void OnBeforeWorldUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_ONBEFOREWORLDUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void TriggerGamepadAddBtn(::System::Int32 selectIndex, ::MoleMole::ButtonPressType pressType, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::ButtonPressType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_TRIGGERGAMEPADADDBTN_OFFSET))(this, selectIndex, pressType, force);
		}

		::System::Void TriggerGamepadReduceBtn(::System::Int32 selectIndex, ::MoleMole::ButtonPressType pressType, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::ButtonPressType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_TRIGGERGAMEPADREDUCEBTN_OFFSET))(this, selectIndex, pressType, force);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void ClearMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_CLEARMATERIAL_OFFSET))(this);
		}

		::System::Int32 CalMaxMaterialCount(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_CALMAXMATERIALCOUNT_OFFSET))(this, index);
		}

		::System::Void OnMatItemChanged(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_ONMATITEMCHANGED_OFFSET))(this, index);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GetAllSelectMaterial()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_GETALLSELECTMATERIAL_OFFSET))(this);
		}

		::System::Boolean SetConsume(::System::Boolean isenableClick)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_SETCONSUME_OFFSET))(this, isenableClick);
		}

		::System::Void OnBuddyLevelUp(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_ONBUDDYLEVELUP_OFFSET))(this, args);
		}

		::System::Void ReqLevelUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER_REQLEVELUP_OFFSET))(this);
		}

		::System::Void _OnBuddyLevelUp_b__33_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER__ONBUDDYLEVELUP_B__33_1_OFFSET))(this);
		}

		::System::Void _OnBuddyLevelUp_b__33_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER__ONBUDDYLEVELUP_B__33_2_OFFSET))(this);
		}

		::System::String* __base_GetLeftBtnText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_GETLEFTBTNTEXT_OFFSET))(this);
		}

		::System::String* __base_GetRightBtnText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_GETRIGHTBTNTEXT_OFFSET))(this);
		}

		::System::String* __base_GetTipsText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_GETTIPSTEXT_OFFSET))(this);
		}

		::System::Void __base_LeftBtnCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_LEFTBTNCALL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_RightBtnCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_RIGHTBTNCALL_OFFSET))(this);
		}

		::System::Void __base_SetProgressMat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_SETPROGRESSMAT_OFFSET))(this);
		}

		::System::Void __base_UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___BASE_UPDATEUI_OFFSET))(this);
		}
	};
}
