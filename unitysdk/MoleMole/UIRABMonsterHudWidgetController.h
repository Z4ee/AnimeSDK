#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIRABHudWidgetController.h"
#include "unitysdk/Struct_2_2CC23FE9C9AEC1B7.h"

class Class_2_3A2CE11EFCE3C592;
class Class_2_3A2CE11EFCE3C592_Class_2_7D6483DC96481CD2_1;
class Class_2_70ACE5007D6AEE55;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_CLONEMATERIALS_OFFSET UNITYSDK_OFFSET(0x14C7C480)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_DISPOSEMATERIALS_OFFSET UNITYSDK_OFFSET(0x14C7C3C0)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_GETBUFFTEMPLATEOBJECT_OFFSET UNITYSDK_OFFSET(0x14C7CE30)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_GETHPANIMATION_OFFSET UNITYSDK_OFFSET(0x14C7CE90)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_GET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x14C7CD00)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C7C740)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_ONSHOWELEMENTADVANTAGE_OFFSET UNITYSDK_OFFSET(0x14C7CD60)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x14C7C880)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C7C7D0)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C7C260)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C7C6F0)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_REFRESHVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14C7C930)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_TOGGLEDRAG_OFFSET UNITYSDK_OFFSET(0x14C7CBD0)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x14C7C8D0)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C7CEF0)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER___BASE_GETBUFFTEMPLATEOBJECT_OFFSET UNITYSDK_OFFSET(0x14C7CF10)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER___BASE_GETHPANIMATION_OFFSET UNITYSDK_OFFSET(0x14C7CFA0)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER___BASE_GET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x14C7CF00)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C7D030)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER___BASE_ONSHOWELEMENTADVANTAGE_OFFSET UNITYSDK_OFFSET(0x14C7D0C0)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x14C7D160)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C7D170)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C7D270)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C7D280)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER___BASE_REFRESHVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14C7D290)
#define MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER___BASE_TOGGLEDRAG_OFFSET UNITYSDK_OFFSET(0x14C7D360)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABMonsterHudWidgetController_TypeDefinitionIndex = 56321;

	class UIRABMonsterHudWidgetController : public ::MoleMole::UIRABHudWidgetController
	{
	public:
		::Class_2_3A2CE11EFCE3C592* _view; // 0x310
		::Class_2_70ACE5007D6AEE55* _viewModel; // 0x318
		::UnityEngine::Material* _hpFillMaterial; // 0x320
		::UnityEngine::Material* _mpFillMaterial; // 0x328
		::UnityEngine::Material* _hpFillEnemyMaterial; // 0x330
		::UnityEngine::Material* _mpFillEnemyMaterial; // 0x338
		::Class_2_3A2CE11EFCE3C592_Class_2_7D6483DC96481CD2_1* _barView; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void CloneMaterials(::Class_2_3A2CE11EFCE3C592_Class_2_7D6483DC96481CD2_1* view, ::UnityEngine::Material*& hpFill, ::UnityEngine::Material*& mpFill)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_3A2CE11EFCE3C592_Class_2_7D6483DC96481CD2_1*, ::UnityEngine::Material*&, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_CLONEMATERIALS_OFFSET))(this, view, hpFill, mpFill);
		}

		::System::Void DisposeMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_DISPOSEMATERIALS_OFFSET))(this);
		}

		::System::Void RefreshViewModel(::MoleMole::Battle::Entity* curEntity, ::UnityEngine::Canvas* root, ::Struct_2_2CC23FE9C9AEC1B7 hudData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Canvas*, ::Struct_2_2CC23FE9C9AEC1B7))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_REFRESHVIEWMODEL_OFFSET))(this, curEntity, root, hudData);
		}

		::System::Void ToggleDrag(::System::Boolean isDrag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_TOGGLEDRAG_OFFSET))(this, isDrag);
		}

		::UnityEngine::Transform* get_FollowTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_GET_FOLLOWTARGET_OFFSET))(this);
		}

		::System::Void OnShowElementAdvantage(::System::Boolean isUp, ::System::Boolean isDown)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_ONSHOWELEMENTADVANTAGE_OFFSET))(this, isUp, isDown);
		}

		::UnityEngine::GameObject* GetBuffTemplateObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_GETBUFFTEMPLATEOBJECT_OFFSET))(this);
		}

		::Class_2_FDFE69FE7B72463B* GetHPAnimation()
		{
			return ((::Class_2_FDFE69FE7B72463B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER_GETHPANIMATION_OFFSET))(this);
		}

		::UnityEngine::Transform* __base_get_FollowTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER___BASE_GET_FOLLOWTARGET_OFFSET))(this);
		}

		::UnityEngine::GameObject* __base_GetBuffTemplateObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER___BASE_GETBUFFTEMPLATEOBJECT_OFFSET))(this);
		}

		::Class_2_FDFE69FE7B72463B* __base_GetHPAnimation()
		{
			return ((::Class_2_FDFE69FE7B72463B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER___BASE_GETHPANIMATION_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShowElementAdvantage(::System::Boolean P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER___BASE_ONSHOWELEMENTADVANTAGE_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_RefreshViewModel(::MoleMole::Battle::Entity* P0, ::UnityEngine::Canvas* P1, ::Struct_2_2CC23FE9C9AEC1B7 P2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Canvas*, ::Struct_2_2CC23FE9C9AEC1B7))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER___BASE_REFRESHVIEWMODEL_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_ToggleDrag(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABMONSTERHUDWIDGETCONTROLLER___BASE_TOGGLEDRAG_OFFSET))(this, P0);
		}
	};
}
