#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_F84CC85C56AAC977.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraRenderType.h"

class CinemachineRecomposer;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIStorePageNPCConfig; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class UICameraSettingData; }
namespace MoleMole::Config { class UICameraTransformInfo; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalCameraData; }

#define MOLEMOLE_UIBASE3DMODELCONTROLLER_ADDNPCCOMPLETED_OFFSET UNITYSDK_OFFSET(0x19A875E0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_CREATEUIANIMATORENTITY_OFFSET UNITYSDK_OFFSET(0x19A87430)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_DOSTOREEXITINTERACTPERFORM_OFFSET UNITYSDK_OFFSET(0x19A880B0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_GET_AUTOPROCESSCAMERA_OFFSET UNITYSDK_OFFSET(0x19A853D0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_GET_CAMERAOVERLAYINDEX_OFFSET UNITYSDK_OFFSET(0x19A853B0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_GET_CAMERARENDERTYPE_OFFSET UNITYSDK_OFFSET(0x19A853E0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_GET_SHOW3DSCENEENTITIES_OFFSET UNITYSDK_OFFSET(0x19A853C0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19A853A0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_INITMAINVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x19A85BF0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_LOADUISTOREPAGENPCS_OFFSET UNITYSDK_OFFSET(0x19A86F70)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A86430)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A853F0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19A85D50)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_REFRESHUICAMERASETTINGINFO_OFFSET UNITYSDK_OFFSET(0x19A85E90)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_REMOVEALLUIANIMATORENTITIES_OFFSET UNITYSDK_OFFSET(0x19A869F0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_SETALLNPCACTIVE_OFFSET UNITYSDK_OFFSET(0x19A87A20)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_SETCAMERARENDERTYPE2BASE_OFFSET UNITYSDK_OFFSET(0x19A85C30)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_SETCINEMACHINERECOMPOSERPAN_OFFSET UNITYSDK_OFFSET(0x19A883B0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_SETMODELCAMERA_OFFSET UNITYSDK_OFFSET(0x19A85640)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_SETNPCCONFIG_OFFSET UNITYSDK_OFFSET(0x19A86E50)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_SETNPCTRIGGER_OFFSET UNITYSDK_OFFSET(0x19A87DC0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_SYNCTRANSFORMPOS_OFFSET UNITYSDK_OFFSET(0x19A86E10)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER_TRYGETCAMERATRANSFORMINFO_OFFSET UNITYSDK_OFFSET(0x19A87B70)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A88740)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER__ONUIOPEN_B__23_0_OFFSET UNITYSDK_OFFSET(0x19A887B0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER__SETCINEMACHINERECOMPOSERPAN_B__36_0_OFFSET UNITYSDK_OFFSET(0x19A88990)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER__SETTOPAN_OFFSET UNITYSDK_OFFSET(0x19A886D0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A889B0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A889C0)
#define MOLEMOLE_UIBASE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19A889D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBase3DModelController_TypeDefinitionIndex = 52905;

	class UIBase3DModelController : public ::MoleMole::UIWindowController
	{
	public:
		::UnityEngine::Camera* ModelCamera; // 0x318
		::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* ModelCameraData; // 0x320
		::Cinemachine::CinemachineVirtualCamera* MainVirtualCamera; // 0x328
		::CinemachineRecomposer* _cinemachineRecomposer; // 0x330
		::System::Collections::Generic::List_1<::Foundation::Tuple_2<::System::String*, ::UnityEngine::GameObject*>>* _allLoadedNPCModels; // 0x338
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UIStorePageNPCConfig*>* npcConfigDict; // 0x340
		::System::Collections::Generic::List_1<::System::UInt32>* _2DSound; // 0x348
		::System::Collections::Generic::List_1<::System::UInt32>* _cachedEntityIDs; // 0x350
		::System::String* _parentControllerName; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Int32 get_CameraOverLayIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_GET_CAMERAOVERLAYINDEX_OFFSET))(this);
		}

		::System::Boolean get_Show3dSceneEntities()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_GET_SHOW3DSCENEENTITIES_OFFSET))(this);
		}

		::System::Boolean get_AutoProcessCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_GET_AUTOPROCESSCAMERA_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::CameraRenderType get_CameraRenderType()
		{
			return ((::UnityEngine::NAPRenderPipeline0::CameraRenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_GET_CAMERARENDERTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetModelCamera(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_SETMODELCAMERA_OFFSET))(this, camera);
		}

		::System::Void InitMainVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_INITMAINVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void SetCameraRenderType2Base()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_SETCAMERARENDERTYPE2BASE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SyncTransformPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_SYNCTRANSFORMPOS_OFFSET))(this);
		}

		::System::Void SetNPCConfig(::System::String* path, ::MoleMole::UIStorePageNPCConfig* configData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::UIStorePageNPCConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_SETNPCCONFIG_OFFSET))(this, path, configData);
		}

		::System::Void LoadUIStorePageNPCs(::System::String* typeKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_LOADUISTOREPAGENPCS_OFFSET))(this, typeKey);
		}

		::System::Void SetAllNPCActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_SETALLNPCACTIVE_OFFSET))(this, active);
		}

		::MoleMole::Battle::Entity* CreateUIAnimatorEntity(::UnityEngine::GameObject* modelGO, ::MoleMole::Config::EntityType entityType, ::System::Int32 templateID, ::System::Single scale)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Config::EntityType, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_CREATEUIANIMATORENTITY_OFFSET))(this, modelGO, entityType, templateID, scale);
		}

		::System::Void RemoveAllUIAnimatorEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_REMOVEALLUIANIMATORENTITIES_OFFSET))(this);
		}

		::System::Void RefreshUICameraSettingInfo(::System::String* typeKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_REFRESHUICAMERASETTINGINFO_OFFSET))(this, typeKey);
		}

		::System::Boolean TryGetCameraTransformInfo(::MoleMole::Config::UICameraSettingData* config, ::MoleMole::Config::UICameraTransformInfo*& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::UICameraSettingData*, ::MoleMole::Config::UICameraTransformInfo*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_TRYGETCAMERATRANSFORMINFO_OFFSET))(this, config, info);
		}

		::System::Void AddNpcCompleted(::MoleMole::UIStorePageNPCConfig* npcConfig, ::UnityEngine::GameObject* model, ::System::String* typeKey)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIStorePageNPCConfig*, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_ADDNPCCOMPLETED_OFFSET))(this, npcConfig, model, typeKey);
		}

		::System::Void SetNPCTrigger(::Enum_3_F84CC85C56AAC977 performTriggerType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F84CC85C56AAC977))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_SETNPCTRIGGER_OFFSET))(this, performTriggerType);
		}

		::System::Void DoStoreExitInteractPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_DOSTOREEXITINTERACTPERFORM_OFFSET))(this);
		}

		::System::Void SetCinemachineRecomposerPan(::System::Single destPan, ::System::Single during, ::System::String* curveKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER_SETCINEMACHINERECOMPOSERPAN_OFFSET))(this, destPan, during, curveKey);
		}

		::System::Void _SetToPan(::System::Single pan)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER__SETTOPAN_OFFSET))(this, pan);
		}

		::System::Void _OnUIOpen_b__23_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER__ONUIOPEN_B__23_0_OFFSET))(this, args);
		}

		::System::Single _SetCinemachineRecomposerPan_b__36_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER__SETCINEMACHINERECOMPOSERPAN_B__36_0_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
