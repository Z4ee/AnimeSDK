#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraRenderType.h"

class Class_2_17E903BDA51D43F0;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIURBANMAP3DMODELCONTROLLER_GET_CAMERARENDERTYPE_OFFSET UNITYSDK_OFFSET(0xE46B070)
#define MOLEMOLE_UIURBANMAP3DMODELCONTROLLER_GET_VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE46B000)
#define MOLEMOLE_UIURBANMAP3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xE46AF80)
#define MOLEMOLE_UIURBANMAP3DMODELCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE46AF90)
#define MOLEMOLE_UIURBANMAP3DMODELCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE46B1F0)
#define MOLEMOLE_UIURBANMAP3DMODELCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE46B080)
#define MOLEMOLE_UIURBANMAP3DMODELCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xE46B290)
#define MOLEMOLE_UIURBANMAP3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xE46B140)
#define MOLEMOLE_UIURBANMAP3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE46B3C0)
#define MOLEMOLE_UIURBANMAP3DMODELCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE46B430)
#define MOLEMOLE_UIURBANMAP3DMODELCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xE46B4D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMap3DModelController_TypeDefinitionIndex = 66163;

	class UIUrbanMap3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_17E903BDA51D43F0* get__viewModel()
		{
			return ((::Class_2_17E903BDA51D43F0*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::Class_2_17E903BDA51D43F0* get_ViewModel()
		{
			return ((::Class_2_17E903BDA51D43F0*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTROLLER_GET_VIEWMODEL_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::CameraRenderType get_CameraRenderType()
		{
			return ((::UnityEngine::NAPRenderPipeline0::CameraRenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTROLLER_GET_CAMERARENDERTYPE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAP3DMODELCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
