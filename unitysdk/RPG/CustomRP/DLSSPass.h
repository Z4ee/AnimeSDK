#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/DLSSPass_Parameters.h"
#include "unitysdk/RPG/CustomRP/DLSSPass_ViewResources.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NVIDIA/OptimalDLSSSettingsData.h"
#include "unitysdk/UnityEngine/Rendering/DLSSData.h"

namespace RPG::CustomRP { class DLSSPass_CameraState; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::NVIDIA { class GraphicsDevice; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_DLSSPASS_BEGINFRAME_OFFSET UNITYSDK_OFFSET(0x18111930)
#define RPG_CUSTOMRP_DLSSPASS_CLEANUPCAMERASTATES_OFFSET UNITYSDK_OFFSET(0x18134B20)
#define RPG_CUSTOMRP_DLSSPASS_CREATE_OFFSET UNITYSDK_OFFSET(0x18111780)
#define RPG_CUSTOMRP_DLSSPASS_CRPEXECUTE_OFFSET UNITYSDK_OFFSET(0x18111990)
#define RPG_CUSTOMRP_DLSSPASS_CRPRENDER_OFFSET UNITYSDK_OFFSET(0x18134630)
#define RPG_CUSTOMRP_DLSSPASS_GETBASERENDERSCALE_OFFSET UNITYSDK_OFFSET(0x18133940)
#define RPG_CUSTOMRP_DLSSPASS_GETRENDERSCALEFROMBASE_OFFSET UNITYSDK_OFFSET(0x18111940)
#define RPG_CUSTOMRP_DLSSPASS_GET_VERSIONINDEX_OFFSET UNITYSDK_OFFSET(0x18134810)
#define RPG_CUSTOMRP_DLSSPASS_HASCAMERASTATEEXPIRED_OFFSET UNITYSDK_OFFSET(0x18134870)
#define RPG_CUSTOMRP_DLSSPASS_INTERNALNVIDIABEGINFRAME_OFFSET UNITYSDK_OFFSET(0x18133AC0)
#define RPG_CUSTOMRP_DLSSPASS_INTERNALNVIDIARENDER_OFFSET UNITYSDK_OFFSET(0x181341F0)
#define RPG_CUSTOMRP_DLSSPASS_INTERNALNVIDIASETUPDRSSCALING_OFFSET UNITYSDK_OFFSET(0x18133DA0)
#define RPG_CUSTOMRP_DLSSPASS_ISOPTIMALSETTINGSVALID_OFFSET UNITYSDK_OFFSET(0x18134830)
#define RPG_CUSTOMRP_DLSSPASS_PROCESSINVALIDCAMERAS_OFFSET UNITYSDK_OFFSET(0x181348C0)
#define RPG_CUSTOMRP_DLSSPASS_RENDER_OFFSET UNITYSDK_OFFSET(0x181341C0)
#define RPG_CUSTOMRP_DLSSPASS_SETCAMERASTATEINVALID_OFFSET UNITYSDK_OFFSET(0x181118C0)
#define RPG_CUSTOMRP_DLSSPASS_SETUPDRSSCALING_OFFSET UNITYSDK_OFFSET(0x18133D90)
#define RPG_CUSTOMRP_DLSSPASS_SETUPFEATURE_OFFSET UNITYSDK_OFFSET(0x181334A0)
#define RPG_CUSTOMRP_DLSSPASS_SET_VERSIONINDEX_OFFSET UNITYSDK_OFFSET(0x18134820)
#define RPG_CUSTOMRP_DLSSPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18135020)
#define RPG_CUSTOMRP_DLSSPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x18133990)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DLSSPass_TypeDefinitionIndex = 34940;

