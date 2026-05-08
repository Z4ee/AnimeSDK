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

#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_CHANGETOGAMEPREFAB_OFFSET UNITYSDK_OFFSET(0x14861B80)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_CREATEUIQUESTIONSANSWERSCREENWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x14861AD0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_GET_AUTOPROCESSCAMERA_OFFSET UNITYSDK_OFFSET(0x14861AC0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_GET_SCREENWIDGET_OFFSET UNITYSDK_OFFSET(0x14861AA0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_GET_SHOW3DSCENEENTITIES_OFFSET UNITYSDK_OFFSET(0x14861AB0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14861A90)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14862F40)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14862FD0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x148625A0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14862DC0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_REVERTSCENEPREFAB_OFFSET UNITYSDK_OFFSET(0x14862320)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_SETCAMERAACTIVE_OFFSET UNITYSDK_OFFSET(0x14863160)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x14862E10)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x148632E0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x148631E0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14863300)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14863390)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x148633A0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x148633B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswer3D3DModelController_TypeDefinitionIndex = 64798;

	class UIQuestionsAnswer3D3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::Int32* StaticGet_RTWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIQuestionsAnswer3D3DModelController_TypeDefinitionIndex)->GetStaticField(0x11BE0);
		}
		static ::System::Int32* StaticGet_RTHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIQuestionsAnswer3D3DModelController_TypeDefinitionIndex)->GetStaticField(0x11BE4);
		}
		// static const ::System::Int32 ScreenWidth = 0x8; // 0x0
		// static const ::System::Int32 ScreenHeight = 0x5; // 0x0
		::Class_2_489F32D82235B6BA_2* _view; // 0x358
		::MoleMole::UIQuestionsAnswerScreenWidgetController* _screenWidget; // 0x360
		::UnityEngine::NAPRenderPipeline0::RTHandle* _rt; // 0x368
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _oldSceneObj; // 0x370
		::UnityEngine::GameObject* _screenInst; // 0x378

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
