#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CullingSphereAnchor.h"
#include "unitysdk/NapRenderEntityFlags.h"
#include "unitysdk/NapRenderEntity_MatCapInfo.h"
#include "unitysdk/PerObjectShadowContext.h"
#include "unitysdk/PerObjectShadowCullResult.h"
#include "unitysdk/PerObjectShadowDataBlock.h"
#include "unitysdk/RenderEntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapLightData.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class INapCharacterRenderingTransformsProvidable;
class IPerObjectShadowRenderer;
class MonoRenderEntity;
class NapMaterial;
class NapRenderEntity_RelativeVectorGetter;
class NapRenderer;
class PerObjectShadowGizmos;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LODGroup; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture2DArray; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering::Universal { class NapCBWrapper; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define NAPRENDERENTITY_ADDINDICATEDLIGHT_OFFSET UNITYSDK_OFFSET(0x19B80000)
#define NAPRENDERENTITY_APPLYSHADOWPROXYDITHERALPHAIFDIRTY_OFFSET UNITYSDK_OFFSET(0x19B7FCA0)
#define NAPRENDERENTITY_ATTACHNATIVERENDERERHANDLES_OFFSET UNITYSDK_OFFSET(0x19B6DED0)
#define NAPRENDERENTITY_BATCHEDVISIBLECHECK_OFFSET UNITYSDK_OFFSET(0x19B71B10)
#define NAPRENDERENTITY_BUILDINDICATEDNAPLIGHTDATA_OFFSET UNITYSDK_OFFSET(0x19B804F0)
#define NAPRENDERENTITY_CREATEMATCAPTEXTUREARRAYLEGACY_OFFSET UNITYSDK_OFFSET(0x19B797F0)
#define NAPRENDERENTITY_CREATEMATCAPTEXTUREARRAYSIMPLIFY_OFFSET UNITYSDK_OFFSET(0x19B779A0)
#define NAPRENDERENTITY_FINDNAPMATERIAL_OFFSET UNITYSDK_OFFSET(0x19B80F50)
#define NAPRENDERENTITY_GETLODPARTID_OFFSET UNITYSDK_OFFSET(0x19B7F4C0)
#define NAPRENDERENTITY_GETPEROBJECTSHADOWGIZMOS_OFFSET UNITYSDK_OFFSET(0x19B70E00)
#define NAPRENDERENTITY_GETPEROBJECTSHADOWRENDERER_OFFSET UNITYSDK_OFFSET(0x19B70E40)
#define NAPRENDERENTITY_GETRENDERERAT_OFFSET UNITYSDK_OFFSET(0x19B7D290)
#define NAPRENDERENTITY_GETRENDERERCOUNT_OFFSET UNITYSDK_OFFSET(0x19B7D230)
#define NAPRENDERENTITY_GET_BAKEDOBJECTSPACECULLINGSPHERE_OFFSET UNITYSDK_OFFSET(0x19B6FA90)
#define NAPRENDERENTITY_GET_CACHEBOUNDSWHENSTAYS_OFFSET UNITYSDK_OFFSET(0x19B6F930)
#define NAPRENDERENTITY_GET_CACHEDBOUNDS_OFFSET UNITYSDK_OFFSET(0x19B6F990)
#define NAPRENDERENTITY_GET_CACHEDLIGHTDIRECTION_OFFSET UNITYSDK_OFFSET(0x19B6F9D0)
#define NAPRENDERENTITY_GET_CLIPVERTICESUNDERCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x19B6F080)
#define NAPRENDERENTITY_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x19B6F920)
#define NAPRENDERENTITY_GET_CUSTOMBLENDEDDIRECTIONALLIGHTSIZE_OFFSET UNITYSDK_OFFSET(0x19B6F500)
#define NAPRENDERENTITY_GET_CUSTOMLIGHTDIRECTION_OFFSET UNITYSDK_OFFSET(0x19B704F0)
#define NAPRENDERENTITY_GET_DISABLESPHERECULLING_OFFSET UNITYSDK_OFFSET(0x19B6F130)
#define NAPRENDERENTITY_GET_DISTANCETOCAMERA_OFFSET UNITYSDK_OFFSET(0x19B6FBD0)
#define NAPRENDERENTITY_GET_DONTOPTIMIZESHADOWPROXYBOUNDS_OFFSET UNITYSDK_OFFSET(0x19B715F0)
#define NAPRENDERENTITY_GET_ENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x19B6F330)
#define NAPRENDERENTITY_GET_FIXRED_OFFSET UNITYSDK_OFFSET(0x19B6F520)
#define NAPRENDERENTITY_GET_FIXSHADOWCOVERAGEOUTOFFRUSTUM_OFFSET UNITYSDK_OFFSET(0x19B6F5D0)
#define NAPRENDERENTITY_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x19B6ED60)
#define NAPRENDERENTITY_GET_FORCEPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x19B6F900)
#define NAPRENDERENTITY_GET_HASCHARACTERMATERIAL_OFFSET UNITYSDK_OFFSET(0x19B6EC00)
#define NAPRENDERENTITY_GET_HASREGULARRENDERER_OFFSET UNITYSDK_OFFSET(0x19B6E890)
#define NAPRENDERENTITY_GET_HASVALIDMATERIAL_OFFSET UNITYSDK_OFFSET(0x19B6ECB0)
#define NAPRENDERENTITY_GET_HEADBONEFORWARD_OFFSET UNITYSDK_OFFSET(0x19B6F220)
#define NAPRENDERENTITY_GET_HEADBONEPOSITION_OFFSET UNITYSDK_OFFSET(0x19B6F200)
#define NAPRENDERENTITY_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x19B6E280)
#define NAPRENDERENTITY_GET_ISAVATARPARTICLEDIRTY_OFFSET UNITYSDK_OFFSET(0x19B71490)
#define NAPRENDERENTITY_GET_ISCURFRAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x19B6E940)
#define NAPRENDERENTITY_GET_ISCUTSCENEMODE_OFFSET UNITYSDK_OFFSET(0x19B6ED80)
#define NAPRENDERENTITY_GET_ISFIRSTTIMECALCULATERADIAN_OFFSET UNITYSDK_OFFSET(0x19B71540)
#define NAPRENDERENTITY_GET_ISGPUCROWD_OFFSET UNITYSDK_OFFSET(0x19B6EBF0)
#define NAPRENDERENTITY_GET_ISNAPCBBOUND_OFFSET UNITYSDK_OFFSET(0x19B6EFC0)
#define NAPRENDERENTITY_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x19B712A0)
#define NAPRENDERENTITY_GET_ISVISIBLEINCURRENTCAM_OFFSET UNITYSDK_OFFSET(0x19B6E530)
#define NAPRENDERENTITY_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x19B6E7E0)
#define NAPRENDERENTITY_GET_LASTFRAMEPOSITION_OFFSET UNITYSDK_OFFSET(0x19B6F950)
#define NAPRENDERENTITY_GET_LIGHTDIRECTION_OFFSET UNITYSDK_OFFSET(0x19B6FAB0)
#define NAPRENDERENTITY_GET_LODGROUPS_OFFSET UNITYSDK_OFFSET(0x19B6F240)
#define NAPRENDERENTITY_GET_MAINLIGHTPARAMSOVERRIDEN_OFFSET UNITYSDK_OFFSET(0x19B6F260)
#define NAPRENDERENTITY_GET_MIDDLEPOINTPOSITION_OFFSET UNITYSDK_OFFSET(0x19B6F1E0)
#define NAPRENDERENTITY_GET_NAPCBUFFER_OFFSET UNITYSDK_OFFSET(0x19B6F070)
#define NAPRENDERENTITY_GET_OFFSETFORRENDERING_OFFSET UNITYSDK_OFFSET(0x19B6FBB0)
#define NAPRENDERENTITY_GET_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x19B6DB80)
#define NAPRENDERENTITY_GET_OVERRIDENMAINLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x19B6F310)
#define NAPRENDERENTITY_GET_PEROBJECTSHADOWALPHA_OFFSET UNITYSDK_OFFSET(0x19B6FA30)
#define NAPRENDERENTITY_GET_PEROBJECTSHADOWCULLRESULT_OFFSET UNITYSDK_OFFSET(0x19B6FA10)
#define NAPRENDERENTITY_GET_PEROBJECTSHADOWFADETARGET_OFFSET UNITYSDK_OFFSET(0x19B6FA50)
#define NAPRENDERENTITY_GET_PEROBJECTSHADOWRESOLVEALPHA_OFFSET UNITYSDK_OFFSET(0x19B6FBF0)
#define NAPRENDERENTITY_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x19B6DBC0)
#define NAPRENDERENTITY_GET_RAYCASTFORCULLINGSPHERE_OFFSET UNITYSDK_OFFSET(0x19B6F910)
#define NAPRENDERENTITY_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x19B6DBA0)
#define NAPRENDERENTITY_GET_SHADERUNIFORMPEROBJECTSHADOWDATA_OFFSET UNITYSDK_OFFSET(0x19B70EC0)
#define NAPRENDERENTITY_GET_SORTPRIORITY_OFFSET UNITYSDK_OFFSET(0x19B6E030)
#define NAPRENDERENTITY_GET_USEBAKEDBOUNDS_OFFSET UNITYSDK_OFFSET(0x19B6FA70)
#define NAPRENDERENTITY_GET_USECUSTOMBLENDEDDIRECTIONALLIGHTSIZE_OFFSET UNITYSDK_OFFSET(0x19B6F450)
#define NAPRENDERENTITY_GET_USECUSTOMLIGHTDIRECTION_OFFSET UNITYSDK_OFFSET(0x19B70370)
#define NAPRENDERENTITY_GET_USEPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x19B6F680)
#define NAPRENDERENTITY_GET_XAXIS_OFFSET UNITYSDK_OFFSET(0x19B6FAF0)
#define NAPRENDERENTITY_GET_YAXIS_OFFSET UNITYSDK_OFFSET(0x19B6FB30)
#define NAPRENDERENTITY_GET_ZAXIS_OFFSET UNITYSDK_OFFSET(0x19B6FB70)
#define NAPRENDERENTITY_GET_ZDISTANCETOCAMERA_OFFSET UNITYSDK_OFFSET(0x19B6E050)
#define NAPRENDERENTITY_HASFLAG_OFFSET UNITYSDK_OFFSET(0x19B74650)
#define NAPRENDERENTITY_LEGACYVISIBLECHECK_OFFSET UNITYSDK_OFFSET(0x19B71BF0)
#define NAPRENDERENTITY_MATCAPTEXTURECHECKRESULT_OFFSET UNITYSDK_OFFSET(0x19B7CCE0)
#define NAPRENDERENTITY_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x19B7D310)
#define NAPRENDERENTITY_OVERRIDEMAINLIGHTPARAMS_OFFSET UNITYSDK_OFFSET(0x19B80AC0)
#define NAPRENDERENTITY_PUSHBONETRANSFORMSTONATIVE_OFFSET UNITYSDK_OFFSET(0x19B74130)
#define NAPRENDERENTITY_REBINDARRAYPROPERTYBUFFER_OFFSET UNITYSDK_OFFSET(0x19B742E0)
#define NAPRENDERENTITY_REFRESHMATCAPDATA_OFFSET UNITYSDK_OFFSET(0x19B7F2D0)
#define NAPRENDERENTITY_REFRESHMATCAPVECTORARRAYPROPERTIES_OFFSET UNITYSDK_OFFSET(0x19B81590)
#define NAPRENDERENTITY_REFRESHSTATEPERFRAME_OFFSET UNITYSDK_OFFSET(0x19B71D60)
#define NAPRENDERENTITY_REFRESH_OFFSET UNITYSDK_OFFSET(0x19B7E020)
#define NAPRENDERENTITY_RELEASEMATCAPTEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x19B7CA90)
#define NAPRENDERENTITY_RELEASETEXTUREARRAYLIST_OFFSET UNITYSDK_OFFSET(0x19B7C850)
#define NAPRENDERENTITY_RELEASE_OFFSET UNITYSDK_OFFSET(0x19B7D410)
#define NAPRENDERENTITY_REMOVEINDICATEDLIGHT_OFFSET UNITYSDK_OFFSET(0x19B808F0)
#define NAPRENDERENTITY_RESET_OFFSET UNITYSDK_OFFSET(0x19B7D480)
#define NAPRENDERENTITY_REVERTOVERRIDENMAINLIGHTPARAMS_OFFSET UNITYSDK_OFFSET(0x19B80D20)
#define NAPRENDERENTITY_SETFLAG_OFFSET UNITYSDK_OFFSET(0x19B746A0)
#define NAPRENDERENTITY_SETHAIRSHADOWOFFSETS_OFFSET UNITYSDK_OFFSET(0x19B7FE20)
#define NAPRENDERENTITY_SETSHADOWDATABLOCK_OFFSET UNITYSDK_OFFSET(0x19B6FF20)
#define NAPRENDERENTITY_SETSHADOWLIGHTDATA_OFFSET UNITYSDK_OFFSET(0x19B70750)
#define NAPRENDERENTITY_SETSHADOWPROXYDITHERALPHA_OFFSET UNITYSDK_OFFSET(0x19B7F840)
#define NAPRENDERENTITY_SETTRANSFORMGETTERS_OFFSET UNITYSDK_OFFSET(0x19B7F460)
#define NAPRENDERENTITY_SETUP_OFFSET UNITYSDK_OFFSET(0x19B748E0)
#define NAPRENDERENTITY_SET_BAKEDOBJECTSPACECULLINGSPHERE_OFFSET UNITYSDK_OFFSET(0x19B6FAA0)
#define NAPRENDERENTITY_SET_CACHEBOUNDSWHENSTAYS_OFFSET UNITYSDK_OFFSET(0x19B6F940)
#define NAPRENDERENTITY_SET_CACHEDBOUNDS_OFFSET UNITYSDK_OFFSET(0x19B6F9B0)
#define NAPRENDERENTITY_SET_CACHEDLIGHTDIRECTION_OFFSET UNITYSDK_OFFSET(0x19B6F9F0)
#define NAPRENDERENTITY_SET_CLIPVERTICESUNDERCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x19B6F0D0)
#define NAPRENDERENTITY_SET_CUSTOMBLENDEDDIRECTIONALLIGHTSIZE_OFFSET UNITYSDK_OFFSET(0x19B6F510)
#define NAPRENDERENTITY_SET_DISABLESPHERECULLING_OFFSET UNITYSDK_OFFSET(0x19B6F180)
#define NAPRENDERENTITY_SET_DISTANCETOCAMERA_OFFSET UNITYSDK_OFFSET(0x19B6FBE0)
#define NAPRENDERENTITY_SET_DONTOPTIMIZESHADOWPROXYBOUNDS_OFFSET UNITYSDK_OFFSET(0x19B71600)
#define NAPRENDERENTITY_SET_ENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x19B6F3A0)
#define NAPRENDERENTITY_SET_FIXRED_OFFSET UNITYSDK_OFFSET(0x19B6F570)
#define NAPRENDERENTITY_SET_FIXSHADOWCOVERAGEOUTOFFRUSTUM_OFFSET UNITYSDK_OFFSET(0x19B6F620)
#define NAPRENDERENTITY_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x19B6ED70)
#define NAPRENDERENTITY_SET_HASCHARACTERMATERIAL_OFFSET UNITYSDK_OFFSET(0x19B6EC50)
#define NAPRENDERENTITY_SET_HASREGULARRENDERER_OFFSET UNITYSDK_OFFSET(0x19B6E8E0)
#define NAPRENDERENTITY_SET_HASVALIDMATERIAL_OFFSET UNITYSDK_OFFSET(0x19B6ED00)
#define NAPRENDERENTITY_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x19B6E4D0)
#define NAPRENDERENTITY_SET_ISAVATARPARTICLEDIRTY_OFFSET UNITYSDK_OFFSET(0x19B714E0)
#define NAPRENDERENTITY_SET_ISCURFRAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x19B6EB90)
#define NAPRENDERENTITY_SET_ISCUTSCENEMODE_OFFSET UNITYSDK_OFFSET(0x19B6ED90)
#define NAPRENDERENTITY_SET_ISFIRSTTIMECALCULATERADIAN_OFFSET UNITYSDK_OFFSET(0x19B71590)
#define NAPRENDERENTITY_SET_ISNAPCBBOUND_OFFSET UNITYSDK_OFFSET(0x19B6F010)
#define NAPRENDERENTITY_SET_ISVISIBLEINCURRENTCAM_OFFSET UNITYSDK_OFFSET(0x19B6E780)
#define NAPRENDERENTITY_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x19B6E830)
#define NAPRENDERENTITY_SET_LASTFRAMEPOSITION_OFFSET UNITYSDK_OFFSET(0x19B6F970)
#define NAPRENDERENTITY_SET_LIGHTDIRECTION_OFFSET UNITYSDK_OFFSET(0x19B6FAD0)
#define NAPRENDERENTITY_SET_LODGROUPS_OFFSET UNITYSDK_OFFSET(0x19B6F250)
#define NAPRENDERENTITY_SET_MAINLIGHTPARAMSOVERRIDEN_OFFSET UNITYSDK_OFFSET(0x19B6F2B0)
#define NAPRENDERENTITY_SET_OFFSETFORRENDERING_OFFSET UNITYSDK_OFFSET(0x19B6FBC0)
#define NAPRENDERENTITY_SET_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x19B6DB90)
#define NAPRENDERENTITY_SET_OVERRIDENMAINLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x19B6F320)
#define NAPRENDERENTITY_SET_PEROBJECTSHADOWALPHA_OFFSET UNITYSDK_OFFSET(0x19B6FA40)
#define NAPRENDERENTITY_SET_PEROBJECTSHADOWCULLRESULT_OFFSET UNITYSDK_OFFSET(0x19B6FA20)
#define NAPRENDERENTITY_SET_PEROBJECTSHADOWFADETARGET_OFFSET UNITYSDK_OFFSET(0x19B6FA60)
#define NAPRENDERENTITY_SET_PEROBJECTSHADOWRESOLVEALPHA_OFFSET UNITYSDK_OFFSET(0x19B6FD80)
#define NAPRENDERENTITY_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x19B6DBD0)
#define NAPRENDERENTITY_SET_ROOT_OFFSET UNITYSDK_OFFSET(0x19B6DBB0)
#define NAPRENDERENTITY_SET_SHADERUNIFORMPEROBJECTSHADOWDATA_OFFSET UNITYSDK_OFFSET(0x19B70F30)
#define NAPRENDERENTITY_SET_SHADERUNIFORMPEROBJECTSHADOWRESOLVEST_OFFSET UNITYSDK_OFFSET(0x19B71230)
#define NAPRENDERENTITY_SET_SHADERUNIFORMPEROBJECTSHADOWUVMATRIX_OFFSET UNITYSDK_OFFSET(0x19B71060)
#define NAPRENDERENTITY_SET_SHADERUNIFORMRECEIVESHADOW_OFFSET UNITYSDK_OFFSET(0x19B70FA0)
#define NAPRENDERENTITY_SET_SORTPRIORITY_OFFSET UNITYSDK_OFFSET(0x19B6E040)
#define NAPRENDERENTITY_SET_USEBAKEDBOUNDS_OFFSET UNITYSDK_OFFSET(0x19B6FA80)
#define NAPRENDERENTITY_SET_USECUSTOMBLENDEDDIRECTIONALLIGHTSIZE_OFFSET UNITYSDK_OFFSET(0x19B6F4A0)
#define NAPRENDERENTITY_SET_USEPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x19B6F6D0)
#define NAPRENDERENTITY_SET_XAXIS_OFFSET UNITYSDK_OFFSET(0x19B6FB10)
#define NAPRENDERENTITY_SET_YAXIS_OFFSET UNITYSDK_OFFSET(0x19B6FB50)
#define NAPRENDERENTITY_SET_ZAXIS_OFFSET UNITYSDK_OFFSET(0x19B6FB90)
#define NAPRENDERENTITY_SET_ZDISTANCETOCAMERA_OFFSET UNITYSDK_OFFSET(0x19B6E270)
#define NAPRENDERENTITY_UPDATEBONETRANSFORMSFORFRAME_OFFSET UNITYSDK_OFFSET(0x19B72DD0)
#define NAPRENDERENTITY_UPDATEVISIBILITY_OFFSET UNITYSDK_OFFSET(0x19B71610)
#define NAPRENDERENTITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B81850)
#define NAPRENDERENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19B709B0)

inline static constexpr unsigned int NapRenderEntity_TypeDefinitionIndex = 29578;

class NapRenderEntity : public ::System::Object
{
public:
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_InitLodGroup1()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x240B0);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_GetTransformsCommon()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x240B8);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectFaceRendererNotSkinned()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x240C0);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_InitMatCapIDArray()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x240C8);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_FetchParamsFromMonoRenderEntity()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x240D0);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_InitMaterialParticleArray()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x240D8);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdateRamp()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x240E0);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectMapCapInfo()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x240E8);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_GetTransformsFromJob()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x240F0);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CheckMaterialValid()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x240F8);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_InitNapRenderer()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x24100);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_Part2()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x24108);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_LayerAndFrustumCulling()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x24110);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_RefreshStatePerFrame()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x24118);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_ApplyMaterialProperties()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x24120);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CountMaterials()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x24128);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectBounds()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x24130);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_Setup()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x24138);
	}
	static ::System::Collections::Generic::List_1<::NapRenderEntity_MatCapInfo>** StaticGet_matCapInfos()
	{
		return (::System::Collections::Generic::List_1<::NapRenderEntity_MatCapInfo>**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x24140);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CharacterGI()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x24148);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CalculateCameraVisibility()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x24150);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_InitPropertyMode()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x24158);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CreateMatCapTextureArray()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x24160);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdateDistanceToCamera()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x24168);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CalculateCullingSphere()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x24170);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectLayer()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x24178);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectRenderingLayer()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x24180);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_InitLodGroup2()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x24188);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SetFlags()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x24190);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SetShadowProxyAlphas()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x24198);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CopyTexture()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x241A0);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_GetTransforms()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x241A8);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_GetHeadBoneTransform()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x241B0);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CheckMatCapEnabled()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x241B8);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_GetTexture()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x241C0);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_Release()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x241C8);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_GetTransformsFromFunc()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x241D0);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CreateTextureArray()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntity_TypeDefinitionIndex)->GetStaticField(0x241D8);
	}
	::System::Action* _onRelease_k__BackingField; // 0x10
	::UnityEngine::GameObject* _Root_k__BackingField; // 0x18
	::MonoRenderEntity* monoRenderEntity; // 0x20
	::System::Int32 priority; // 0x28
	::System::Single _SortPriority_k__BackingField; // 0x2C
	::System::UInt32 renderingLayerMask; // 0x30
	::System::Int32 layer; // 0x34
	::System::Single m_ZDistanceToCamera; // 0x38
	::System::Int32 lastVisibleFrame; // 0x3C
	::System::Int32 lastLastVisibleFrame; // 0x40
	::NapRenderEntityFlags _flags_k__BackingField; // 0x44
	::System::Collections::Generic::List_1<::UnityEngine::Camera*>* visibleCameras; // 0x48
	::System::Int32 beforeSortIndex; // 0x50
	::System::Int32 previousFrameComputeIndex; // 0x54
	::System::Boolean m_isCutSceneMode; // 0x58
	::System::Boolean isReleased; // 0x59
	::UnityEngine::Rendering::Universal::NapCBWrapper* m_NapCBuffer; // 0x60
	::UnityEngine::Transform* MiddlePointTrans; // 0x68
	::UnityEngine::Transform* HeadBone; // 0x70
	::UnityEngine::Transform* RootBone; // 0x78
	::System::Single RootBoneClipOffset; // 0x80
	::System::Int32 visibilityRefCounter; // 0x84
	::UnityEngine::Vector4 CullingSphere; // 0x88
	::CullingSphereAnchor CullingSphereAnchor; // 0x98
	::UnityEngine::Vector3 cullingSphereCenterWS; // 0x9C
	::System::Single cullingSphereRadiusWS; // 0xA8
	::NapRenderEntity_RelativeVectorGetter* vectorGetters; // 0xB0
	::INapCharacterRenderingTransformsProvidable* transformProvider; // 0xB8
	::UnityEngine::Vector3 middlePointPosition; // 0xC0
	::UnityEngine::Vector3 headBonePosition; // 0xCC
	::UnityEngine::Vector3 headBoneForward; // 0xD8
	::UnityEngine::Matrix4x4 headBoneLocalToWorldMatrix; // 0xE4
	::System::Collections::Generic::List_1<::UnityEngine::LODGroup*>* _LodGroups_k__BackingField; // 0x128
	::Il2CppArray<::NapRenderer*>* rendererData; // 0x130
	::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>* indicatedLights; // 0x138
	::UnityEngine::Color _OverridenMainLightColor_k__BackingField; // 0x140
	::System::Collections::Generic::List_1<::UnityEngine::Texture2DArray*>* texArrayList; // 0x150
	::UnityEngine::Texture2DArray* matcapTexture2DArray; // 0x158
	::System::Int32 framesHasCreated; // 0x160
	::System::Single _CustomBlendedDirectionalLightSize_k__BackingField; // 0x164
	::UnityEngine::Vector3 previousMovingTestPosition; // 0x168
	::System::Single lockLightAngleRatio; // 0x174
	::PerObjectShadowContext context; // 0x178
	::System::Boolean _CacheBoundsWhenStays_k__BackingField; // 0x1C4
	::UnityEngine::Vector3 _LastFramePosition_k__BackingField; // 0x1C8
	::UnityEngine::Bounds _CachedBounds_k__BackingField; // 0x1D4
	::UnityEngine::Vector3 _CachedLightDirection_k__BackingField; // 0x1EC
	::PerObjectShadowCullResult _PerObjectShadowCullResult_k__BackingField; // 0x1F8
	::System::Single _PerObjectShadowAlpha_k__BackingField; // 0x1FC
	::System::Int32 _PerObjectShadowFadeTarget_k__BackingField; // 0x200
	::System::Boolean _UseBakedBounds_k__BackingField; // 0x204
	::UnityEngine::Vector4 _BakedObjectSpaceCullingSphere_k__BackingField; // 0x208
	::UnityEngine::Vector3 _LightDirection_k__BackingField; // 0x218
	::UnityEngine::Vector3 _xAxis_k__BackingField; // 0x224
	::UnityEngine::Vector3 _yAxis_k__BackingField; // 0x230
	::UnityEngine::Vector3 _zAxis_k__BackingField; // 0x23C
	::UnityEngine::Vector4 _OffsetForRendering_k__BackingField; // 0x248
	::UnityEngine::Vector3 m_CachedCustomLightDirection; // 0x258
	::UnityEngine::Vector3 m_CachedXAxis; // 0x264
	::UnityEngine::Vector3 m_CachedYAxis; // 0x270
	::UnityEngine::Vector3 m_CachedZAxis; // 0x27C
	::System::Single _DistanceToCamera_k__BackingField; // 0x288
	::System::Boolean isActuallyDistanceCulled; // 0x28C
	::System::Int32 EntityID; // 0x290
	::UnityEngine::RenderTexture* rampTex; // 0x298
	::System::Int32 materialIDCount; // 0x2A0
	::System::Int32 usedMaterialIDCount; // 0x2A4
	::UnityEngine::ComputeBuffer* rampPropertyBuffer; // 0x2A8
	::System::String* rampPropertyBufferDebugName; // 0x2B0
	::System::Int32 avatarParticleID; // 0x2B8
	::UnityEngine::Vector3 CameraPositionWS; // 0x2BC
	::System::Single LightDirectionFromCamera; // 0x2C8
	::System::Boolean GetBoneFromJob; // 0x2CC
	::MonoRenderEntity* Parent; // 0x2D0
	::System::Collections::Generic::List_1<::MonoRenderEntity*>* Children; // 0x2D8
	::Il2CppArray<::UnityEngine::Vector4>* encodedProxyAlphas; // 0x2E0
	::System::Boolean isProxyAlphaDirty; // 0x2E8
	::System::Boolean _DontOptimizeShadowProxyBounds_k__BackingField; // 0x2E9
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NapMaterial*>*>* napMaterialsDic; // 0x2F0

	::System::Void _ctor(::System::Action* onRelease)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NAPRENDERENTITY__CTOR_OFFSET))(this, onRelease);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPRENDERENTITY__CCTOR_OFFSET))();
	}

	::System::Action* get_onRelease()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_ONRELEASE_OFFSET))(this);
	}

	::System::Void set_onRelease(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_ONRELEASE_OFFSET))(this, value);
	}

	::UnityEngine::GameObject* get_Root()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_ROOT_OFFSET))(this);
	}

	::System::Void set_Root(::UnityEngine::GameObject* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_ROOT_OFFSET))(this, value);
	}

	::System::Int32 get_Priority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_PRIORITY_OFFSET))(this);
	}

	::System::Void set_Priority(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_PRIORITY_OFFSET))(this, value);
	}

	::System::Void AttachNativeRendererHandles()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_ATTACHNATIVERENDERERHANDLES_OFFSET))(this);
	}

	::System::Single get_SortPriority()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_SORTPRIORITY_OFFSET))(this);
	}

	::System::Void set_SortPriority(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_SORTPRIORITY_OFFSET))(this, value);
	}

	::System::Single get_ZDistanceToCamera()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_ZDISTANCETOCAMERA_OFFSET))(this);
	}

	::System::Void set_ZDistanceToCamera(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_ZDISTANCETOCAMERA_OFFSET))(this, value);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_ISACTIVE_OFFSET))(this, value);
	}

	::System::Boolean get_IsVisibleInCurrentCam()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_ISVISIBLEINCURRENTCAM_OFFSET))(this);
	}

	::System::Void set_IsVisibleInCurrentCam(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_ISVISIBLEINCURRENTCAM_OFFSET))(this, value);
	}

	::System::Boolean get_IsVisible()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_ISVISIBLE_OFFSET))(this);
	}

	::System::Void set_IsVisible(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_ISVISIBLE_OFFSET))(this, value);
	}

	::System::Boolean get_HasRegularRenderer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_HASREGULARRENDERER_OFFSET))(this);
	}

	::System::Void set_HasRegularRenderer(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_HASREGULARRENDERER_OFFSET))(this, value);
	}

	::System::Boolean get_IsCurFrameVisible()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_ISCURFRAMEVISIBLE_OFFSET))(this);
	}

	::System::Void set_IsCurFrameVisible(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_ISCURFRAMEVISIBLE_OFFSET))(this, value);
	}

	::System::Boolean get_IsGpuCrowd()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_ISGPUCROWD_OFFSET))(this);
	}

	::System::Boolean get_HasCharacterMaterial()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_HASCHARACTERMATERIAL_OFFSET))(this);
	}

	::System::Void set_HasCharacterMaterial(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_HASCHARACTERMATERIAL_OFFSET))(this, value);
	}

	::System::Boolean get_HasValidMaterial()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_HASVALIDMATERIAL_OFFSET))(this);
	}

	::System::Void set_HasValidMaterial(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_HASVALIDMATERIAL_OFFSET))(this, value);
	}

	::NapRenderEntityFlags get_flags()
	{
		return ((::NapRenderEntityFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_FLAGS_OFFSET))(this);
	}

	::System::Void set_flags(::NapRenderEntityFlags value)
	{
		return ((::System::Void(*)(::PVOID, ::NapRenderEntityFlags))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_FLAGS_OFFSET))(this, value);
	}

	::System::Boolean get_isCutSceneMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_ISCUTSCENEMODE_OFFSET))(this);
	}

	::System::Void set_isCutSceneMode(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_ISCUTSCENEMODE_OFFSET))(this, value);
	}

	::System::Boolean get_IsNapCbBound()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_ISNAPCBBOUND_OFFSET))(this);
	}

	::System::Void set_IsNapCbBound(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_ISNAPCBBOUND_OFFSET))(this, value);
	}

	::UnityEngine::Rendering::Universal::NapCBWrapper* get_NapCBuffer()
	{
		return ((::UnityEngine::Rendering::Universal::NapCBWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_NAPCBUFFER_OFFSET))(this);
	}

	::System::Boolean get_ClipVerticesUnderClipPlane()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_CLIPVERTICESUNDERCLIPPLANE_OFFSET))(this);
	}

	::System::Void set_ClipVerticesUnderClipPlane(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_CLIPVERTICESUNDERCLIPPLANE_OFFSET))(this, value);
	}

	::System::Boolean get_DisableSphereCulling()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_DISABLESPHERECULLING_OFFSET))(this);
	}

	::System::Void set_DisableSphereCulling(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_DISABLESPHERECULLING_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_MiddlePointPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_MIDDLEPOINTPOSITION_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_HeadBonePosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_HEADBONEPOSITION_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_HeadBoneForward()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_HEADBONEFORWARD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::LODGroup*>* get_LodGroups()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::LODGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_LODGROUPS_OFFSET))(this);
	}

	::System::Void set_LodGroups(::System::Collections::Generic::List_1<::UnityEngine::LODGroup*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::LODGroup*>*))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_LODGROUPS_OFFSET))(this, value);
	}

	::System::Boolean get_MainLightParamsOverriden()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_MAINLIGHTPARAMSOVERRIDEN_OFFSET))(this);
	}

	::System::Void set_MainLightParamsOverriden(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_MAINLIGHTPARAMSOVERRIDEN_OFFSET))(this, value);
	}

	::UnityEngine::Color get_OverridenMainLightColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_OVERRIDENMAINLIGHTCOLOR_OFFSET))(this);
	}

	::System::Void set_OverridenMainLightColor(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_OVERRIDENMAINLIGHTCOLOR_OFFSET))(this, value);
	}

	::RenderEntityType get_EntityType()
	{
		return ((::RenderEntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_ENTITYTYPE_OFFSET))(this);
	}

	::System::Void set_EntityType(::RenderEntityType value)
	{
		return ((::System::Void(*)(::PVOID, ::RenderEntityType))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_ENTITYTYPE_OFFSET))(this, value);
	}

	::System::Boolean get_UseCustomBlendedDirectionalLightSize()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_USECUSTOMBLENDEDDIRECTIONALLIGHTSIZE_OFFSET))(this);
	}

	::System::Void set_UseCustomBlendedDirectionalLightSize(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_USECUSTOMBLENDEDDIRECTIONALLIGHTSIZE_OFFSET))(this, value);
	}

	::System::Single get_CustomBlendedDirectionalLightSize()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_CUSTOMBLENDEDDIRECTIONALLIGHTSIZE_OFFSET))(this);
	}

	::System::Void set_CustomBlendedDirectionalLightSize(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_CUSTOMBLENDEDDIRECTIONALLIGHTSIZE_OFFSET))(this, value);
	}

	::System::Boolean get_FixRed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_FIXRED_OFFSET))(this);
	}

	::System::Void set_FixRed(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_FIXRED_OFFSET))(this, value);
	}

	::System::Boolean get_FixShadowCoverageOutOfFrustum()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_FIXSHADOWCOVERAGEOUTOFFRUSTUM_OFFSET))(this);
	}

	::System::Void set_FixShadowCoverageOutOfFrustum(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_FIXSHADOWCOVERAGEOUTOFFRUSTUM_OFFSET))(this, value);
	}

	::System::Boolean get_UsePerObjectShadow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_USEPEROBJECTSHADOW_OFFSET))(this);
	}

	::System::Void set_UsePerObjectShadow(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_USEPEROBJECTSHADOW_OFFSET))(this, value);
	}

	::System::Boolean get_ForcePerObjectShadow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_FORCEPEROBJECTSHADOW_OFFSET))(this);
	}

	::System::Boolean get_RayCastForCullingSphere()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_RAYCASTFORCULLINGSPHERE_OFFSET))(this);
	}

	::PerObjectShadowContext& get_Context()
	{
		return ((::PerObjectShadowContext&(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_CONTEXT_OFFSET))(this);
	}

	::System::Boolean get_CacheBoundsWhenStays()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_CACHEBOUNDSWHENSTAYS_OFFSET))(this);
	}

	::System::Void set_CacheBoundsWhenStays(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_CACHEBOUNDSWHENSTAYS_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_LastFramePosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_LASTFRAMEPOSITION_OFFSET))(this);
	}

	::System::Void set_LastFramePosition(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_LASTFRAMEPOSITION_OFFSET))(this, value);
	}

	::UnityEngine::Bounds get_CachedBounds()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_CACHEDBOUNDS_OFFSET))(this);
	}

	::System::Void set_CachedBounds(::UnityEngine::Bounds value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_CACHEDBOUNDS_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_CachedLightDirection()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_CACHEDLIGHTDIRECTION_OFFSET))(this);
	}

	::System::Void set_CachedLightDirection(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_CACHEDLIGHTDIRECTION_OFFSET))(this, value);
	}

	::PerObjectShadowCullResult get_PerObjectShadowCullResult()
	{
		return ((::PerObjectShadowCullResult(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_PEROBJECTSHADOWCULLRESULT_OFFSET))(this);
	}

	::System::Void set_PerObjectShadowCullResult(::PerObjectShadowCullResult value)
	{
		return ((::System::Void(*)(::PVOID, ::PerObjectShadowCullResult))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_PEROBJECTSHADOWCULLRESULT_OFFSET))(this, value);
	}

	::System::Single get_PerObjectShadowAlpha()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_PEROBJECTSHADOWALPHA_OFFSET))(this);
	}

	::System::Void set_PerObjectShadowAlpha(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_PEROBJECTSHADOWALPHA_OFFSET))(this, value);
	}

	::System::Int32 get_PerObjectShadowFadeTarget()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_PEROBJECTSHADOWFADETARGET_OFFSET))(this);
	}

	::System::Void set_PerObjectShadowFadeTarget(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_PEROBJECTSHADOWFADETARGET_OFFSET))(this, value);
	}

	::System::Boolean get_UseBakedBounds()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_USEBAKEDBOUNDS_OFFSET))(this);
	}

	::System::Void set_UseBakedBounds(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_USEBAKEDBOUNDS_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_BakedObjectSpaceCullingSphere()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_BAKEDOBJECTSPACECULLINGSPHERE_OFFSET))(this);
	}

	::System::Void set_BakedObjectSpaceCullingSphere(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_BAKEDOBJECTSPACECULLINGSPHERE_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_LightDirection()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_LIGHTDIRECTION_OFFSET))(this);
	}

	::System::Void set_LightDirection(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_LIGHTDIRECTION_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_xAxis()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_XAXIS_OFFSET))(this);
	}

	::System::Void set_xAxis(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_XAXIS_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_yAxis()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_YAXIS_OFFSET))(this);
	}

	::System::Void set_yAxis(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_YAXIS_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_zAxis()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_ZAXIS_OFFSET))(this);
	}

	::System::Void set_zAxis(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_ZAXIS_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_OffsetForRendering()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_OFFSETFORRENDERING_OFFSET))(this);
	}

	::System::Void set_OffsetForRendering(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_OFFSETFORRENDERING_OFFSET))(this, value);
	}

	::System::Single get_DistanceToCamera()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_DISTANCETOCAMERA_OFFSET))(this);
	}

	::System::Void set_DistanceToCamera(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_DISTANCETOCAMERA_OFFSET))(this, value);
	}

	::System::Single get_PerObjectShadowResolveAlpha()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_PEROBJECTSHADOWRESOLVEALPHA_OFFSET))(this);
	}

	::System::Void set_PerObjectShadowResolveAlpha(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_PEROBJECTSHADOWRESOLVEALPHA_OFFSET))(this, value);
	}

	::System::Void SetShadowDataBlock(::PerObjectShadowDataBlock data)
	{
		return ((::System::Void(*)(::PVOID, ::PerObjectShadowDataBlock))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SETSHADOWDATABLOCK_OFFSET))(this, data);
	}

	::System::Boolean get_UseCustomLightDirection()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_USECUSTOMLIGHTDIRECTION_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_CustomLightDirection()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_CUSTOMLIGHTDIRECTION_OFFSET))(this);
	}

	::System::Void SetShadowLightData(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 xAxis, ::UnityEngine::Vector3 yAxis, ::UnityEngine::Vector3 zAxis)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SETSHADOWLIGHTDATA_OFFSET))(this, direction, xAxis, yAxis, zAxis);
	}

	::PerObjectShadowGizmos* GetPerObjectShadowGizmos()
	{
		return ((::PerObjectShadowGizmos*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GETPEROBJECTSHADOWGIZMOS_OFFSET))(this);
	}

	::IPerObjectShadowRenderer* GetPerObjectShadowRenderer(::System::Int32 index)
	{
		return ((::IPerObjectShadowRenderer*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GETPEROBJECTSHADOWRENDERER_OFFSET))(this, index);
	}

	::UnityEngine::Vector4 get_ShaderUniformPerObjectShadowData()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_SHADERUNIFORMPEROBJECTSHADOWDATA_OFFSET))(this);
	}

	::System::Void set_ShaderUniformPerObjectShadowData(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_SHADERUNIFORMPEROBJECTSHADOWDATA_OFFSET))(this, value);
	}

	::System::Void set_ShaderUniformReceiveShadow(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_SHADERUNIFORMRECEIVESHADOW_OFFSET))(this, value);
	}

	::System::Void set_ShaderUniformPerObjectShadowUvMatrix(::UnityEngine::Matrix4x4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_SHADERUNIFORMPEROBJECTSHADOWUVMATRIX_OFFSET))(this, value);
	}

	::System::Void set_ShaderUniformPerObjectShadowResolveST(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_SHADERUNIFORMPEROBJECTSHADOWRESOLVEST_OFFSET))(this, value);
	}

	::System::Boolean get_IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_ISVALID_OFFSET))(this);
	}

	::System::Boolean get_IsAvatarParticleDirty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_ISAVATARPARTICLEDIRTY_OFFSET))(this);
	}

	::System::Void set_IsAvatarParticleDirty(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_ISAVATARPARTICLEDIRTY_OFFSET))(this, value);
	}

	::System::Boolean get_IsFirstTimeCalculateRadian()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_ISFIRSTTIMECALCULATERADIAN_OFFSET))(this);
	}

	::System::Void set_IsFirstTimeCalculateRadian(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_ISFIRSTTIMECALCULATERADIAN_OFFSET))(this, value);
	}

	::System::Boolean get_DontOptimizeShadowProxyBounds()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GET_DONTOPTIMIZESHADOWPROXYBOUNDS_OFFSET))(this);
	}

	::System::Void set_DontOptimizeShadowProxyBounds(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SET_DONTOPTIMIZESHADOWPROXYBOUNDS_OFFSET))(this, value);
	}

	::System::Boolean UpdateVisibility(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset, ::Unity::Collections::NativeList_1<::System::Boolean> visibilityResult0, ::Unity::Collections::NativeList_1<::System::Boolean> visibilityResult1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, ::Unity::Collections::NativeList_1<::System::Boolean>, ::Unity::Collections::NativeList_1<::System::Boolean>))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_UPDATEVISIBILITY_OFFSET))(this, asset, visibilityResult0, visibilityResult1);
	}

	::System::Boolean LegacyVisibleCheck(::UnityEngine::Renderer* renderer)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_LEGACYVISIBLECHECK_OFFSET))(this, renderer);
	}

	::System::Boolean BatchedVisibleCheck(::NapRenderer* napRenderer, ::Unity::Collections::NativeList_1<::System::Boolean> visibilityResult, ::System::Boolean justCurrentCamera)
	{
		return ((::System::Boolean(*)(::PVOID, ::NapRenderer*, ::Unity::Collections::NativeList_1<::System::Boolean>, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_BATCHEDVISIBLECHECK_OFFSET))(this, napRenderer, visibilityResult, justCurrentCamera);
	}

	::System::Void RefreshStatePerFrame(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset, ::UnityEngine::NAPRenderPipeline0::CameraData cameraData, ::System::Boolean forceUpdateAllDistance)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, ::UnityEngine::NAPRenderPipeline0::CameraData, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_REFRESHSTATEPERFRAME_OFFSET))(this, asset, cameraData, forceUpdateAllDistance);
	}

	::System::Void PushBoneTransformsToNative(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_PUSHBONETRANSFORMSTONATIVE_OFFSET))(this, asset);
	}

	::System::Void UpdateBoneTransformsForFrame(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_UPDATEBONETRANSFORMSFORFRAME_OFFSET))(this, asset);
	}

	::System::Void RebindArrayPropertyBuffer()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_REBINDARRAYPROPERTYBUFFER_OFFSET))(this);
	}

	::System::Boolean HasFlag(::NapRenderEntityFlags flags)
	{
		return ((::System::Boolean(*)(::PVOID, ::NapRenderEntityFlags))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_HASFLAG_OFFSET))(this, flags);
	}

	::System::Void SetFlag(::NapRenderEntityFlags flags, ::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::NapRenderEntityFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SETFLAG_OFFSET))(this, flags, value);
	}

	::System::Void Setup(::UnityEngine::GameObject* go, ::System::Int32 priority, ::NapRenderEntityFlags inFlags)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::NapRenderEntityFlags))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SETUP_OFFSET))(this, go, priority, inFlags);
	}

	static ::System::Void ReleaseTextureArrayList(::System::Collections::Generic::List_1<::UnityEngine::Texture2DArray*>* list, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NapMaterial*>*>*& dic)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Texture2DArray*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NapMaterial*>*>*&))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_RELEASETEXTUREARRAYLIST_OFFSET))(list, dic);
	}

	::System::Void ReleaseMatCapTextureArray(::System::Collections::Generic::List_1<::UnityEngine::Texture2DArray*>* list, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NapMaterial*>*>*& dic)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Texture2DArray*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NapMaterial*>*>*&))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_RELEASEMATCAPTEXTUREARRAY_OFFSET))(this, list, dic);
	}

	::System::Void CreateMatCapTextureArrayLegacy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_CREATEMATCAPTEXTUREARRAYLEGACY_OFFSET))(this);
	}

	::System::Boolean MatCapTextureCheckResult(::UnityEngine::Texture2D* matcapTex, ::UnityEngine::Material* material, ::System::Int32 subMaterialID, ::System::Int32 matcapID, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* matcapTexsList)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Texture2D*, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_MATCAPTEXTURECHECKRESULT_OFFSET))(this, matcapTex, material, subMaterialID, matcapID, matcapTexsList);
	}

	::System::Void CreateMatCapTextureArraySimplify()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_CREATEMATCAPTEXTUREARRAYSIMPLIFY_OFFSET))(this);
	}

	::System::Int32 GetRendererCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GETRENDERERCOUNT_OFFSET))(this);
	}

	::UnityEngine::Renderer* GetRendererAt(::System::Int32 index)
	{
		return ((::UnityEngine::Renderer*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GETRENDERERAT_OFFSET))(this, index);
	}

	static ::System::Void OnRelease(::NapRenderEntity* entity, ::System::Boolean passiveRelease, ::System::Boolean doNotRelease)
	{
		return ((::System::Void(*)(::NapRenderEntity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_ONRELEASE_OFFSET))(entity, passiveRelease, doNotRelease);
	}

	::System::Boolean Refresh(::System::Boolean refreshHierarchy, ::System::Boolean forceSetup)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_REFRESH_OFFSET))(this, refreshHierarchy, forceSetup);
	}

	::System::Void Reset(::System::Boolean resetShadow)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_RESET_OFFSET))(this, resetShadow);
	}

	::System::Void RefreshMatCapData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_REFRESHMATCAPDATA_OFFSET))(this);
	}

	::System::Void SetTransformGetters(::NapRenderEntity_RelativeVectorGetter* getter, ::INapCharacterRenderingTransformsProvidable* provider)
	{
		return ((::System::Void(*)(::PVOID, ::NapRenderEntity_RelativeVectorGetter*, ::INapCharacterRenderingTransformsProvidable*))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SETTRANSFORMGETTERS_OFFSET))(this, getter, provider);
	}

	::System::UInt64 GetLODPartID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_GETLODPARTID_OFFSET))(this);
	}

	::System::Void SetShadowProxyDitherAlpha(::UnityEngine::Renderer* renderer, ::System::Single alpha)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Single))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SETSHADOWPROXYDITHERALPHA_OFFSET))(this, renderer, alpha);
	}

	::System::Void ApplyShadowProxyDitherAlphaIfDirty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_APPLYSHADOWPROXYDITHERALPHAIFDIRTY_OFFSET))(this);
	}

	::System::Void SetHairShadowOffsets(::System::Single xOffset, ::System::Single yOffset)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_SETHAIRSHADOWOFFSETS_OFFSET))(this, xOffset, yOffset);
	}

	::System::Void AddIndicatedLight(::UnityEngine::Light* light)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_ADDINDICATEDLIGHT_OFFSET))(this, light);
	}

	::UnityEngine::NAPRenderPipeline0::NapLightData BuildIndicatedNapLightData(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* uald)
	{
		return ((::UnityEngine::NAPRenderPipeline0::NapLightData(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_BUILDINDICATEDNAPLIGHTDATA_OFFSET))(this, uald);
	}

	::System::Void RemoveIndicatedLight(::UnityEngine::Light* light)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_REMOVEINDICATEDLIGHT_OFFSET))(this, light);
	}

	::System::Void OverrideMainLightParams(::UnityEngine::Color& color, ::System::Single intensity)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&, ::System::Single))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_OVERRIDEMAINLIGHTPARAMS_OFFSET))(this, color, intensity);
	}

	::System::Void RevertOverridenMainLightParams()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_REVERTOVERRIDENMAINLIGHTPARAMS_OFFSET))(this);
	}

	::System::Boolean FindNapMaterial(::UnityEngine::Material* material, ::NapMaterial*& napMaterial)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::NapMaterial*&))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_FINDNAPMATERIAL_OFFSET))(this, material, napMaterial);
	}

	static ::System::Void Release(::NapRenderEntity* napRenderEntity, ::System::Boolean passive)
	{
		return ((::System::Void(*)(::NapRenderEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_RELEASE_OFFSET))(napRenderEntity, passive);
	}

	::System::Void RefreshMatCapVectorArrayProperties()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_REFRESHMATCAPVECTORARRAYPROPERTIES_OFFSET))(this);
	}
};
