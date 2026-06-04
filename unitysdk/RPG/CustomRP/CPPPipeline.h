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

#define RPG_CUSTOMRP_CPPPIPELINE_CHECKUAVREAD_OFFSET UNITYSDK_OFFSET(0x18EAF4C0)
#define RPG_CUSTOMRP_CPPPIPELINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18EACAD0)
#define RPG_CUSTOMRP_CPPPIPELINE_FORWARDUPDATE_OFFSET UNITYSDK_OFFSET(0x18EADBA0)
#define RPG_CUSTOMRP_CPPPIPELINE_GETCMDCB_OFFSET UNITYSDK_OFFSET(0x18EB2CE0)
#define RPG_CUSTOMRP_CPPPIPELINE_ISOFFSCREENCAMERA_OFFSET UNITYSDK_OFFSET(0x18EAF480)
#define RPG_CUSTOMRP_CPPPIPELINE_ONCHANGEENV_OFFSET UNITYSDK_OFFSET(0x18EAD4C0)
#define RPG_CUSTOMRP_CPPPIPELINE_ONENTERSCENE_OFFSET UNITYSDK_OFFSET(0x18EAD4B0)
#define RPG_CUSTOMRP_CPPPIPELINE_PREPARE_OFFSET UNITYSDK_OFFSET(0x18EAD090)
#define RPG_CUSTOMRP_CPPPIPELINE_REGISTCMDCB_OFFSET UNITYSDK_OFFSET(0x18EB2650)
#define RPG_CUSTOMRP_CPPPIPELINE_RENDER_OFFSET UNITYSDK_OFFSET(0x18EAD080)
#define RPG_CUSTOMRP_CPPPIPELINE_UNREGISTCMDCB_OFFSET UNITYSDK_OFFSET(0x18EB2A00)
#define RPG_CUSTOMRP_CPPPIPELINE_UPDATEGLOBALAMBIENT_OFFSET UNITYSDK_OFFSET(0x18EB0370)
#define RPG_CUSTOMRP_CPPPIPELINE_UPDATEOPAQUECOPY_OFFSET UNITYSDK_OFFSET(0x18EADAC0)
#define RPG_CUSTOMRP_CPPPIPELINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18EB5F20)
#define RPG_CUSTOMRP_CPPPIPELINE__CLEANCMD_OFFSET UNITYSDK_OFFSET(0x18EAD7B0)
#define RPG_CUSTOMRP_CPPPIPELINE__CONVERTAOQUALITY_OFFSET UNITYSDK_OFFSET(0x18EAFF10)
#define RPG_CUSTOMRP_CPPPIPELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA7490)
#define RPG_CUSTOMRP_CPPPIPELINE__INITCMD_1_OFFSET UNITYSDK_OFFSET(0x18EAC2E0)
#define RPG_CUSTOMRP_CPPPIPELINE__INITCMD_OFFSET UNITYSDK_OFFSET(0x18EB2ED0)
#define RPG_CUSTOMRP_CPPPIPELINE__POSTUPDATE_OFFSET UNITYSDK_OFFSET(0x18EABAE0)
#define RPG_CUSTOMRP_CPPPIPELINE__PREUPDATE_OFFSET UNITYSDK_OFFSET(0x18EAD1F0)
#define RPG_CUSTOMRP_CPPPIPELINE__SETCMDSLOT_OFFSET UNITYSDK_OFFSET(0x18EB2F70)
#define RPG_CUSTOMRP_CPPPIPELINE__SETLIGHTLOD_OFFSET UNITYSDK_OFFSET(0x18EAF490)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEADAPTIVETESSELLATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x18EB13A0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEAFTEROPQAUEPASS_OFFSET UNITYSDK_OFFSET(0x18EB31D0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEAO_OFFSET UNITYSDK_OFFSET(0x18EAFF20)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEBEFOREPREPAREPASS_OFFSET UNITYSDK_OFFSET(0x18EB2FB0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATECAPSULEAOPASS_OFFSET UNITYSDK_OFFSET(0x18EB30F0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATECAPTUREPP_OFFSET UNITYSDK_OFFSET(0x18EB3FA0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATECAPTURE_OFFSET UNITYSDK_OFFSET(0x18EAFB70)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATECHAR_OFFSET UNITYSDK_OFFSET(0x18EB0E90)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATECMD_OFFSET UNITYSDK_OFFSET(0x18EAFB90)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEDEBUG_OFFSET UNITYSDK_OFFSET(0x18EAD4A0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEDEFORMATIONSETTING_OFFSET UNITYSDK_OFFSET(0x18EB1810)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEDLSS_OFFSET UNITYSDK_OFFSET(0x18EB3310)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEFLAGS_OFFSET UNITYSDK_OFFSET(0x18EB23B0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEGLOBALSDF_OFFSET UNITYSDK_OFFSET(0x18EB1420)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEGPUTYPE_OFFSET UNITYSDK_OFFSET(0x18EA93F0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEGRASSCONFIG_OFFSET UNITYSDK_OFFSET(0x18EB1450)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEHIZ_OFFSET UNITYSDK_OFFSET(0x18EB2330)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATELEGECY_OFFSET UNITYSDK_OFFSET(0x18EB2630)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATELIGHTING_OFFSET UNITYSDK_OFFSET(0x18EB0BB0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEPOSTCMD_OFFSET UNITYSDK_OFFSET(0x18EAFEB0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEPP_OFFSET UNITYSDK_OFFSET(0x18EB39F0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEPROBE_OFFSET UNITYSDK_OFFSET(0x18EB0290)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEREFLECTION_OFFSET UNITYSDK_OFFSET(0x18EAEBA0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEREFRACTION_OFFSET UNITYSDK_OFFSET(0x18EB0E70)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATESHADOWEXT_OFFSET UNITYSDK_OFFSET(0x18EB0D30)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATESHADOW_OFFSET UNITYSDK_OFFSET(0x18EADD50)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATESSR_OFFSET UNITYSDK_OFFSET(0x18EB08F0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATESTATICDATA_OFFSET UNITYSDK_OFFSET(0x18EA9570)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATESWRTPASS_OFFSET UNITYSDK_OFFSET(0x18EB31A0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATETAA_OFFSET UNITYSDK_OFFSET(0x18EB0750)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATETESTCONFIG_OFFSET UNITYSDK_OFFSET(0x18EAC230)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATETRANSPARENTPASS_OFFSET UNITYSDK_OFFSET(0x18EB31E0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEUI_OFFSET UNITYSDK_OFFSET(0x18EB1AE0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICCLOUDSPHERE_OFFSET UNITYSDK_OFFSET(0x18EB0FB0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICCLOUD_OFFSET UNITYSDK_OFFSET(0x18EB0F60)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0x18EB1000)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICLIGHT_OFFSET UNITYSDK_OFFSET(0x18EB12D0)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOXELIRRADIANCECACHESETTINGS_OFFSET UNITYSDK_OFFSET(0x18EB1330)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEVRS_OFFSET UNITYSDK_OFFSET(0x18EB2640)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATEWATER_OFFSET UNITYSDK_OFFSET(0x18EB0B40)
#define RPG_CUSTOMRP_CPPPIPELINE__UPDATE_OFFSET UNITYSDK_OFFSET(0x18EAD260)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CPPPipeline_TypeDefinitionIndex = 35204;

	class CPPPipeline : public ::RPG::CustomRP::CRPPipelineBase
	{
	public:
		static ::System::Boolean* StaticGet_UAVCanReadWriteMultipleMipsOnSameTexture()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CPPPipeline_TypeDefinitionIndex)->GetStaticField(0x12680);
		}
		static ::System::Boolean* StaticGet_CheckUAVReadDone()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CPPPipeline_TypeDefinitionIndex)->GetStaticField(0x12681);
		}
		::UnityEngine::Rendering::VsmSettings _VsmSettings; // 0x20
		::RPG::CustomRP::DLSSPass* _DLSSPass; // 0x78
		::UnityEngine::Rendering::CommandBuffer* _ReflectionCmd; // 0x80
		::UnityEngine::Rendering::CommandBuffer* _AfterTransparentCmd; // 0x88
		::UnityEngine::Rendering::CommandBuffer* _PostProcessCmd; // 0x90
		::UnityEngine::Rendering::CommandBuffer* _AfterOpqaueCmd; // 0x98
		::RPG::CustomRP::RPGAmbientOcclusion* _aoSetting; // 0xA0
		::UnityEngine::Rendering::ShadowRuntimeSettings _ShadowSettings; // 0xA8
		::UnityEngine::Rendering::CommandBuffer* _AfterHiZCmd; // 0x238
		::UnityEngine::Rendering::CommandBuffer* _AfterDepthCopyCmd; // 0x240
		::RPG::CustomRP::AvatarEffectHelper* _AvatarBeforeTransparentRender; // 0x248
		::UnityEngine::Rendering::CommandBuffer* _BeforeUberCmd; // 0x250
		::RPG::CustomRP::SWRTPass* _SWRTPass; // 0x258
		::UnityEngine::Rendering::VolumeStack* _StackRef; // 0x260
		::UnityEngine::Rendering::CommandBuffer* _UIPPCmd; // 0x268
		::RPG::CustomRP::RPGTemporalAntialiasing* _taaSetting; // 0x270
		::RPG::CustomRP::CapsuleAOPass* _CapsuleAOPass; // 0x278
		::RPG::CustomRP::ReflectionRenderData _ReflectionData; // 0x280
		::UnityEngine::Rendering::CommandBuffer* _BeforeTransparentCmd; // 0x310
		::Il2CppArray<::RPG::CustomRP::CPPPipeline_PipelineCmd>* _CmdCb; // 0x318
		::RPG::CustomRP::AvatarEffectHelper* _AvatarRender; // 0x320
		::RPG::CustomRP::CustomPostProcessPass2* _PostProcessPass; // 0x328
		::UnityEngine::Rendering::CommandBuffer* _BeforeTAACmd; // 0x330
		::UnityEngine::Rendering::CommandBuffer* _AfterGBufferCmd; // 0x338
		::UnityEngine::Rendering::CommandBuffer* _CapturePPCmd; // 0x340
		::UnityEngine::Rendering::CommandBuffer* _EnvCmd; // 0x348
		::RPG::CustomRP::CRPRendererData* _DataRef; // 0x350
		::RPG::CustomRP::CapturePostProcessPass* _CapturePPPass; // 0x358
		::UnityEngine::Rendering::ReflectionInfo _ReflectionInfo; // 0x360
		::System::Boolean _IsOffscreenCamera; // 0x3A4
		::System::Boolean _HasPP; // 0x3A5
		::UnityEngine::Rendering::CRPTestConfig _TestConfig; // 0x3A8
		::UnityEngine::Rendering::CRPipelineAsset _InternalAsset; // 0x3B0
		::System::Int32 componentCachedVersion; // 0x9E0
		::UnityEngine::DeformationSetting _DeformationSetting; // 0x9E4
		::UnityEngine::Rendering::AmbientVolumneData _GlobalAmbientData; // 0xA10
		::System::Int32 _ui3dCullingMask; // 0xA80
		::UnityEngine::Rendering::GraphicsDeviceType _DeviceType; // 0xA84
		::System::Single _RenderScale; // 0xA88
		::UnityEngine::RPGGrassSetting _GrassSetting; // 0xA8C

		::System::Void _ctor(::RPG::CustomRP::CustomRenderPipelineAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomRenderPipelineAsset*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__CCTOR_OFFSET))();
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Render(::UnityEngine::Rendering::ScriptableRenderContext a1, ::Il2CppArray<::UnityEngine::Camera*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::Il2CppArray<::UnityEngine::Camera*>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_RENDER_OFFSET))(this, a1, a2);
		}

		::System::Void Prepare(::UnityEngine::Camera* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_PREPARE_OFFSET))(this, a1, a2);
		}

		::System::Void OnEnterScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_ONENTERSCENE_OFFSET))(this);
		}

		::System::Void OnChangeEnv(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_ONCHANGEENV_OFFSET))(this, a1);
		}

		static ::System::Void UpdateOpaqueCopy(::RPG::CustomRP::CRPGraphicsSettingsData* a1, ::System::Boolean& a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::RPG::CustomRP::CRPGraphicsSettingsData*, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_UPDATEOPAQUECOPY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ForwardUpdate(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_FORWARDUPDATE_OFFSET))(a1);
		}

		::System::Boolean IsOffscreenCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_ISOFFSCREENCAMERA_OFFSET))(this);
		}

		::System::Void _SetLightLod(::UnityEngine::Rendering::LightLodConfig& a1, ::RPG::CustomRP::CRPGraphicsSettingsData_LocalLightLOD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::LightLodConfig&, ::RPG::CustomRP::CRPGraphicsSettingsData_LocalLightLOD*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__SETLIGHTLOD_OFFSET))(this, a1, a2);
		}

		::System::Void CheckUAVRead(::RPG::CustomRP::CRPRendererData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPRendererData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_CHECKUAVREAD_OFFSET))(this, a1);
		}

		::System::Void _UpdateStaticData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATESTATICDATA_OFFSET))(this);
		}

		::System::Void _PreUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__PREUPDATE_OFFSET))(this);
		}

		::System::Void _UpdateReflection(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEREFLECTION_OFFSET))(this, a1);
		}

		::System::Void _UpdateCapture(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATECAPTURE_OFFSET))(this, a1);
		}

		::System::Void _Update(::UnityEngine::Camera* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::AOQuality _ConvertAOQuality(::RPG::CustomRP::Quality a1)
		{
			return ((::UnityEngine::Rendering::AOQuality(*)(::PVOID, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__CONVERTAOQUALITY_OFFSET))(this, a1);
		}

		::System::Void _UpdateAO(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEAO_OFFSET))(this, a1);
		}

		::System::Void _UpdateProbe(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEPROBE_OFFSET))(this, a1);
		}

		::System::Void UpdateGlobalAmbient(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_UPDATEGLOBALAMBIENT_OFFSET))(this, a1);
		}

		::System::Void _UpdateTAA(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATETAA_OFFSET))(this, a1);
		}

		::System::Void _UpdateSSR(::RPG::CustomRP::CRPGraphicsSettingsData* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATESSR_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateWater(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEWATER_OFFSET))(this, a1);
		}

		::System::Void _UpdateLighting(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATELIGHTING_OFFSET))(this, a1);
		}

		static ::System::Void _UpdateShadow(::RPG::CustomRP::CRPGraphicsSettingsData* a1, ::UnityEngine::Rendering::ShadowRuntimeSettings& a2, ::UnityEngine::Rendering::VsmSettings& a3)
		{
			return ((::System::Void(*)(::RPG::CustomRP::CRPGraphicsSettingsData*, ::UnityEngine::Rendering::ShadowRuntimeSettings&, ::UnityEngine::Rendering::VsmSettings&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATESHADOW_OFFSET))(a1, a2, a3);
		}

		::System::Void _UpdateShadowExt(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATESHADOWEXT_OFFSET))(this, a1);
		}

		::System::Void _UpdateRefraction(::RPG::CustomRP::CRPGraphicsSettingsData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEREFRACTION_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateChar(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATECHAR_OFFSET))(this, a1);
		}

		::System::Void _UpdateVolumetricCloud(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICCLOUD_OFFSET))(this, a1);
		}

		::System::Void _UpdateVolumetricCloudSphere(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICCLOUDSPHERE_OFFSET))(this, a1);
		}

		::System::Void _UpdateVolumetricFog(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICFOG_OFFSET))(this, a1);
		}

		::System::Void _UpdateVolumetricLight(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOLUMETRICLIGHT_OFFSET))(this, a1);
		}

		::System::Void _UpdateVoxelIrradianceCacheSettings(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEVOXELIRRADIANCECACHESETTINGS_OFFSET))(this, a1);
		}

		::System::Void _UpdateAdaptiveTessellationSettings(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEADAPTIVETESSELLATIONSETTINGS_OFFSET))(this, a1);
		}

		::System::Void _UpdateGlobalSDF(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEGLOBALSDF_OFFSET))(this, a1);
		}

		::System::Void _UpdateGrassConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEGRASSCONFIG_OFFSET))(this);
		}

		::System::Void _UpdateDeformationSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEDEFORMATIONSETTING_OFFSET))(this);
		}

		::System::Void _UpdateUI(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEUI_OFFSET))(this, a1);
		}

		::System::Void _UpdateHiZ(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEHIZ_OFFSET))(this, a1);
		}

		::System::Void _UpdateGPUType(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEGPUTYPE_OFFSET))(this, a1);
		}

		::System::Void _UpdateFlags(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEFLAGS_OFFSET))(this, a1);
		}

		::System::Void _PostUpdate(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__POSTUPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateLegecy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATELEGECY_OFFSET))(this);
		}

		::System::Void _UpdateTestConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATETESTCONFIG_OFFSET))(this);
		}

		::System::Void _UpdateVRS(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEVRS_OFFSET))(this, a1);
		}

		::System::Void _UpdateDebug(::UnityEngine::Rendering::CRPMainCameraDesc& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEDEBUG_OFFSET))(this, a1);
		}

		static ::System::Void RegistCmdCb(::PipelineCmdSlot a1, ::ICmdExecuteCb* a2)
		{
			return ((::System::Void(*)(::PipelineCmdSlot, ::ICmdExecuteCb*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_REGISTCMDCB_OFFSET))(a1, a2);
		}

		static ::System::Void UnRegistCmdCb(::PipelineCmdSlot a1, ::ICmdExecuteCb* a2)
		{
			return ((::System::Void(*)(::PipelineCmdSlot, ::ICmdExecuteCb*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_UNREGISTCMDCB_OFFSET))(a1, a2);
		}

		static ::ICmdExecuteCb* GetCmdCb(::PipelineCmdSlot a1, ::System::Int32 a2)
		{
			return ((::ICmdExecuteCb*(*)(::PipelineCmdSlot, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE_GETCMDCB_OFFSET))(a1, a2);
		}

		::System::Void _InitCmd(::System::Int32 a1, ::UnityEngine::Rendering::PassPos a2, ::System::Int32 a3, ::UnityEngine::Rendering::AddCmdType a4, ::UnityEngine::Rendering::CommandBuffer*& a5, ::System::String* a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::PassPos, ::System::Int32, ::UnityEngine::Rendering::AddCmdType, ::UnityEngine::Rendering::CommandBuffer*&, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__INITCMD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void _SetCmdSlot(::PipelineCmdSlot a1, ::UnityEngine::Rendering::CommandBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCmdSlot, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__SETCMDSLOT_OFFSET))(this, a1, a2);
		}

		::System::Void _InitCmd_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__INITCMD_1_OFFSET))(this);
		}

		::System::Void _CleanCmd(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__CLEANCMD_OFFSET))(this, a1);
		}

		::System::Void _UpdateCmd(::UnityEngine::Camera* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATECMD_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdatePostCmd(::UnityEngine::Camera* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEPOSTCMD_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateBeforePreparePass(::UnityEngine::Rendering::CRPMainCameraDesc& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEBEFOREPREPAREPASS_OFFSET))(this, a1);
		}

		::System::Void _UpdateCapsuleAOPass(::UnityEngine::Camera* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATECAPSULEAOPASS_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateSWRTPass(::UnityEngine::Rendering::CRPMainCameraDesc& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATESWRTPASS_OFFSET))(this, a1);
		}

		::System::Void _UpdateAfterOpqauePass(::UnityEngine::Rendering::CRPMainCameraDesc& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEAFTEROPQAUEPASS_OFFSET))(this, a1);
		}

		::System::Void _UpdateTransparentPass(::UnityEngine::Rendering::CRPMainCameraDesc& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATETRANSPARENTPASS_OFFSET))(this, a1);
		}

		::System::Void _UpdateDLSS(::UnityEngine::Camera* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEDLSS_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdatePP(::UnityEngine::Camera* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATEPP_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateCapturePP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPPIPELINE__UPDATECAPTUREPP_OFFSET))(this);
		}
	};
}
