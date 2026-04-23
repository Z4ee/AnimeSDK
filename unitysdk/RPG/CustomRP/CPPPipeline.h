#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCmdSlot.h"
#include "unitysdk/RPG/CustomRP/CPPPipeline_PipelineCmd.h"
#include "unitysdk/RPG/CustomRP/CRPPipelineBase.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/RPG/CustomRP/ReflectionRenderData.h"
#include "unitysdk/UnityEngine/DeformationSetting.h"
#include "unitysdk/UnityEngine/RPGGrassSetting.h"
#include "unitysdk/UnityEngine/Rendering/AOQuality.h"
#include "unitysdk/UnityEngine/Rendering/AddCmdType.h"
#include "unitysdk/UnityEngine/Rendering/AmbientVolumneData.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Rendering/CRPTestConfig.h"
#include "unitysdk/UnityEngine/Rendering/CRPipelineAsset.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsDeviceType.h"
#include "unitysdk/UnityEngine/Rendering/LightLodConfig.h"
#include "unitysdk/UnityEngine/Rendering/PassPos.h"
#include "unitysdk/UnityEngine/Rendering/ReflectionInfo.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/ShadowRuntimeSettings.h"
#include "unitysdk/UnityEngine/Rendering/VsmSettings.h"

class ICmdExecuteCb;
namespace RPG::CustomRP { class AvatarEffectHelper; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_LocalLightLOD; }
namespace RPG::CustomRP { class CRPRendererData; }
namespace RPG::CustomRP { class CapsuleAOPass; }
namespace RPG::CustomRP { class CapturePostProcessPass; }
namespace RPG::CustomRP { class CustomPostProcessPass2; }
namespace RPG::CustomRP { class CustomRenderPipelineAsset; }
namespace RPG::CustomRP { class DLSSPass; }
namespace RPG::CustomRP { class RPGAmbientOcclusion; }
namespace RPG::CustomRP { class RPGTemporalAntialiasing; }
namespace RPG::CustomRP { class SWRTPass; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class VolumeStack; }

