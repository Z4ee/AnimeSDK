#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GraphicQuality.h"
#include "unitysdk/Struct_2_8B48740F46FC53FC.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_811;
class Class_1_56FF45D7B2C55655;
class Class_1_76597B0FC8DCAD88;
class Class_2_8443F308FD8840B9;
namespace RPG::Client::OpenWorld { class StreamingLayerSetting; }
namespace RPG::GameCore { class BlockConfig; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class EnvironmentDataInfo; }
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class MeshBound; }
namespace RPG::GameCore { class StageLodMapConfig; }
namespace RPG::GameCore { class StagePrefabInfo; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimatorControllerParameter; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class RPGDensityMapGrassBlockData; }
namespace UnityEngine { class RPGPointCloudGrassBlockData; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADDTAMONOTICKENTRY_OFFSET UNITYSDK_OFFSET(0x9EAB2F0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORMINWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x9EA9400)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_1_OFFSET UNITYSDK_OFFSET(0x9EA84D0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_2_OFFSET UNITYSDK_OFFSET(0x9EA8810)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_3_OFFSET UNITYSDK_OFFSET(0x9EA8E50)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_4_OFFSET UNITYSDK_OFFSET(0x9EA9050)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_5_OFFSET UNITYSDK_OFFSET(0x9EA9320)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9EA6DA0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_BOUNDSCONTAIN_OFFSET UNITYSDK_OFFSET(0x9EA55C0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_BOUNDSPROJECTTOXZPLANE_OFFSET UNITYSDK_OFFSET(0x9EA5320)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CALCBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0x9EAB410)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CHECKSTREAMINGRECTSIMILAR_OFFSET UNITYSDK_OFFSET(0x9EA3680)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CLOSEIRIHIZTEST_OFFSET UNITYSDK_OFFSET(0x9EAD1C0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_COPYANIMATOR_OFFSET UNITYSDK_OFFSET(0x9EA6570)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CREATERECTBYCENTERANDSIZE_OFFSET UNITYSDK_OFFSET(0x9EA5270)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ENABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x9EA9A80)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GAMEOBJECTHIERARCHYPATH_OFFSET UNITYSDK_OFFSET(0x9EA96F0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETCELLFILTER_OFFSET UNITYSDK_OFFSET(0x9EACBA0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETIRIBUILDINGRENDERERLISTWITHCONFIGDATAPOOL_OFFSET UNITYSDK_OFFSET(0x9EACCB0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETIRIBUILDINGRENDERERLISTWITHTEXTASSET_OFFSET UNITYSDK_OFFSET(0x9EACE60)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETLODLEVELBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x9EAB180)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETMINLODLEVEL_OFFSET UNITYSDK_OFFSET(0x9EAAF30)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_1_OFFSET UNITYSDK_OFFSET(0x9EA77D0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_2_OFFSET UNITYSDK_OFFSET(0x9EA7E50)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9EA71C0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETVECTOR3S_OFFSET UNITYSDK_OFFSET(0x9EA3590)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ASYNCLOADPERSISTENTASSET_OFFSET UNITYSDK_OFFSET(0x9EAD030)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENABLETAMONOTICKLOGERROR_OFFSET UNITYSDK_OFFSET(0x9EAD040)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENABLEUSINGSYNCLOAD_OFFSET UNITYSDK_OFFSET(0x9EACFD0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENTITYLODCONFIG_OFFSET UNITYSDK_OFFSET(0x9EAD090)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENTITYLODQUALITYSETTING_OFFSET UNITYSDK_OFFSET(0x9EAC9E0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_GROUPLODCONFIG_OFFSET UNITYSDK_OFFSET(0x9EAD100)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_QUALITYSETTING_OFFSET UNITYSDK_OFFSET(0x9EAC3D0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_REGIONOVERRIDEMAXPEROBJECTSHADOWCOUNT_OFFSET UNITYSDK_OFFSET(0x9EAD230)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGENABLE_OFFSET UNITYSDK_OFFSET(0x9EACEC0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGLAYERSETTING_OFFSET UNITYSDK_OFFSET(0x9EA51F0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGVISIBLEENABLE_OFFSET UNITYSDK_OFFSET(0x9EACF50)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_TSCROOMCACHE_OFFSET UNITYSDK_OFFSET(0x9EAA880)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_TSCSPROOMCACHE_OFFSET UNITYSDK_OFFSET(0x9EAA810)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GIZMODRAWRECT_OFFSET UNITYSDK_OFFSET(0x9EA5710)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ISADVANCEPLATFORMANDCANFORCECHOOSEPLATFORM_OFFSET UNITYSDK_OFFSET(0x9EACAE0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ISADVANCEPLATFORM_OFFSET UNITYSDK_OFFSET(0x9EACA90)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ISCOLLIDERGO_OFFSET UNITYSDK_OFFSET(0x9EABF90)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_1_OFFSET UNITYSDK_OFFSET(0x9EA3A90)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_2_OFFSET UNITYSDK_OFFSET(0x9EA47B0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_OFFSET UNITYSDK_OFFSET(0x9EA3760)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_OPENHIZTEST_OFFSET UNITYSDK_OFFSET(0x9EAD170)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_PROJECTPOINT_OFFSET UNITYSDK_OFFSET(0x9EA9910)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RECTCONTAIN_OFFSET UNITYSDK_OFFSET(0x9EA53C0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RECTOVERLAY_OFFSET UNITYSDK_OFFSET(0x9EA5490)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_REMOVETAMONOTICKENTRY_OFFSET UNITYSDK_OFFSET(0x9EA6270)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_REPLACELODCONFIGLAYER_OFFSET UNITYSDK_OFFSET(0x9EAA700)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RETURNVECTOR3S_OFFSET UNITYSDK_OFFSET(0x9EA3610)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RUNTIMECALCBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0x9EAB530)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETBLOCKGRASS_1_OFFSET UNITYSDK_OFFSET(0x9EAC240)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETBLOCKGRASS_OFFSET UNITYSDK_OFFSET(0x9EAC110)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETHEIGHTBLEND_OFFSET UNITYSDK_OFFSET(0x9EA9B00)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETSTREAMINGGRASSFASTMODE_OFFSET UNITYSDK_OFFSET(0x9EAC370)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETTERRAINTEX_OFFSET UNITYSDK_OFFSET(0x9EAA890)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_ENABLETAMONOTICKLOGERROR_OFFSET UNITYSDK_OFFSET(0x9EAD050)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_ENABLEUSINGSYNCLOAD_OFFSET UNITYSDK_OFFSET(0x9EAD020)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_REGIONOVERRIDEMAXPEROBJECTSHADOWCOUNT_OFFSET UNITYSDK_OFFSET(0x9EAD280)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_STREAMINGENABLE_OFFSET UNITYSDK_OFFSET(0x9EACED0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_STREAMINGVISIBLEENABLE_OFFSET UNITYSDK_OFFSET(0x9EACFC0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SHRINKOPENWORLDIRIBYTEARRAYCACHE_OFFSET UNITYSDK_OFFSET(0x9EACC30)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_STREAMINGDESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0x9EA58D0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_TRANSFORMMESHBOUND_OFFSET UNITYSDK_OFFSET(0x9EA6B40)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_TREEDEPTHTOCOLOR_OFFSET UNITYSDK_OFFSET(0x9EA5690)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_UPDATEGRAPHICQUALITYSETTING_OFFSET UNITYSDK_OFFSET(0x9EAC420)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EAD2A0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x9EAD290)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int OpenWorldHelper_TypeDefinitionIndex = 60560;

	class OpenWorldHelper : public ::System::Object
	{
	public:
		static ::UnityEngine::MaterialPropertyBlock** StaticGet__EmptyMatPropertyBlock()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE100);
		}
		static ::System::String** StaticGet_HeightBlendTexSuffix()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE108);
		}
		static ::RPG::GameCore::LodConfig** StaticGet__GroupLodConfig()
		{
			return (::RPG::GameCore::LodConfig**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE110);
		}
		static ::System::String** StaticGet_SceneConstValueConfigAssetPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE118);
		}
		static ::System::String** StaticGet_NormDistanceLodSettingTemplateAssetPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE120);
		}
		static ::UnityEngine::GameObject** StaticGet_TransformTool()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE128);
		}
		static ::System::String** StaticGet_GroupNoStreamingTemplateName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE130);
		}
		static ::System::String** StaticGet_SceneItemHLODStreamingLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE138);
		}
		static ::System::String** StaticGet_TSCOverrideLayer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE140);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet__CachedRendererMats()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE148);
		}
		static ::System::String** StaticGet_GroupDefaultStreamingTemplateName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE150);
		}
		static ::System::String** StaticGet_MonoEffectLodSettingTemplate()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE158);
		}
		static ::System::String** StaticGet_StageCapturedPropCommonJson()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE160);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_OpenWorldByteArrayCache()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE168);
		}
		static ::System::String** StaticGet_TAMonoTickLodSettingTemplateAssetPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE170);
		}
		static ::System::Collections::Generic::Queue_1<::Il2CppArray<::UnityEngine::Vector3>*>** StaticGet__vectorsPool()
		{
			return (::System::Collections::Generic::Queue_1<::Il2CppArray<::UnityEngine::Vector3>*>**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE178);
		}
		static ::RPG::GameCore::LodConfig** StaticGet__entityLodConfig()
		{
			return (::RPG::GameCore::LodConfig**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE180);
		}
		static ::System::String** StaticGet_EntityLodSettingTemplate()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE188);
		}
		static ::System::String** StaticGet_StreamingLayerSettingAssetPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE190);
		}
		static ::System::String** StaticGet_LodSettingTemplateAssetPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE198);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::AnimatorControllerParameter*>** StaticGet__AnimatorParaList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::AnimatorControllerParameter*>**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE1A0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Animator*>** StaticGet__AnimatorList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Animator*>**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE1A8);
		}
		static ::System::String** StaticGet_GameplayLodSettingTemplate()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE1B0);
		}
		static ::System::String** StaticGet_EntityStreamingLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE1B8);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet__RendererList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE1C0);
		}
		static ::System::String** StaticGet_GroupLodSettingTemplate()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE1C8);
		}
		static ::RPG::Client::OpenWorld::StreamingLayerSetting** StaticGet__StreamingLayerSetting()
		{
			return (::RPG::Client::OpenWorld::StreamingLayerSetting**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE1D0);
		}
		static ::System::String** StaticGet_VariantMDVItemStreamingLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0xE1D8);
		}
		static ::System::Single* StaticGet_MainSourceAttachPlayerThresholdDist()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4BE0);
		}
		static ::System::Int32* StaticGet__Block_Albedo_Height_Map()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4BE4);
		}
		static ::System::Boolean* StaticGet_RegionUpdateBlockVisibleInDisableStreaming()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4BE8);
		}
		static ::System::Boolean* StaticGet_GraphicSettingDirty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4BE9);
		}
		static ::System::Boolean* StaticGet_PVS_USE_BINARY_DATA()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4BEA);
		}
		static ::System::Boolean* StaticGet__EnableUsingSyncLoad()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4BEB);
		}
		static ::System::Single* StaticGet_s_CenterSimilarValue()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4BEC);
		}
		static ::RPG::GameCore::GraphicQuality* StaticGet_CacheLodGraphicQuality()
		{
			return (::RPG::GameCore::GraphicQuality*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4BF0);
		}
		static ::System::Int32* StaticGet__ES_BlockBboxBase()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4BF4);
		}
		static ::System::Single* StaticGet_s_VisionSimilarValue()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4BF8);
		}
		static ::System::Int32* StaticGet__ES_BlockBboxRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4BFC);
		}
		static ::System::Int32* StaticGet__Block_Bbox_Base()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C00);
		}
		static ::System::Int32* StaticGet_RegionDecEntityLodQualityRef()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C04);
		}
		static ::System::Boolean* StaticGet_ENABLE_ANIMATOR_URO()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C08);
		}
		static ::System::Boolean* StaticGet_SpaceFoldHideInvalidItem()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C09);
		}
		static ::System::Boolean* StaticGet_EnableVolumeHLODHide()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C0A);
		}
		static ::System::Boolean* StaticGet_RenderDebugLodEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C0B);
		}
		static ::System::Single* StaticGet_OutvisiontToInvisioinLimitDist()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C0C);
		}
		static ::System::Boolean* StaticGet_STREAMING_CHECK_LOADING_TIMEOUT()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C10);
		}
		static ::System::Boolean* StaticGet_UseStageConfigV2()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C11);
		}
		static ::System::Boolean* StaticGet_EnableSceneItemHLOD()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C12);
		}
		static ::System::Boolean* StaticGet_StreamingItemUsingObjectPool()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C13);
		}
		static ::System::Int32* StaticGet_OVERRIDE_STREAMING_SOURCE_UNLOAD_DELTA_R()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C14);
		}
		static ::System::Nullable_1<::RPG::GameCore::GraphicQuality>* StaticGet_CustomEntityLodGraphicQuality()
		{
			return (::System::Nullable_1<::RPG::GameCore::GraphicQuality>*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C18);
		}
		static ::System::Int32* StaticGet__RegionOverrideMaxPerObjectShadowCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C20);
		}
		static ::System::Int32* StaticGet__Blend_Base_Range()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C24);
		}
		static ::System::Int32* StaticGet_OVERRIDE_STREAMING_SOURCE_LOAD_DELTA_R()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C28);
		}
		static ::System::Boolean* StaticGet_IRI_USE_BINARY_DATA()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C2C);
		}
		static ::System::Boolean* StaticGet_ForbidCityAtmosphereStreaming()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C2D);
		}
		static ::System::Boolean* StaticGet_FORCE_DRAW_IRI()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C2E);
		}
		static ::System::Boolean* StaticGet_UseLodCulling()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C2F);
		}
		static ::System::Single* StaticGet_SchedulerFadingFramingLimitDelta()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C30);
		}
		static ::System::Int32* StaticGet_CLOSE_HIZ_TEST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C34);
		}
		static ::System::Boolean* StaticGet_UseLodShakeThreshold()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C38);
		}
		static ::System::Boolean* StaticGet_RadicalCulling()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C39);
		}
		static ::System::Boolean* StaticGet_IRI_FORCE_LOW_GRAPHIC()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C3A);
		}
		static ::System::Boolean* StaticGet_EnableStreamingVolumeThreadTask()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C3B);
		}
		static ::System::Single* StaticGet_SchedulerFadingFramingLimit()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C3C);
		}
		static ::System::Boolean* StaticGet_IRI_CLOSE_UPDATE_HIZ()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C40);
		}
		static ::System::Boolean* StaticGet_COLLIDER_STREAMING_DEBUG()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C41);
		}
		static ::System::Boolean* StaticGet__StreamingEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C42);
		}
		static ::System::Boolean* StaticGet_EnableRenderItemShadowCastingModeBugFix()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C43);
		}
		static ::System::Boolean* StaticGet_IRI_FALLBACK()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C44);
		}
		static ::System::Boolean* StaticGet_StreamingGrassFastMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C45);
		}
		static ::System::Boolean* StaticGet_RuntimeStreamingEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C46);
		}
		static ::System::Boolean* StaticGet_GRASS_FORCE_REFRESH_CULLING_ON_PERFORMANCE()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C47);
		}
		static ::System::Nullable_1<::RPG::GameCore::GraphicQuality>* StaticGet_CustomLodGraphicQuality()
		{
			return (::System::Nullable_1<::RPG::GameCore::GraphicQuality>*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C48);
		}
		static ::System::Int32* StaticGet__Block_Normal_Detail_Map()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C50);
		}
		static ::System::Single* StaticGet_HLODSwitchDelay()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C54);
		}
		static ::System::Boolean* StaticGet_EnableGrass()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C58);
		}
		static ::System::Boolean* StaticGet_UsingStreamingGrass()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C59);
		}
		static ::System::Boolean* StaticGet_ForbidInstantiatePrefabWhenUseBunchItem()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C5A);
		}
		static ::System::Boolean* StaticGet_EnableRegionOverrideMaxPerObjectShadowCount()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C5B);
		}
		static ::System::Boolean* StaticGet_LevelEditorStageStreaming()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C5C);
		}
		static ::System::Boolean* StaticGet_EnableCameraOcculuder()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C5D);
		}
		static ::System::Boolean* StaticGet_IsBaselineMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C5E);
		}
		static ::System::Boolean* StaticGet_LOW_IPHONE_STREAMING_FEATURE()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C5F);
		}
		static ::System::Boolean* StaticGet_DEBUG_SKIP_ITEM()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C60);
		}
		static ::System::Boolean* StaticGet_UseBunchItem()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C61);
		}
		static ::System::Boolean* StaticGet_SwitchQualityAndReloadPersistent()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C62);
		}
		static ::System::Boolean* StaticGet_EntityStreaming()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C63);
		}
		static ::System::Boolean* StaticGet_StreamingDebugScriptOpen()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C64);
		}
		static ::System::Boolean* StaticGet_InStageConfigV2Mode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C65);
		}
		static ::System::Boolean* StaticGet_UsingStreamingInstanceStub()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C66);
		}
		static ::System::Boolean* StaticGet_EnableStreamingJobSystem()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C67);
		}
		static ::System::Boolean* StaticGet_UseNewStageCaptureProp()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C68);
		}
		static ::System::Boolean* StaticGet__StreamingVisibleEnalbe()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C69);
		}
		static ::System::Int32* StaticGet__ES_HeightMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C6C);
		}
		static ::System::Int32* StaticGet__TerrainCoverageParamsId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C70);
		}
		static ::System::Single* StaticGet_SchedulerFadingFramingLimitStandard()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C74);
		}
		static ::System::Int32* StaticGet__Block_Bbox_Range()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x4C78);
		}
		// static const ::System::Int32 OpenWorldByteArrayIncreaseSize = 0x80000; // 0x0
		// static const ::System::String* DynamicItemLayer; // 0x0
		// static const ::System::String* DynamicLargeItemLayer; // 0x0
		// static const ::System::Single DefaultHLODSwitchDelay; // 0x0
		// static const ::System::Single TransitionLimitTime; // 0x0
		// static const ::System::Single LevelGridSize; // 0x0
		// static const ::System::Single BaselineModeTickInterval; // 0x0
		// static const ::System::String* TransformFindSelfStr; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* GetVector3s()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETVECTOR3S_OFFSET))();
		}

		static ::System::Void ReturnVector3s(::Il2CppArray<::UnityEngine::Vector3>* array)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RETURNVECTOR3S_OFFSET))(array);
		}

		static ::System::Boolean CheckStreamingRectSimilar(::UnityEngine::Rect pRC0, ::UnityEngine::Rect pRC1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CHECKSTREAMINGRECTSIMILAR_OFFSET))(pRC0, pRC1);
		}

		static ::UnityEngine::Bounds LocalSpaceBoundToFieldSpaceBound(::UnityEngine::Transform* localTrans, ::UnityEngine::Bounds bound, ::UnityEngine::Vector3 localPos, ::UnityEngine::Vector3 localEuler, ::UnityEngine::Vector3 localScale)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Transform*, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_OFFSET))(localTrans, bound, localPos, localEuler, localScale);
		}

		static ::UnityEngine::Bounds LocalSpaceBoundToFieldSpaceBound_1(::UnityEngine::Transform* local_trans, ::UnityEngine::Bounds bound, ::UnityEngine::Transform* hang_tans)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Transform*, ::UnityEngine::Bounds, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_1_OFFSET))(local_trans, bound, hang_tans);
		}

		static ::UnityEngine::Bounds LocalSpaceBoundToFieldSpaceBound_2(::UnityEngine::Matrix4x4 localToParent, ::UnityEngine::Bounds bound)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_2_OFFSET))(localToParent, bound);
		}

		static ::RPG::Client::OpenWorld::StreamingLayerSetting* get_StreamingLayerSetting()
		{
			return ((::RPG::Client::OpenWorld::StreamingLayerSetting*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGLAYERSETTING_OFFSET))();
		}

		static ::UnityEngine::Rect CreateRectByCenterAndSize(::UnityEngine::Vector2 vCenter, ::UnityEngine::Vector2 vSize)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CREATERECTBYCENTERANDSIZE_OFFSET))(vCenter, vSize);
		}

		static ::UnityEngine::Rect BoundsProjectToXZPlane(::UnityEngine::Bounds pBounds)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_BOUNDSPROJECTTOXZPLANE_OFFSET))(pBounds);
		}

		static ::System::Boolean RectContain(::UnityEngine::Rect pRect, ::UnityEngine::Rect pTarget)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RECTCONTAIN_OFFSET))(pRect, pTarget);
		}

		static ::System::Boolean RectOverlay(::UnityEngine::Rect pRect, ::UnityEngine::Rect pTarget)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RECTOVERLAY_OFFSET))(pRect, pTarget);
		}

		static ::System::Boolean BoundsContain(::UnityEngine::Bounds pBounds, ::UnityEngine::Bounds pTarget)
		{
			return ((::System::Boolean(*)(::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_BOUNDSCONTAIN_OFFSET))(pBounds, pTarget);
		}

		static ::UnityEngine::Color TreeDepthToColor(::System::Int32 nTreeDepth)
		{
			return ((::UnityEngine::Color(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_TREEDEPTHTOCOLOR_OFFSET))(nTreeDepth);
		}

		static ::System::Void GizmoDrawRect(::UnityEngine::Rect pRC)
		{
			return ((::System::Void(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GIZMODRAWRECT_OFFSET))(pRC);
		}

		static ::System::Void StreamingDestroyInstance(::UnityEngine::GameObject* obj, ::Class_2_8443F308FD8840B9* renderItem, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::UInt32>* renderingLayerMaskInitValue, ::System::Boolean resetShadowCastMode, ::System::Boolean keepParent)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::Class_2_8443F308FD8840B9*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::UInt32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_STREAMINGDESTROYINSTANCE_OFFSET))(obj, renderItem, renderingLayerMaskInitValue, resetShadowCastMode, keepParent);
		}

		static ::System::Void CopyAnimator(::UnityEngine::Animator* target, ::UnityEngine::Animator* source, ::System::Boolean isRebind)
		{
			return ((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::Animator*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_COPYANIMATOR_OFFSET))(target, source, isRebind);
		}

		static ::UnityEngine::Bounds TransformMeshBound(::RPG::GameCore::BlockNodeConfig* bnCfg, ::RPG::GameCore::MeshBound* meshbound)
		{
			return ((::UnityEngine::Bounds(*)(::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::MeshBound*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_TRANSFORMMESHBOUND_OFFSET))(bnCfg, meshbound);
		}

		static ::System::Void AdjustTransform(::RPG::GameCore::BlockNodeConfig* bnCfg, ::RPG::GameCore::StagePrefabInfo* prefabCfg, ::UnityEngine::GameObject* parent_go, ::UnityEngine::GameObject* instance_go)
		{
			return ((::System::Void(*)(::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::StagePrefabInfo*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_OFFSET))(bnCfg, prefabCfg, parent_go, instance_go);
		}

		static ::System::Void GetStreamingItemTransform(::RPG::GameCore::BlockNodeConfig* bnCfg, ::RPG::GameCore::StagePrefabInfo* prefabCfg, ::UnityEngine::Vector3& pos, ::UnityEngine::Vector3& eulerAngles)
		{
			return ((::System::Void(*)(::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::StagePrefabInfo*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_OFFSET))(bnCfg, prefabCfg, pos, eulerAngles);
		}

		static ::System::Void GetStreamingItemTransform_1(::RPG::GameCore::BlockNodeConfig* bnCfg, ::UnityEngine::Vector3 localPos, ::UnityEngine::Vector3 localEuler, ::UnityEngine::Vector3 localScale, ::UnityEngine::Vector3& pos, ::UnityEngine::Vector3& eulerAngles)
		{
			return ((::System::Void(*)(::RPG::GameCore::BlockNodeConfig*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_1_OFFSET))(bnCfg, localPos, localEuler, localScale, pos, eulerAngles);
		}

		static ::System::Void GetStreamingItemTransform_2(::RPG::GameCore::StagePrefabInfo* parentInfo, ::UnityEngine::Vector3 localPos, ::UnityEngine::Vector3 localEuler, ::UnityEngine::Vector3 localScale, ::UnityEngine::Vector3& pos, ::UnityEngine::Vector3& eulerAngles)
		{
			return ((::System::Void(*)(::RPG::GameCore::StagePrefabInfo*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_2_OFFSET))(parentInfo, localPos, localEuler, localScale, pos, eulerAngles);
		}

		static ::UnityEngine::Matrix4x4 AdjustTransform_1(::RPG::GameCore::BlockNodeConfig* bnCfg, ::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 rot, ::UnityEngine::Vector3 scale)
		{
			return ((::UnityEngine::Matrix4x4(*)(::RPG::GameCore::BlockNodeConfig*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_1_OFFSET))(bnCfg, pos, rot, scale);
		}

		static ::System::Void AdjustTransform_2(::RPG::GameCore::BlockNodeConfig* bnCfg, ::RPG::GameCore::EnvironmentDataInfo* envDataInfo, ::UnityEngine::GameObject* parent_go, ::UnityEngine::GameObject* instance_go)
		{
			return ((::System::Void(*)(::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::EnvironmentDataInfo*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_2_OFFSET))(bnCfg, envDataInfo, parent_go, instance_go);
		}

		static ::System::Void AdjustTransform_3(::RPG::GameCore::StagePrefabInfo* prefabCfg, ::UnityEngine::GameObject* parent_go, ::UnityEngine::GameObject* instance_go, ::System::String* relativePath)
		{
			return ((::System::Void(*)(::RPG::GameCore::StagePrefabInfo*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_3_OFFSET))(prefabCfg, parent_go, instance_go, relativePath);
		}

		static ::System::Void AdjustTransform_4(::UnityEngine::Transform* parent_t, ::UnityEngine::Vector3 localPosition, ::UnityEngine::Vector3 localEulerAngles, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& euler)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_4_OFFSET))(parent_t, localPosition, localEulerAngles, position, euler);
		}

		static ::System::Void AdjustTransform_5(::UnityEngine::GameObject* parent_go, ::UnityEngine::Vector3 localPosition, ::UnityEngine::Vector3 localEulerAngles, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& euler)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_5_OFFSET))(parent_go, localPosition, localEulerAngles, position, euler);
		}

		static ::System::Void AdjustTransformInWorldSpace(::UnityEngine::GameObject* parent_go, ::UnityEngine::Vector3 localPosition, ::UnityEngine::Vector3 localEulerAngles, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& euler)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORMINWORLDSPACE_OFFSET))(parent_go, localPosition, localEulerAngles, position, euler);
		}

		static ::System::String* GameObjectHierarchyPath(::UnityEngine::Transform* pDestTrans, ::UnityEngine::Transform* pParentTrans)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GAMEOBJECTHIERARCHYPATH_OFFSET))(pDestTrans, pParentTrans);
		}

		static ::System::Single ProjectPoint(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 axis)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_PROJECTPOINT_OFFSET))(point, axis);
		}

		static ::System::Void EnableKeyword(::UnityEngine::Renderer* renderer, ::System::String* keyword, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ENABLEKEYWORD_OFFSET))(renderer, keyword, enable);
		}

		static ::System::Void SetHeightBlend(::Class_1_56FF45D7B2C55655* openWorld, ::RPG::GameCore::BlockConfig* blockConfig, ::UnityEngine::MaterialPropertyBlock* matBlock, ::UnityEngine::GameObject* targetGo)
		{
			return ((::System::Void(*)(::Class_1_56FF45D7B2C55655*, ::RPG::GameCore::BlockConfig*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETHEIGHTBLEND_OFFSET))(openWorld, blockConfig, matBlock, targetGo);
		}

		static ::System::Boolean ReplaceLodConfigLayer(::System::String* templateName, ::System::String*& layerName)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_REPLACELODCONFIGLAYER_OFFSET))(templateName, layerName);
		}

		static ::System::Boolean get_TSCSPRoomCache()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_TSCSPROOMCACHE_OFFSET))();
		}

		static ::System::Boolean get_TSCRoomCache()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_TSCROOMCACHE_OFFSET))();
		}

		static ::System::Void SetTerrainTex(::Class_1_56FF45D7B2C55655* openWorldLogic, ::RPG::GameCore::BlockConfig* blockConfig, ::RPG::GameCore::StagePrefabInfo* prefabInfo, ::UnityEngine::GameObject* instGameObject)
		{
			return ((::System::Void(*)(::Class_1_56FF45D7B2C55655*, ::RPG::GameCore::BlockConfig*, ::RPG::GameCore::StagePrefabInfo*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETTERRAINTEX_OFFSET))(openWorldLogic, blockConfig, prefabInfo, instGameObject);
		}

		static ::System::Int32 GetMinLODLevel(::RPG::GameCore::LodTemplate* lodTemplate, ::System::Int32 maxLodLevel, ::RPG::GameCore::GraphicQuality quality)
		{
			return ((::System::Int32(*)(::RPG::GameCore::LodTemplate*, ::System::Int32, ::RPG::GameCore::GraphicQuality))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETMINLODLEVEL_OFFSET))(lodTemplate, maxLodLevel, quality);
		}

		static ::System::Int32 GetLODLevelByDistance(::System::Single distance, ::RPG::GameCore::LodTemplate* lodTemplate, ::System::Int32 maxLodLevel, ::RPG::GameCore::GraphicQuality quality)
		{
			return ((::System::Int32(*)(::System::Single, ::RPG::GameCore::LodTemplate*, ::System::Int32, ::RPG::GameCore::GraphicQuality))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETLODLEVELBYDISTANCE_OFFSET))(distance, lodTemplate, maxLodLevel, quality);
		}

		static ::System::Void AddTAMonoTickEntry(::Class_1_56FF45D7B2C55655* world, ::UnityEngine::GameObject* go, ::Class_0_16E4307DCC419505_811* rect, ::System::Single lodSize)
		{
			return ((::System::Void(*)(::Class_1_56FF45D7B2C55655*, ::UnityEngine::GameObject*, ::Class_0_16E4307DCC419505_811*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADDTAMONOTICKENTRY_OFFSET))(world, go, rect, lodSize);
		}

		static ::System::Void RemoveTAMonoTickEntry(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_REMOVETAMONOTICKENTRY_OFFSET))(go);
		}

		static ::System::Single CalcBoundSize(::UnityEngine::Bounds bounds)
		{
			return ((::System::Single(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CALCBOUNDSIZE_OFFSET))(bounds);
		}

		static ::System::Single RuntimeCalcBoundSize(::UnityEngine::GameObject* go, ::System::Boolean isColliderGO)
		{
			return ((::System::Single(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RUNTIMECALCBOUNDSIZE_OFFSET))(go, isColliderGO);
		}

		static ::System::Boolean IsColliderGO(::UnityEngine::GameObject* go, ::System::String* hieracyPath)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ISCOLLIDERGO_OFFSET))(go, hieracyPath);
		}

		static ::Class_1_76597B0FC8DCAD88* SetBlockGrass(::UnityEngine::GameObject* blockParent, ::UnityEngine::RPGPointCloudGrassBlockData* pointCloudGrassBlockData, ::RPG::GameCore::LodConfig* lodConfig, ::RPG::GameCore::StageLodMapConfig* stageLodMap)
		{
			return ((::Class_1_76597B0FC8DCAD88*(*)(::UnityEngine::GameObject*, ::UnityEngine::RPGPointCloudGrassBlockData*, ::RPG::GameCore::LodConfig*, ::RPG::GameCore::StageLodMapConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETBLOCKGRASS_OFFSET))(blockParent, pointCloudGrassBlockData, lodConfig, stageLodMap);
		}

		static ::Class_1_76597B0FC8DCAD88* SetBlockGrass_1(::UnityEngine::GameObject* blockParent, ::UnityEngine::RPGDensityMapGrassBlockData* densityMapGrassBlockData, ::RPG::GameCore::LodConfig* lodConfig, ::RPG::GameCore::StageLodMapConfig* stageLodMap)
		{
			return ((::Class_1_76597B0FC8DCAD88*(*)(::UnityEngine::GameObject*, ::UnityEngine::RPGDensityMapGrassBlockData*, ::RPG::GameCore::LodConfig*, ::RPG::GameCore::StageLodMapConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETBLOCKGRASS_1_OFFSET))(blockParent, densityMapGrassBlockData, lodConfig, stageLodMap);
		}

		static ::System::Void SetStreamingGrassFastMode(::System::Boolean mode)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETSTREAMINGGRASSFASTMODE_OFFSET))(mode);
		}

		static ::RPG::GameCore::GraphicQuality get_QualitySetting()
		{
			return ((::RPG::GameCore::GraphicQuality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_QUALITYSETTING_OFFSET))();
		}

		static ::RPG::GameCore::GraphicQuality get_EntityLodQualitySetting()
		{
			return ((::RPG::GameCore::GraphicQuality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENTITYLODQUALITYSETTING_OFFSET))();
		}

		static ::System::Boolean IsAdvancePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ISADVANCEPLATFORM_OFFSET))();
		}

		static ::System::Boolean IsAdvancePlatformAndCanForceChoosePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ISADVANCEPLATFORMANDCANFORCECHOOSEPLATFORM_OFFSET))();
		}

		static ::System::Int32 GetCellFilter()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETCELLFILTER_OFFSET))();
		}

		static ::System::Void UpdateGraphicQualitySetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_UPDATEGRAPHICQUALITYSETTING_OFFSET))();
		}

		static ::System::Void ShrinkOpenWorldIRIByteArrayCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SHRINKOPENWORLDIRIBYTEARRAYCACHE_OFFSET))();
		}

		static ::Struct_2_8B48740F46FC53FC GetIRIBuildingRendererListWithConfigDataPool(::System::String* path, ::System::Action_2<::Struct_2_8B48740F46FC53FC, ::System::Object*>* cb, ::System::Object* userData)
		{
			return ((::Struct_2_8B48740F46FC53FC(*)(::System::String*, ::System::Action_2<::Struct_2_8B48740F46FC53FC, ::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETIRIBUILDINGRENDERERLISTWITHCONFIGDATAPOOL_OFFSET))(path, cb, userData);
		}

		static ::Struct_2_8B48740F46FC53FC GetIRIBuildingRendererListWithTextAsset(::UnityEngine::TextAsset* text)
		{
			return ((::Struct_2_8B48740F46FC53FC(*)(::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETIRIBUILDINGRENDERERLISTWITHTEXTASSET_OFFSET))(text);
		}

		static ::System::Boolean get_StreamingEnable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGENABLE_OFFSET))();
		}

		static ::System::Void set_StreamingEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_STREAMINGENABLE_OFFSET))(value);
		}

		static ::System::Boolean get_StreamingVisibleEnable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGVISIBLEENABLE_OFFSET))();
		}

		static ::System::Void set_StreamingVisibleEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_STREAMINGVISIBLEENABLE_OFFSET))(value);
		}

		static ::System::Boolean get_EnableUsingSyncLoad()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENABLEUSINGSYNCLOAD_OFFSET))();
		}

		static ::System::Void set_EnableUsingSyncLoad(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_ENABLEUSINGSYNCLOAD_OFFSET))(value);
		}

		static ::System::Boolean get_AsyncLoadPersistentAsset()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ASYNCLOADPERSISTENTASSET_OFFSET))();
		}

		static ::System::Boolean get_EnableTAMonoTickLogError()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENABLETAMONOTICKLOGERROR_OFFSET))();
		}

		static ::System::Void set_EnableTAMonoTickLogError(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_ENABLETAMONOTICKLOGERROR_OFFSET))(value);
		}

		static ::RPG::GameCore::LodConfig* get_EntityLodConfig()
		{
			return ((::RPG::GameCore::LodConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENTITYLODCONFIG_OFFSET))();
		}

		static ::RPG::GameCore::LodConfig* get_GroupLodConfig()
		{
			return ((::RPG::GameCore::LodConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_GROUPLODCONFIG_OFFSET))();
		}

		static ::System::Void OpenHizTest()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_OPENHIZTEST_OFFSET))();
		}

		static ::System::Void CloseIRIHizTest()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CLOSEIRIHIZTEST_OFFSET))();
		}

		static ::System::Int32 get_RegionOverrideMaxPerObjectShadowCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_REGIONOVERRIDEMAXPEROBJECTSHADOWCOUNT_OFFSET))();
		}

		static ::System::Void set_RegionOverrideMaxPerObjectShadowCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_REGIONOVERRIDEMAXPEROBJECTSHADOWCOUNT_OFFSET))(value);
		}
	};
}
