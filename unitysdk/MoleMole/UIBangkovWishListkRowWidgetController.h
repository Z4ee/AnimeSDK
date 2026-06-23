#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_45.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_1685EC66FBD28897;
class Class_2_1FC54A78A2ED14C8;
class Class_2_208CC9941471731A_1049;
class Class_2_4387369C4F32C83E;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIBangkovWishListkRowWidgetController_ItemData; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_FINDMANUALIDBYCURRENTQUESTID_OFFSET UNITYSDK_OFFSET(0x187CAA70)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_FINDREWARDICONCONTROLLERUNDERTRANSFORM_OFFSET UNITYSDK_OFFSET(0x187CBF60)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_GETSRCID_OFFSET UNITYSDK_OFFSET(0x187CB880)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_GETSRCTYPE_OFFSET UNITYSDK_OFFSET(0x187CB820)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_ONCLICKREMOVEWISHLIST_OFFSET UNITYSDK_OFFSET(0x187CB030)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x187CA2C0)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x187CB950)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x187CB8E0)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x187CAFA0)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x187CA410)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x187CA350)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x187CA080)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_REFRESHREWARDITEMS_OFFSET UNITYSDK_OFFSET(0x187CB190)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_REFRESHTALENTREWARDITEMS_OFFSET UNITYSDK_OFFSET(0x187CAE50)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_REFRESHTASKREWARDITEMS_OFFSET UNITYSDK_OFFSET(0x187CAD00)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_SHOWASEMPTY_OFFSET UNITYSDK_OFFSET(0x187CAA00)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x187CC4B0)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x187CC540)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x187CC5D0)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x187CC680)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x187CC6B0)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x187CC740)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x187CC7E0)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x187CC870)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovWishListkRowWidgetController_TypeDefinitionIndex = 86471;

	class UIBangkovWishListkRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_4387369C4F32C83E* _view; // 0x2F0
		::MoleMole::UIBangkovWishListkRowWidgetController_ItemData* _currentData; // 0x2F8
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _rewardItems; // 0x300
		::UnityEngine::GameObject* _lastBangkovTipOpenedRewardItemGo; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void ShowAsEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_SHOWASEMPTY_OFFSET))(this);
		}

		::System::Void OnClickRemoveWishList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_ONCLICKREMOVEWISHLIST_OFFSET))(this);
		}

		::System::Int32 FindManualIdByCurrentQuestId(::System::Int32 currentQuestId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_FINDMANUALIDBYCURRENTQUESTID_OFFSET))(this, currentQuestId);
		}

		::System::Void RefreshTaskRewardItems(::Class_2_208CC9941471731A_1049* subTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1049*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_REFRESHTASKREWARDITEMS_OFFSET))(this, subTemplate);
		}

		::System::Void RefreshTalentRewardItems(::Class_2_1FC54A78A2ED14C8* template_)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1FC54A78A2ED14C8*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_REFRESHTALENTREWARDITEMS_OFFSET))(this, template_);
		}

		::System::Void RefreshRewardItems(::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* wishList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_REFRESHREWARDITEMS_OFFSET))(this, wishList);
		}

		::Enum_3_0A3761FE34514D6C_45 GetSrcType()
		{
			return ((::Enum_3_0A3761FE34514D6C_45(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_GETSRCTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSrcId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_GETSRCID_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnGamepadModuleSelectIndexFromInput(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::MoleMole::UIItemIconBtnWidgetController* FindRewardIconControllerUnderTransform(::UnityEngine::Transform* trans)
		{
			return ((::MoleMole::UIItemIconBtnWidgetController*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_FINDREWARDICONCONTROLLERUNDERTRANSFORM_OFFSET))(this, trans);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndexFromInput(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
