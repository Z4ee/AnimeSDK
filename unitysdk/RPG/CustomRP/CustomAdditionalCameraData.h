#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CameraOverlayType.h"
#include "unitysdk/RPG/CustomRP/FlagMask.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/CRPCameraInfo.h"

namespace RPG::CustomRP { class CRPGraphicsSettingsData; }
namespace RPG::CustomRP { class CRPRendererData; }
namespace RPG::CustomRP { class DynamicResolutionHeuristicProxy; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class VolumeManager; }

#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_BASECAMERA_OFFSET UNITYSDK_OFFSET(0x16A8C4B0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_CAMERAREF_OFFSET UNITYSDK_OFFSET(0x16A8C3B0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_CAMERASTACK_OFFSET UNITYSDK_OFFSET(0x16A8C2C0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_DISABLEMAINCAMERA_OFFSET UNITYSDK_OFFSET(0x16A6E5B0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_ENABLEBLURFULL_OFFSET UNITYSDK_OFFSET(0x16A6E5C0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_ENABLEDEBUGOC_OFFSET UNITYSDK_OFFSET(0x16A8C410)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_ENABLEDEFORMATION_OFFSET UNITYSDK_OFFSET(0x16A8C460)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_ENABLEHIZOC_OFFSET UNITYSDK_OFFSET(0x16A8C3C0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_MAINCAMERADATA_OFFSET UNITYSDK_OFFSET(0x16A8C4D0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_MAINCAMERA_OFFSET UNITYSDK_OFFSET(0x16A8C4C0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_NEEDUPDATE_OFFSET UNITYSDK_OFFSET(0x16A8C290)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_OVERLAYTYPE_OFFSET UNITYSDK_OFFSET(0x16A8C2A0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_VOLUMELAYERMASK_OFFSET UNITYSDK_OFFSET(0x16A8C370)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_VOLUMETRIGGER_OFFSET UNITYSDK_OFFSET(0x16A8C390)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16A8BA00)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16A8C9E0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16A8C850)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16A8C760)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16A8B980)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_REFRESHALLCOLLIDER_1_OFFSET UNITYSDK_OFFSET(0x16A8B9A0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_REFRESHALLCOLLIDER_OFFSET UNITYSDK_OFFSET(0x16A8B990)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_SET_ENABLEDEBUGOC_OFFSET UNITYSDK_OFFSET(0x16A8C430)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_SET_ENABLEDEFORMATION_OFFSET UNITYSDK_OFFSET(0x16A8C480)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_SET_ENABLEHIZOC_OFFSET UNITYSDK_OFFSET(0x16A8C3E0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_SET_OVERLAYTYPE_OFFSET UNITYSDK_OFFSET(0x16A8C2B0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_SET_VOLUMELAYERMASK_OFFSET UNITYSDK_OFFSET(0x16A8C380)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_SET_VOLUMETRIGGER_OFFSET UNITYSDK_OFFSET(0x16A8C3A0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_START_OFFSET UNITYSDK_OFFSET(0x16A8C4E0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_UPDATE_OFFSET UNITYSDK_OFFSET(0x16A8B9B0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16A8D700)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA__DISABLEHIZOCFORVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x16A8CC90)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA__PREPARE_OFFSET UNITYSDK_OFFSET(0x16A8C660)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA__UPDATEBASECAMERA_OFFSET UNITYSDK_OFFSET(0x16A8CB10)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA__UPDATEDYNAMICDATA_OFFSET UNITYSDK_OFFSET(0x16A8BA90)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA__UPDATEONSTART_OFFSET UNITYSDK_OFFSET(0x16A8C700)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA__UPDATEPRECONFIG_OFFSET UNITYSDK_OFFSET(0x16A8CD50)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA__UPDATESTATICDATA_OFFSET UNITYSDK_OFFSET(0x16A8C9F0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA__UPDATEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x16A8D5B0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CustomAdditionalCameraData_TypeDefinitionIndex = 29320;

	class CustomAdditionalCameraData : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::CustomRP::CustomAdditionalCameraData** StaticGet_s_MainCameraData()
		{
			return (::RPG::CustomRP::CustomAdditionalCameraData**)Il2CppClass::FromTypeDefinitionIndex(CustomAdditionalCameraData_TypeDefinitionIndex)->GetStaticField(0x1A6E0);
		}
		static ::UnityEngine::Camera** StaticGet_s_MainCamera()
		{
			return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(CustomAdditionalCameraData_TypeDefinitionIndex)->GetStaticField(0x1A6E8);
		}
		::RPG::CustomRP::FlagMask flag; // 0x18
		::RPG::CustomRP::FlagMask debugFlag; // 0x1C
		::RPG::CustomRP::CameraOverlayType _CameraType; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Camera*>* _Cameras; // 0x28
		::UnityEngine::LayerMask _VolumeLayerMask; // 0x30
		::UnityEngine::Transform* _VolumeTrigger; // 0x38
		::UnityEngine::Camera* _Camera; // 0x40
		::UnityEngine::Transform* _Trans; // 0x48
		::UnityEngine::Camera* _BaseCamera; // 0x50
		::UnityEngine::Rendering::CRPCameraInfo _CameraData; // 0x58
		::RPG::CustomRP::DynamicResolutionHeuristicProxy* _DynamicResolution; // 0x68
		::UnityEngine::Rendering::VolumeManager* _VolumnMgr; // 0x70
		::System::Int32 _ui3dCullingMask; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA__CTOR_OFFSET))(this);
		}

		::System::Void OnUpdate(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_ONUPDATE_OFFSET))(this, force);
		}

		::System::Void RefreshAllCollider(::System::Boolean draw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_REFRESHALLCOLLIDER_OFFSET))(this, draw);
		}

		::System::Void RefreshAllCollider_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_REFRESHALLCOLLIDER_1_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_LATEUPDATE_OFFSET))(this);
		}

		::System::Boolean get_NeedUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_NEEDUPDATE_OFFSET))(this);
		}

		::RPG::CustomRP::CameraOverlayType get_OverlayType()
		{
			return ((::RPG::CustomRP::CameraOverlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_OVERLAYTYPE_OFFSET))(this);
		}

		::System::Void set_OverlayType(::RPG::CustomRP::CameraOverlayType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CameraOverlayType))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_SET_OVERLAYTYPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Camera*>* get_CameraStack()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Camera*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_CAMERASTACK_OFFSET))(this);
		}

		::UnityEngine::LayerMask get_VolumeLayerMask()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_VOLUMELAYERMASK_OFFSET))(this);
		}

		::System::Void set_VolumeLayerMask(::UnityEngine::LayerMask value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_SET_VOLUMELAYERMASK_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_VolumeTrigger()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_VOLUMETRIGGER_OFFSET))(this);
		}

		::System::Void set_VolumeTrigger(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_SET_VOLUMETRIGGER_OFFSET))(this, value);
		}

		::UnityEngine::Camera* get_CameraRef()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_CAMERAREF_OFFSET))(this);
		}

		::System::Boolean get_EnableHiZOC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_ENABLEHIZOC_OFFSET))(this);
		}

		::System::Void set_EnableHiZOC(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_SET_ENABLEHIZOC_OFFSET))(this, value);
		}

		::System::Boolean get_EnableDebugOC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_ENABLEDEBUGOC_OFFSET))(this);
		}

		::System::Void set_EnableDebugOC(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_SET_ENABLEDEBUGOC_OFFSET))(this, value);
		}

		::System::Boolean get_EnableDeformation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_ENABLEDEFORMATION_OFFSET))(this);
		}

		::System::Void set_EnableDeformation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_SET_ENABLEDEFORMATION_OFFSET))(this, value);
		}

		::System::Boolean get_DisableMainCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_DISABLEMAINCAMERA_OFFSET))(this);
		}

		::System::Boolean get_EnableBlurFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_ENABLEBLURFULL_OFFSET))(this);
		}

		::UnityEngine::Camera* get_BaseCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_BASECAMERA_OFFSET))(this);
		}

		static ::UnityEngine::Camera* get_mainCamera()
		{
			return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_MAINCAMERA_OFFSET))();
		}

		static ::RPG::CustomRP::CustomAdditionalCameraData* get_mainCameraData()
		{
			return ((::RPG::CustomRP::CustomAdditionalCameraData*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_GET_MAINCAMERADATA_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA_ONDESTROY_OFFSET))(this);
		}

		::System::Void _Prepare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA__PREPARE_OFFSET))(this);
		}

		::System::Void _UpdateOnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA__UPDATEONSTART_OFFSET))(this);
		}

		::System::Void _UpdateStaticData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA__UPDATESTATICDATA_OFFSET))(this);
		}

		::System::Void _UpdateDynamicData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA__UPDATEDYNAMICDATA_OFFSET))(this);
		}

		::System::Void _UpdateVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA__UPDATEVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Boolean _DisableHizOCForVirtualCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA__DISABLEHIZOCFORVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void _UpdatePreConfig(::RPG::CustomRP::CRPGraphicsSettingsData* settings, ::RPG::CustomRP::CRPRendererData* renderData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*, ::RPG::CustomRP::CRPRendererData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA__UPDATEPRECONFIG_OFFSET))(this, settings, renderData);
		}

		::System::Void _UpdateBaseCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALCAMERADATA__UPDATEBASECAMERA_OFFSET))(this);
		}
	};
}