	class DLSSPass : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_s_ExpectedDeviceVersion()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DLSSPass_TypeDefinitionIndex)->GetStaticField(0x10F10);
		}
		static ::System::UInt64* StaticGet_sMaximumFrameExpiration()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(DLSSPass_TypeDefinitionIndex)->GetStaticField(0x10F18);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::CustomRP::DLSSPass_CameraState*>* m_CameraStates; // 0x10
		::UnityEngine::Rendering::CommandBuffer* m_CommandBuffer; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* m_InvalidCameraKeys; // 0x20
		::UnityEngine::NVIDIA::GraphicsDevice* m_Device; // 0x28
		::System::UInt64 m_FrameId; // 0x30
		::System::Int32 _VersionIndex_k__BackingField; // 0x38

		::System::Void _ctor(::UnityEngine::NVIDIA::GraphicsDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NVIDIA::GraphicsDevice*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS__CTOR_OFFSET))(this, device);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS__CCTOR_OFFSET))();
		}

		static ::System::Boolean SetupFeature(::System::Boolean recreateDevice)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_SETUPFEATURE_OFFSET))(recreateDevice);
		}

		static ::System::Single GetBaseRenderScale(::System::Single renderScale, ::RPG::CustomRP::Quality quality)
		{
			return ((::System::Single(*)(::System::Single, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_GETBASERENDERSCALE_OFFSET))(renderScale, quality);
		}

		static ::System::Single GetRenderScaleFromBase(::System::Single baseRenderScale, ::RPG::CustomRP::Quality quality)
		{
			return ((::System::Single(*)(::System::Single, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_GETRENDERSCALEFROMBASE_OFFSET))(baseRenderScale, quality);
		}

		static ::RPG::CustomRP::DLSSPass* Create()
		{
			return ((::RPG::CustomRP::DLSSPass*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CREATE_OFFSET))();
		}

		::System::Void BeginFrame(::UnityEngine::Camera* camera, ::System::Boolean dlssActive)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_BEGINFRAME_OFFSET))(this, camera, dlssActive);
		}

		::System::Void SetupDRSScaling(::System::Boolean enableAutomaticSettings, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_SETUPDRSSCALING_OFFSET))(this, enableAutomaticSettings, camera);
		}

		::System::Void Render(::RPG::CustomRP::DLSSPass_Parameters parameters, ::RPG::CustomRP::DLSSPass_ViewResources resources, ::UnityEngine::Rendering::CommandBuffer* cmdBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::DLSSPass_Parameters, ::RPG::CustomRP::DLSSPass_ViewResources, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_RENDER_OFFSET))(this, parameters, resources, cmdBuffer);
		}

		::System::Void CRPExecute(::System::UInt32 sourceWidth, ::System::UInt32 sourceHeight, ::System::UInt32 outputWidth, ::System::UInt32 outputHeight, ::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::DLSSData& dlssData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::DLSSData&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CRPEXECUTE_OFFSET))(this, sourceWidth, sourceHeight, outputWidth, outputHeight, camera, cmd, dlssData);
		}

		::System::Void CRPRender(::RPG::CustomRP::DLSSPass_Parameters parameters, ::System::UInt32 sourceWidth, ::System::UInt32 sourceHeight, ::System::UInt32 outputWidth, ::System::UInt32 outputHeight, ::UnityEngine::Rendering::CommandBuffer* cmdBuffer, ::UnityEngine::Rendering::DLSSData& dlssData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::DLSSPass_Parameters, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::DLSSData&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CRPRENDER_OFFSET))(this, parameters, sourceWidth, sourceHeight, outputWidth, outputHeight, cmdBuffer, dlssData);
		}

		::System::Void SetCameraStateInvalid(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_SETCAMERASTATEINVALID_OFFSET))(this, camera);
		}

		::System::Int32 get_VersionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_GET_VERSIONINDEX_OFFSET))(this);
		}

		::System::Void set_VersionIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_SET_VERSIONINDEX_OFFSET))(this, value);
		}

		static ::System::Boolean IsOptimalSettingsValid(::UnityEngine::NVIDIA::OptimalDLSSSettingsData& optimalSettings)
		{
			return ((::System::Boolean(*)(::UnityEngine::NVIDIA::OptimalDLSSSettingsData&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_ISOPTIMALSETTINGSVALID_OFFSET))(optimalSettings);
		}

		::System::Boolean HasCameraStateExpired(::RPG::CustomRP::DLSSPass_CameraState* cameraState)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::DLSSPass_CameraState*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_HASCAMERASTATEEXPIRED_OFFSET))(this, cameraState);
		}

		::System::Void ProcessInvalidCameras()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_PROCESSINVALIDCAMERAS_OFFSET))(this);
		}

		::System::Void CleanupCameraStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CLEANUPCAMERASTATES_OFFSET))(this);
		}

		::System::Void InternalNVIDIASetupDRSScaling(::System::Boolean enableAutomaticSettings, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_INTERNALNVIDIASETUPDRSSCALING_OFFSET))(this, enableAutomaticSettings, camera);
		}

		::System::Void InternalNVIDIABeginFrame(::UnityEngine::Camera* camera, ::System::Boolean dlssActive)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_INTERNALNVIDIABEGINFRAME_OFFSET))(this, camera, dlssActive);
		}

		::System::Void InternalNVIDIARender(::RPG::CustomRP::DLSSPass_Parameters& parameters, ::RPG::CustomRP::DLSSPass_ViewResources resources, ::UnityEngine::Rendering::CommandBuffer* cmdBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::DLSSPass_Parameters&, ::RPG::CustomRP::DLSSPass_ViewResources, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_INTERNALNVIDIARENDER_OFFSET))(this, parameters, resources, cmdBuffer);
		}
	};
}
