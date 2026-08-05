#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIRABHudWidgetController.h"
#include "unitysdk/Struct_2_2CC23FE9C9AEC1B7.h"

class Class_2_2A983612414FECFE;
class Class_2_2A983612414FECFE_Class_2_7D6483DC96481CD2_1;
class Class_2_EE46B3662506D891;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_CLONEMATERIALS_OFFSET UNITYSDK_OFFSET(0x17A172F0)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_DISPOSEMATERIALS_OFFSET UNITYSDK_OFFSET(0x17A17230)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_GETBUFFTEMPLATEOBJECT_OFFSET UNITYSDK_OFFSET(0x17A17E80)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_GETHPANIMATION_OFFSET UNITYSDK_OFFSET(0x17A17EE0)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_GET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x17A17D50)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17A17720)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONSHOWELEMENTADVANTAGE_OFFSET UNITYSDK_OFFSET(0x17A17DB0)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17A17860)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17A177B0)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17A17110)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17A176D0)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_REFRESHVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17A17910)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_TOGGLEDRAG_OFFSET UNITYSDK_OFFSET(0x17A17C20)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17A178B0)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A17F80)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_GETBUFFTEMPLATEOBJECT_OFFSET UNITYSDK_OFFSET(0x17A17FA0)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_GETHPANIMATION_OFFSET UNITYSDK_OFFSET(0x17A18030)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_GET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x17A17F90)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17A180C0)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONSHOWELEMENTADVANTAGE_OFFSET UNITYSDK_OFFSET(0x17A18150)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17A181F0)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17A18200)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17A18300)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17A18310)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_REFRESHVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17A18320)
#define MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_TOGGLEDRAG_OFFSET UNITYSDK_OFFSET(0x17A183F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBossHudWidgetController_TypeDefinitionIndex = 44736;

	class UIRABBossHudWidgetController : public ::MoleMole::UIRABHudWidgetController
	{
	public:
		::Class_2_2A983612414FECFE* _view; // 0x310
		::Class_2_EE46B3662506D891* _viewModel; // 0x318
		::UnityEngine::Material* _hpFillMaterial; // 0x320
		::UnityEngine::Material* _mpFillMaterial; // 0x328
		::UnityEngine::Material* _hpFillMaterial_Bottom; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void CloneMaterials(::Class_2_2A983612414FECFE_Class_2_7D6483DC96481CD2_1* view, ::UnityEngine::Material*& hpFill, ::UnityEngine::Material*& hpFill_Bottom, ::UnityEngine::Material*& mpFill)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_2A983612414FECFE_Class_2_7D6483DC96481CD2_1*, ::UnityEngine::Material*&, ::UnityEngine::Material*&, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_CLONEMATERIALS_OFFSET))(this, view, hpFill, hpFill_Bottom, mpFill);
		}

		::System::Void DisposeMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_DISPOSEMATERIALS_OFFSET))(this);
		}

		::System::Void RefreshViewModel(::MoleMole::Battle::Entity* curEntity, ::UnityEngine::Canvas* root, ::Struct_2_2CC23FE9C9AEC1B7 hudData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Canvas*, ::Struct_2_2CC23FE9C9AEC1B7))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_REFRESHVIEWMODEL_OFFSET))(this, curEntity, root, hudData);
		}

		::System::Void ToggleDrag(::System::Boolean isDrag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_TOGGLEDRAG_OFFSET))(this, isDrag);
		}

		::UnityEngine::Transform* get_FollowTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_GET_FOLLOWTARGET_OFFSET))(this);
		}

		::System::Void OnShowElementAdvantage(::System::Boolean isUp, ::System::Boolean isDown)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_ONSHOWELEMENTADVANTAGE_OFFSET))(this, isUp, isDown);
		}

		::UnityEngine::GameObject* GetBuffTemplateObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_GETBUFFTEMPLATEOBJECT_OFFSET))(this);
		}

		::Class_2_FDFE69FE7B72463B* GetHPAnimation()
		{
			return ((::Class_2_FDFE69FE7B72463B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER_GETHPANIMATION_OFFSET))(this);
		}

		::UnityEngine::Transform* __base_get_FollowTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_GET_FOLLOWTARGET_OFFSET))(this);
		}

		::UnityEngine::GameObject* __base_GetBuffTemplateObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_GETBUFFTEMPLATEOBJECT_OFFSET))(this);
		}

		::Class_2_FDFE69FE7B72463B* __base_GetHPAnimation()
		{
			return ((::Class_2_FDFE69FE7B72463B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_GETHPANIMATION_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShowElementAdvantage(::System::Boolean P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONSHOWELEMENTADVANTAGE_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_RefreshViewModel(::MoleMole::Battle::Entity* P0, ::UnityEngine::Canvas* P1, ::Struct_2_2CC23FE9C9AEC1B7 P2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Canvas*, ::Struct_2_2CC23FE9C9AEC1B7))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_REFRESHVIEWMODEL_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_ToggleDrag(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSHUDWIDGETCONTROLLER___BASE_TOGGLEDRAG_OFFSET))(this, P0);
		}
	};
}
