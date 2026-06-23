#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class Class_2_489F32D82235B6BA_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIQuestionsAnswerScreenWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }

#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_CHANGETOGAMEPREFAB_OFFSET UNITYSDK_OFFSET(0x15690A80)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_CREATEUIQUESTIONSANSWERSCREENWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x156909D0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_GET_AUTOPROCESSCAMERA_OFFSET UNITYSDK_OFFSET(0x156909C0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_GET_SCREENWIDGET_OFFSET UNITYSDK_OFFSET(0x156909A0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_GET_SHOW3DSCENEENTITIES_OFFSET UNITYSDK_OFFSET(0x156909B0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15690990)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15691E90)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15691F20)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x156914F0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15691D10)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_REVERTSCENEPREFAB_OFFSET UNITYSDK_OFFSET(0x15691270)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_SETCAMERAACTIVE_OFFSET UNITYSDK_OFFSET(0x156920B0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15691D60)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15692230)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15692130)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15692250)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x156922E0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x156922F0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15692300)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswer3D3DModelController_TypeDefinitionIndex = 86551;

	class UIQuestionsAnswer3D3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::Int32* StaticGet_RTHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIQuestionsAnswer3D3DModelController_TypeDefinitionIndex)->GetStaticField(0x12730);
		}
		static ::System::Int32* StaticGet_RTWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIQuestionsAnswer3D3DModelController_TypeDefinitionIndex)->GetStaticField(0x12734);
		}
		// static const ::System::Int32 ScreenWidth = 0x8; // 0x0
		// static const ::System::Int32 ScreenHeight = 0x5; // 0x0
		::Class_2_489F32D82235B6BA_2* _view; // 0x360
		::MoleMole::UIQuestionsAnswerScreenWidgetController* _screenWidget; // 0x368
		::UnityEngine::NAPRenderPipeline0::RTHandle* _rt; // 0x370
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _oldSceneObj; // 0x378
		::UnityEngine::GameObject* _screenInst; // 0x380

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswerScreenWidgetController* get_ScreenWidget()
		{
			return ((::MoleMole::UIQuestionsAnswerScreenWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_GET_SCREENWIDGET_OFFSET))(this);
		}

		::System::Boolean get_Show3dSceneEntities()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_GET_SHOW3DSCENEENTITIES_OFFSET))(this);
		}

		::System::Boolean get_AutoProcessCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_GET_AUTOPROCESSCAMERA_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswerScreenWidgetController* CreateUIQuestionsAnswerScreenWidgetController()
		{
			return ((::MoleMole::UIQuestionsAnswerScreenWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_CREATEUIQUESTIONSANSWERSCREENWIDGETCONTROLLER_OFFSET))(this);
		}

		::System::Void ChangeToGamePrefab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_CHANGETOGAMEPREFAB_OFFSET))(this);
		}

		::System::Void RevertScenePrefab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_REVERTSCENEPREFAB_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetCameraActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_SETCAMERAACTIVE_OFFSET))(this, active);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