#define RPG_CUSTOMRP_CPPPIPELINE_CHECKUAVREAD_OFFSET UNITYSDK_OFFSET(0x1810AA50)
#define RPG_CUSTOMRP_CPPPIPELINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x181097E0)
#define RPG_CUSTOMRP_CPPPIPELINE_FORWARDUPDATESHADOWDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1810CB40)
#define RPG_CUSTOMRP_CPPPIPELINE_GETCMDCB_OFFSET UNITYSDK_OFFSET(0x1810F9F0)
#define RPG_CUSTOMRP_CPPPIPELINE_ISOFFSCREENCAMERA_OFFSET UNITYSDK_OFFSET(0x1810AA10)
#define RPG_CUSTOMRP_CPPPIPELINE_ONCHANGEENV_OFFSET UNITYSDK_OFFSET(0x1810A320)
#define RPG_CUSTOMRP_CPPPIPELINE_ONENTERSCENE_OFFSET UNITYSDK_OFFSET(0x1810A310)
#define RPG_CUSTOMRP_CPPPIPELINE_PREPARE_OFFSET UNITYSDK_OFFSET(0x18109D90)
#define RPG_CUSTOMRP_CPPPIPELINE_REGISTCMDCB_OFFSET UNITYSDK_OFFSET(0x1810F3D0)
#define RPG_CUSTOMRP_CPPPIPELINE_RENDER_OFFSET UNITYSDK_OFFSET(0x18109D80)
#define RPG_CUSTOMRP_CPPPIPELINE_UNREGISTCMDCB_OFFSET UNITYSDK_OFFSET(0x1810F720)
#define RPG_CUSTOMRP_CPPPIPELINE_UPDATEGLOBALAMBIENT_OFFSET UNITYSDK_OFFSET(0x1810C0D0)
#define RPG_CUSTOMRP_CPPPIPELINE_UPDATEOPAQUECOPY_OFFSET UNITYSDK_OFFSET(0x1810A930)
#define RPG_CUSTOMRP_CPPPIPELINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18112BF0)
#define RPG_CUSTOMRP_CPPPIPELINE__CLEANCMD_OFFSET UNITYSDK_OFFSET(0x1810A660)
#define RPG_CUSTOMRP_CPPPIPELINE__CONVERTAOQUALITY_OFFSET UNITYSDK_OFFSET(0x1810BC60)
#define RPG_CUSTOMRP_CPPPIPELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x181042F0)
#define RPG_CUSTOMRP_CPPPIPELINE__INITCMD_1_OFFSET UNITYSDK_OFFSET(0x18108F70)
#define RPG_CUSTOMRP_CPPPIPELINE__INITCMD_OFFSET UNITYSDK_OFFSET(0x1810FBB0)
#define RPG_CUSTOMRP_CPPPIPELINE__POSTUPDATE_OFFSET UNITYSDK_OFFSET(0x18108770)
#define RPG_CUSTOMRP_CPPPIPELINE__PREUPDATE_OFFSET UNITYSDK_OFFSET(0x18109EF0)
#define RPG_CUSTOMRP_CPPPIPELINE__SETCMDSLOT_OFFSET UNITYSDK_OFFSET(0x1810FC50)
#define RPG_CUSTOMRP_CPPPIPELINE__SETLIGHTLOD_OFFSET UNITYSDK_OFFSET(0x1810AA20)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEADAPTIVETESSELLATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x1810E040)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEAFTEROPQAUEPASS_OFFSET UNITYSDK_OFFSET(0x1810FEC0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEAO_OFFSET UNITYSDK_OFFSET(0x1810BC70)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEBEFOREPREPAREPASS_OFFSET UNITYSDK_OFFSET(0x1810FC90)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATECAPSULEAOPASS_OFFSET UNITYSDK_OFFSET(0x1810FDE0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATECAPTUREPP_OFFSET UNITYSDK_OFFSET(0x18110C60)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATECAPTURE_OFFSET UNITYSDK_OFFSET(0x1810BA10)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATECHAR_OFFSET UNITYSDK_OFFSET(0x1810DBE0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATECMD_OFFSET UNITYSDK_OFFSET(0x1810BA30)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEDEBUG_OFFSET UNITYSDK_OFFSET(0x1810A300)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEDEFORMATIONSETTING_OFFSET UNITYSDK_OFFSET(0x1810E4A0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEDLSS_OFFSET UNITYSDK_OFFSET(0x18110000)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEFLAGS_OFFSET UNITYSDK_OFFSET(0x1810F130)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEGLOBALSDF_OFFSET UNITYSDK_OFFSET(0x1810E0C0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEGPUTYPE_OFFSET UNITYSDK_OFFSET(0x18105E30)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEGRASSCONFIG_OFFSET UNITYSDK_OFFSET(0x1810E0F0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEHIZ_OFFSET UNITYSDK_OFFSET(0x1810F0B0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATELEGECY_OFFSET UNITYSDK_OFFSET(0x1810F3B0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATELIGHTING_OFFSET UNITYSDK_OFFSET(0x1810C9C0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEPOSTCMD_OFFSET UNITYSDK_OFFSET(0x1810BC10)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEPP_OFFSET UNITYSDK_OFFSET(0x18110630)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEPROBE_OFFSET UNITYSDK_OFFSET(0x1810BFE0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEREFLECTION_OFFSET UNITYSDK_OFFSET(0x1810B150)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEREFRACTION_OFFSET UNITYSDK_OFFSET(0x1810DBC0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATESHADOWEXT_OFFSET UNITYSDK_OFFSET(0x1810DA80)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATESHADOW_OFFSET UNITYSDK_OFFSET(0x1810CCC0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATESSR_OFFSET UNITYSDK_OFFSET(0x1810C700)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATESTATICDATA_OFFSET UNITYSDK_OFFSET(0x18105FA0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATESWRTPASS_OFFSET UNITYSDK_OFFSET(0x1810FE90)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATETAA_OFFSET UNITYSDK_OFFSET(0x1810C560)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATETESTCONFIG_OFFSET UNITYSDK_OFFSET(0x18108EC0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATETRANSPARENTPASS_OFFSET UNITYSDK_OFFSET(0x1810FED0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEUI_OFFSET UNITYSDK_OFFSET(0x1810E7B0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICCLOUDSPHERE_OFFSET UNITYSDK_OFFSET(0x1810DD00)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICCLOUD_OFFSET UNITYSDK_OFFSET(0x1810DCB0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0x1810DD50)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICLIGHT_OFFSET UNITYSDK_OFFSET(0x1810DF70)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOXELIRRADIANCECACHESETTINGS_OFFSET UNITYSDK_OFFSET(0x1810DFD0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEVRS_OFFSET UNITYSDK_OFFSET(0x1810F3C0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEWATER_OFFSET UNITYSDK_OFFSET(0x1810C950)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATE_OFFSET UNITYSDK_OFFSET(0x18109F60)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CPPPipeline_TypeDefinitionIndex = 34921;

	class CPPPipeline : public ::RPG::CustomRP::CRPPipelineBase
	{
	public:
		static ::System::Boolean* StaticGet_UAVCanReadWriteMultipleMipsOnSameTexture()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CPPPipeline_TypeDefinitionIndex)->GetStaticField(0x109E0);
		}
		static ::System::Boolean* StaticGet_CheckUAVReadDone()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CPPPipeline_TypeDefinitionIndex)->GetStaticField(0x109E1);
		}
		::UnityEngine::Rendering::CommandBuffer* _CapturePPCmd; // 0x20
		::UnityEngine::Rendering::CommandBuffer* _AfterGBufferCmd; // 0x28
		::UnityEngine::Rendering::VsmSettings _VsmSettings; // 0x30
		::UnityEngine::Rendering::CommandBuffer* _AfterDepthCopyCmd; // 0x88
		::UnityEngine::Rendering::CommandBuffer* _EnvCmd; // 0x90
		::UnityEngine::Rendering::CommandBuffer* _ReflectionCmd; // 0x98
		::RPG::CustomRP::AvatarEffectHelper* _AvatarBeforeTransparentRender; // 0xA0
		::RPG::CustomRP::CustomPostProcessPass2* _PostProcessPass; // 0xA8
		::RPG::CustomRP::CapturePostProcessPass* _CapturePPPass; // 0xB0
		::UnityEngine::Rendering::CommandBuffer* _PostProcessCmd; // 0xB8
		::RPG::CustomRP::AvatarEffectHelper* _AvatarRender; // 0xC0
		::RPG::CustomRP::RPGAmbientOcclusion* _aoSetting; // 0xC8
		::RPG::CustomRP::ReflectionRenderData _ReflectionData; // 0xD0
		::UnityEngine::Rendering::CommandBuffer* _BeforeTransparentCmd; // 0x160
		::RPG::CustomRP::CRPRendererData* _DataRef; // 0x168
		::UnityEngine::Rendering::CommandBuffer* _AfterTransparentCmd; // 0x170
		::UnityEngine::Rendering::CommandBuffer* _UIPPCmd; // 0x178
		::Il2CppArray<::RPG::CustomRP::CPPPipeline_PipelineCmd>* _CmdCb; // 0x180
		::UnityEngine::Rendering::ShadowRuntimeSettings _ShadowSettings; // 0x188
		::UnityEngine::Rendering::CommandBuffer* _BeforeUberCmd; // 0x318
		::UnityEngine::Rendering::VolumeStack* _StackRef; // 0x320
		::UnityEngine::Rendering::CommandBuffer* _BeforeTAACmd; // 0x328
		::RPG::CustomRP::RPGTemporalAntialiasing* _taaSetting; // 0x330
		::UnityEngine::Rendering::CommandBuffer* _AfterOpqaueCmd; // 0x338
		::RPG::CustomRP::CapsuleAOPass* _CapsuleAOPass; // 0x340
		::RPG::CustomRP::SWRTPass* _SWRTPass; // 0x348
		::RPG::CustomRP::DLSSPass* _DLSSPass; // 0x350
		::UnityEngine::Rendering::CommandBuffer* _AfterHiZCmd; // 0x358
		::System::Int32 componentCachedVersion; // 0x360
		::UnityEngine::Rendering::GraphicsDeviceType _DeviceType; // 0x364
		::UnityEngine::DeformationSetting _DeformationSetting; // 0x368
		::System::Int32 _ui3dCullingMask; // 0x394
		::UnityEngine::RPGGrassSetting _GrassSetting; // 0x398
		::System::Boolean _HasPP; // 0x3C8
		::System::Boolean _IsOffscreenCamera; // 0x3C9
		::UnityEngine::Rendering::AmbientVolumneData _GlobalAmbientData; // 0x3CC
		::UnityEngine::Rendering::ReflectionInfo _ReflectionInfo; // 0x43C
		::System::Single _RenderScale; // 0x47C
		::UnityEngine::Rendering::CRPipelineAsset _InternalAsset; // 0x480
		::UnityEngine::Rendering::CRPTestConfig _TestConfig; // 0xAB0

		::System::Void _ctor(::RPG::CustomRP::CustomRenderPipelineAsset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomRenderPipelineAsset*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__CTOR_OFFSET))(this, asset);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__CCTOR_OFFSET))();
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Render(::UnityEngine::Rendering::ScriptableRenderContext renderContext, ::Il2CppArray<::UnityEngine::Camera*>* cameras)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::Il2CppArray<::UnityEngine::Camera*>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_RENDER_OFFSET))(this, renderContext, cameras);
		}

		::System::Void Prepare(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CRPMainCameraDesc& mainCameraDesc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_PREPARE_OFFSET))(this, camera, mainCameraDesc);
		}

		::System::Void OnEnterScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_ONENTERSCENE_OFFSET))(this);
		}

		::System::Void OnChangeEnv(::System::Boolean isLeaveScene)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_ONCHANGEENV_OFFSET))(this, isLeaveScene);
		}

		static ::System::Void UpdateOpaqueCopy(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache, ::System::Boolean& opaqueTexEnable, ::System::Boolean& transparentPreZ)
		{
			return ((::System::Void(*)(::RPG::CustomRP::CRPGraphicsSettingsData*, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_UPDATEOPAQUECOPY_OFFSET))(settingCache, opaqueTexEnable, transparentPreZ);
		}

		::System::Boolean IsOffscreenCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_ISOFFSCREENCAMERA_OFFSET))(this);
		}

		::System::Void _SetLightLod(::UnityEngine::Rendering::LightLodConfig& config, ::RPG::CustomRP::CRPGraphicsSettingsData_LocalLightLOD* lod)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::LightLodConfig&, ::RPG::CustomRP::CRPGraphicsSettingsData_LocalLightLOD*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__SETLIGHTLOD_OFFSET))(this, config, lod);
		}

		::System::Void CheckUAVRead(::RPG::CustomRP::CRPRendererData* renderAsset)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPRendererData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_CHECKUAVREAD_OFFSET))(this, renderAsset);
		}

		::System::Void _UpdateStaticData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATESTATICDATA_OFFSET))(this);
		}

		::System::Void _PreUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__PREUPDATE_OFFSET))(this);
		}

		::System::Void _UpdateReflection(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CRPMainCameraDesc& mainCameraDesc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEREFLECTION_OFFSET))(this, camera, mainCameraDesc);
		}

		::System::Void _UpdateCapture(::System::Int32 cameraType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATECAPTURE_OFFSET))(this, cameraType);
		}

		::System::Void _Update(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CRPMainCameraDesc& mainCameraDesc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATE_OFFSET))(this, camera, mainCameraDesc);
		}

		::UnityEngine::Rendering::AOQuality _ConvertAOQuality(::RPG::CustomRP::Quality quality)
		{
			return ((::UnityEngine::Rendering::AOQuality(*)(::PVOID, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__CONVERTAOQUALITY_OFFSET))(this, quality);
		}

		::System::Void _UpdateAO(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEAO_OFFSET))(this, settingCache);
		}

		::System::Void _UpdateProbe(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEPROBE_OFFSET))(this, settingCache);
		}

		::System::Void UpdateGlobalAmbient(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_UPDATEGLOBALAMBIENT_OFFSET))(this, settingCache);
		}

		::System::Void _UpdateTAA(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATETAA_OFFSET))(this, settingCache);
		}

		::System::Void _UpdateSSR(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache, ::System::Int32 cameraType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATESSR_OFFSET))(this, settingCache, cameraType);
		}

		::System::Void _UpdateWater(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEWATER_OFFSET))(this, settingCache);
		}

		::System::Void _UpdateLighting(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATELIGHTING_OFFSET))(this, settingCache);
		}

		static ::System::Void ForwardUpdateShadowDynamic()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_FORWARDUPDATESHADOWDYNAMIC_OFFSET))();
		}

		static ::System::Void _UpdateShadow(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache, ::UnityEngine::Rendering::ShadowRuntimeSettings& shadowSettings, ::UnityEngine::Rendering::VsmSettings& vsmSettings)
		{
			return ((::System::Void(*)(::RPG::CustomRP::CRPGraphicsSettingsData*, ::UnityEngine::Rendering::ShadowRuntimeSettings&, ::UnityEngine::Rendering::VsmSettings&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATESHADOW_OFFSET))(settingCache, shadowSettings, vsmSettings);
		}

		::System::Void _UpdateShadowExt(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATESHADOWEXT_OFFSET))(this, settingCache);
		}

		::System::Void _UpdateRefraction(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache, ::System::UInt32 cameraFlag)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEREFRACTION_OFFSET))(this, settingCache, cameraFlag);
		}

		::System::Void _UpdateChar(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATECHAR_OFFSET))(this, settingCache);
		}

		::System::Void _UpdateVolumetricCloud(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICCLOUD_OFFSET))(this, settingCache);
		}

		::System::Void _UpdateVolumetricCloudSphere(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICCLOUDSPHERE_OFFSET))(this, settingCache);
		}

		::System::Void _UpdateVolumetricFog(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICFOG_OFFSET))(this, settingCache);
		}

		::System::Void _UpdateVolumetricLight(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICLIGHT_OFFSET))(this, settingCache);
		}

		::System::Void _UpdateVoxelIrradianceCacheSettings(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOXELIRRADIANCECACHESETTINGS_OFFSET))(this, settingCache);
		}

		::System::Void _UpdateAdaptiveTessellationSettings(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEADAPTIVETESSELLATIONSETTINGS_OFFSET))(this, settingCache);
		}

		::System::Void _UpdateGlobalSDF(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEGLOBALSDF_OFFSET))(this, settingCache);
		}

		::System::Void _UpdateGrassConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEGRASSCONFIG_OFFSET))(this);
		}

		::System::Void _UpdateDeformationSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEDEFORMATIONSETTING_OFFSET))(this);
		}

		::System::Void _UpdateUI(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEUI_OFFSET))(this, settingCache);
		}

		::System::Void _UpdateHiZ(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEHIZ_OFFSET))(this, settingCache);
		}

		::System::Void _UpdateGPUType(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEGPUTYPE_OFFSET))(this, settingCache);
		}

		::System::Void _UpdateFlags(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEFLAGS_OFFSET))(this, settingCache);
		}

		::System::Void _PostUpdate(::System::UInt32 cameraFlag, ::System::Int32 cameraType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__POSTUPDATE_OFFSET))(this, cameraFlag, cameraType);
		}

		::System::Void _UpdateLegecy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATELEGECY_OFFSET))(this);
		}

		::System::Void _UpdateTestConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATETESTCONFIG_OFFSET))(this);
		}

		::System::Void _UpdateVRS(::RPG::CustomRP::CRPGraphicsSettingsData* settingCache)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEVRS_OFFSET))(this, settingCache);
		}

		::System::Void _UpdateDebug(::UnityEngine::Rendering::CRPMainCameraDesc& mainCameraDesc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEDEBUG_OFFSET))(this, mainCameraDesc);
		}

		static ::System::Void RegistCmdCb(::PipelineCmdSlot slot, ::ICmdExecuteCb* cb)
		{
			return ((::System::Void(*)(::PipelineCmdSlot, ::ICmdExecuteCb*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_REGISTCMDCB_OFFSET))(slot, cb);
		}

		static ::System::Void UnRegistCmdCb(::PipelineCmdSlot slot, ::ICmdExecuteCb* cb)
		{
			return ((::System::Void(*)(::PipelineCmdSlot, ::ICmdExecuteCb*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_UNREGISTCMDCB_OFFSET))(slot, cb);
		}

		static ::ICmdExecuteCb* GetCmdCb(::PipelineCmdSlot slot, ::System::Int32 key)
		{
			return ((::ICmdExecuteCb*(*)(::PipelineCmdSlot, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_GETCMDCB_OFFSET))(slot, key);
		}

		::System::Void _InitCmd(::System::Int32 cameraType, ::UnityEngine::Rendering::PassPos pos, ::System::Int32 offset, ::UnityEngine::Rendering::AddCmdType addCmdType, ::UnityEngine::Rendering::CommandBuffer*& cmd, ::System::String* name, ::System::Boolean force, ::System::Boolean clearAfterExecute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::PassPos, ::System::Int32, ::UnityEngine::Rendering::AddCmdType, ::UnityEngine::Rendering::CommandBuffer*&, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__INITCMD_OFFSET))(this, cameraType, pos, offset, addCmdType, cmd, name, force, clearAfterExecute);
		}

		::System::Void _SetCmdSlot(::PipelineCmdSlot slot, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCmdSlot, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__SETCMDSLOT_OFFSET))(this, slot, cmd);
		}

		::System::Void _InitCmd_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__INITCMD_1_OFFSET))(this);
		}

		::System::Void _CleanCmd(::System::Boolean remove)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__CLEANCMD_OFFSET))(this, remove);
		}

		::System::Void _UpdateCmd(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CRPMainCameraDesc& mainCameraDesc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATECMD_OFFSET))(this, camera, mainCameraDesc);
		}

		::System::Void _UpdatePostCmd(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CRPMainCameraDesc& mainCameraDesc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEPOSTCMD_OFFSET))(this, camera, mainCameraDesc);
		}

		::System::Void _UpdateBeforePreparePass(::UnityEngine::Rendering::CRPMainCameraDesc& mainCameraDesc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEBEFOREPREPAREPASS_OFFSET))(this, mainCameraDesc);
		}

		::System::Void _UpdateCapsuleAOPass(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CRPMainCameraDesc& mainCameraDesc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATECAPSULEAOPASS_OFFSET))(this, camera, mainCameraDesc);
		}

		::System::Void _UpdateSWRTPass(::UnityEngine::Rendering::CRPMainCameraDesc& mainCameraDesc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATESWRTPASS_OFFSET))(this, mainCameraDesc);
		}

		::System::Void _UpdateAfterOpqauePass(::UnityEngine::Rendering::CRPMainCameraDesc& mainCameraDesc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEAFTEROPQAUEPASS_OFFSET))(this, mainCameraDesc);
		}

		::System::Void _UpdateTransparentPass(::UnityEngine::Rendering::CRPMainCameraDesc& mainCameraDesc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATETRANSPARENTPASS_OFFSET))(this, mainCameraDesc);
		}

		::System::Void _UpdateDLSS(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CRPMainCameraDesc& mainCameraDesc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEDLSS_OFFSET))(this, camera, mainCameraDesc);
		}

		::System::Void _UpdatePP(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CRPMainCameraDesc& mainCameraDesc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEPP_OFFSET))(this, camera, mainCameraDesc);
		}

		::System::Void _UpdateCapturePP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATECAPTUREPP_OFFSET))(this);
		}
	};
}
