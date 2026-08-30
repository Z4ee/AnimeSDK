#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GraphicQuality.h"
#include "unitysdk/Struct_2_A77148D52D516E55.h"
#include "unitysdk/Struct_2_CC45B4503679E14E.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_5.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1064;
class Class_1_53BE720C46D20BF8;
class Class_1_64EA8B4AB59D91C7;
class Class_1_76597B0FC8DCAD88;
class Class_1_D70A30D666F20D90;
class Class_2_250DE1D032671F25;
namespace RPG::Client::OpenWorld { class StreamingLayerSetting; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class MeshBound; }
namespace RPG::GameCore { class StageLodMapConfig; }
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

#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADDTAMONOTICKENTRY_OFFSET UNITYSDK_OFFSET(0xD9FE4D0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORMINWORLDSPACE_OFFSET UNITYSDK_OFFSET(0xD9FBAA0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_1_OFFSET UNITYSDK_OFFSET(0xD9F8EF0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_2_OFFSET UNITYSDK_OFFSET(0xD9FAA10)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_3_OFFSET UNITYSDK_OFFSET(0xD9FAD50)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_4_OFFSET UNITYSDK_OFFSET(0xD9FB370)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_5_OFFSET UNITYSDK_OFFSET(0xD9FB470)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_6_OFFSET UNITYSDK_OFFSET(0xD9FB6F0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_7_OFFSET UNITYSDK_OFFSET(0xD9FB9C0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xD9F8DF0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_BOUNDSCONTAIN_OFFSET UNITYSDK_OFFSET(0xD9F7340)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_BOUNDSPROJECTTOXZPLANE_OFFSET UNITYSDK_OFFSET(0xD9F70A0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CALCBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0xD9FE5F0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CHECKSTREAMINGRECTSIMILAR_OFFSET UNITYSDK_OFFSET(0xD9F5600)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CLOSEIRIHIZTEST_OFFSET UNITYSDK_OFFSET(0xDA00390)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_COPYANIMATOR_OFFSET UNITYSDK_OFFSET(0xD9F8530)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CREATERECTBYCENTERANDSIZE_OFFSET UNITYSDK_OFFSET(0xD9F6FF0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ENABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0xD9FC4F0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GAMEOBJECTHIERARCHYPATH_OFFSET UNITYSDK_OFFSET(0xD9FC160)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETCELLFILTER_OFFSET UNITYSDK_OFFSET(0xD9FFDF0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETIRIBUILDINGRENDERERLISTWITHCONFIGDATAPOOL_OFFSET UNITYSDK_OFFSET(0xD9FFF00)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETIRIBUILDINGRENDERERLISTWITHTEXTASSET_OFFSET UNITYSDK_OFFSET(0xD9FFFF0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETLODLEVELBYDISTANCE_OFFSET UNITYSDK_OFFSET(0xD9FE370)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETMINLODLEVEL_OFFSET UNITYSDK_OFFSET(0xD9FE140)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTAGEJSONPATH_OFFSET UNITYSDK_OFFSET(0xD9FBFA0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_1_OFFSET UNITYSDK_OFFSET(0xD9F9480)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_2_OFFSET UNITYSDK_OFFSET(0xD9F9B00)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_3_OFFSET UNITYSDK_OFFSET(0xD9FA180)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_4_OFFSET UNITYSDK_OFFSET(0xD9FA350)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_OFFSET UNITYSDK_OFFSET(0xD9F9380)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSUBSTAGEDIR_OFFSET UNITYSDK_OFFSET(0xD9FBD90)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSUBSTAGEJSONPATH_OFFSET UNITYSDK_OFFSET(0xD9FBF30)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETVECTOR3S_OFFSET UNITYSDK_OFFSET(0xD9F5510)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ASYNCLOADPERSISTENTASSET_OFFSET UNITYSDK_OFFSET(0xDA00200)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENABLETAMONOTICKLOGERROR_OFFSET UNITYSDK_OFFSET(0xDA00210)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENABLEUSINGSYNCLOAD_OFFSET UNITYSDK_OFFSET(0xDA001A0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENTITYLODCONFIG_OFFSET UNITYSDK_OFFSET(0xDA00260)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENTITYLODQUALITYSETTING_OFFSET UNITYSDK_OFFSET(0xD9FFC30)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_GROUPLODCONFIG_OFFSET UNITYSDK_OFFSET(0xDA002D0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_QUALITYSETTING_OFFSET UNITYSDK_OFFSET(0xD9FF5F0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_REGIONOVERRIDEMAXPEROBJECTSHADOWCOUNT_OFFSET UNITYSDK_OFFSET(0xDA00400)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGENABLE_OFFSET UNITYSDK_OFFSET(0xDA00050)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGLAYERSETTING_OFFSET UNITYSDK_OFFSET(0xD9F6F70)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGVISIBLEENABLE_OFFSET UNITYSDK_OFFSET(0xDA00120)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_TSCROOMCACHE_OFFSET UNITYSDK_OFFSET(0xD9FD6C0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_TSCSPROOMCACHE_OFFSET UNITYSDK_OFFSET(0xD9FD650)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GIZMODRAWRECT_OFFSET UNITYSDK_OFFSET(0xD9F7490)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ISADVANCEPLATFORMANDCANFORCECHOOSEPLATFORM_OFFSET UNITYSDK_OFFSET(0xD9FFD30)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ISADVANCEPLATFORM_OFFSET UNITYSDK_OFFSET(0xD9FFCE0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ISCOLLIDERGO_OFFSET UNITYSDK_OFFSET(0xD9FF1C0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_1_OFFSET UNITYSDK_OFFSET(0xD9F5A10)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_2_OFFSET UNITYSDK_OFFSET(0xD9F65B0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_OFFSET UNITYSDK_OFFSET(0xD9F56E0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_OPENHIZTEST_OFFSET UNITYSDK_OFFSET(0xDA00340)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_PROJECTPOINT_OFFSET UNITYSDK_OFFSET(0xD9FC380)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RECTCONTAIN_OFFSET UNITYSDK_OFFSET(0xD9F7140)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RECTOVERLAY_OFFSET UNITYSDK_OFFSET(0xD9F7210)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_REMOVETAMONOTICKENTRY_OFFSET UNITYSDK_OFFSET(0xD9F80D0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_REPLACELODCONFIGLAYER_OFFSET UNITYSDK_OFFSET(0xD9FD500)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RETURNVECTOR3S_OFFSET UNITYSDK_OFFSET(0xD9F5590)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RUNTIMECALCBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0xD9FE710)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETBLOCKGRASS_1_OFFSET UNITYSDK_OFFSET(0xD9FF460)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETBLOCKGRASS_OFFSET UNITYSDK_OFFSET(0xD9FF330)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETHEIGHTBLEND_OFFSET UNITYSDK_OFFSET(0xD9FC570)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETSTREAMINGGRASSFASTMODE_OFFSET UNITYSDK_OFFSET(0xD9FF590)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETTERRAINTEX_1_OFFSET UNITYSDK_OFFSET(0xD9FD7D0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETTERRAINTEX_OFFSET UNITYSDK_OFFSET(0xD9FD6D0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_ENABLETAMONOTICKLOGERROR_OFFSET UNITYSDK_OFFSET(0xDA00220)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_ENABLEUSINGSYNCLOAD_OFFSET UNITYSDK_OFFSET(0xDA001F0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_REGIONOVERRIDEMAXPEROBJECTSHADOWCOUNT_OFFSET UNITYSDK_OFFSET(0xDA00450)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_STREAMINGENABLE_OFFSET UNITYSDK_OFFSET(0xDA00060)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_STREAMINGVISIBLEENABLE_OFFSET UNITYSDK_OFFSET(0xDA00190)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SHRINKOPENWORLDIRIBYTEARRAYCACHE_OFFSET UNITYSDK_OFFSET(0xD9FFE80)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_STREAMINGDESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0xD9F7650)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_TRANSFORMMESHBOUND_OFFSET UNITYSDK_OFFSET(0xD9F8BB0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_TREEDEPTHTOCOLOR_OFFSET UNITYSDK_OFFSET(0xD9F7410)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_UPDATEGRAPHICQUALITYSETTING_OFFSET UNITYSDK_OFFSET(0xD9FF640)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0xDA00470)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0xDA00460)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int OpenWorldHelper_TypeDefinitionIndex = 73767;

	class OpenWorldHelper : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_StageCapturedPropCommonJson()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x66F0);
		}
		static ::System::String** StaticGet_EntityLodSettingTemplate()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x66F8);
		}
		static ::System::String** StaticGet_GroupDefaultStreamingTemplateName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x6700);
		}
		static ::System::String** StaticGet_SceneItemHLODStreamingLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x6708);
		}
		static ::System::String** StaticGet_GameplayLodSettingTemplate()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x6710);
		}
		static ::System::String** StaticGet_StreamingLayerSettingAssetPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x6718);
		}
		static ::System::String** StaticGet_GroupLodSettingTemplate()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x6720);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::AnimatorControllerParameter*>** StaticGet__AnimatorParaList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::AnimatorControllerParameter*>**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x6728);
		}
		static ::System::String** StaticGet_VariantMDVItemStreamingLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x6730);
		}
		static ::RPG::Client::OpenWorld::StreamingLayerSetting** StaticGet__StreamingLayerSetting()
		{
			return (::RPG::Client::OpenWorld::StreamingLayerSetting**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x6738);
		}
		static ::System::String** StaticGet_MonoEffectLodSettingTemplate()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x6740);
		}
		static ::System::String** StaticGet_TAMonoTickLodSettingTemplateAssetPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x6748);
		}
		static ::RPG::GameCore::LodConfig** StaticGet__GroupLodConfig()
		{
			return (::RPG::GameCore::LodConfig**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x6750);
		}
		static ::System::String** StaticGet_TSCOverrideLayer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x6758);
		}
		static ::UnityEngine::GameObject** StaticGet_TransformTool()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x6760);
		}
		static ::System::String** StaticGet_HeightBlendTexSuffix()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x6768);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet__RendererList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x6770);
		}
		static ::System::String** StaticGet_FadingTraceTarget()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x6778);
		}
		static ::RPG::GameCore::LodConfig** StaticGet__entityLodConfig()
		{
			return (::RPG::GameCore::LodConfig**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x6780);
		}
		static ::UnityEngine::MaterialPropertyBlock** StaticGet__EmptyMatPropertyBlock()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x6788);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_OpenWorldByteArrayCache()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x6790);
		}
		static ::System::String** StaticGet_GroupNoStreamingTemplateName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x6798);
		}
		static ::System::String** StaticGet_SceneConstValueConfigAssetPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x67A0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet__CachedRendererMats()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x67A8);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Animator*>** StaticGet__AnimatorList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Animator*>**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x67B0);
		}
		static ::System::String** StaticGet_EntityStreamingLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x67B8);
		}
		static ::System::Collections::Generic::Queue_1<::Il2CppArray<::UnityEngine::Vector3>*>** StaticGet__vectorsPool()
		{
			return (::System::Collections::Generic::Queue_1<::Il2CppArray<::UnityEngine::Vector3>*>**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x67C0);
		}
		static ::System::String** StaticGet_NormDistanceLodSettingTemplateAssetPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x67C8);
		}
		static ::System::String** StaticGet_LodSettingTemplateAssetPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x67D0);
		}
		static ::System::Boolean* StaticGet_DEBUG_SKIP_ITEM()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D00);
		}
		static ::System::Boolean* StaticGet_UsingStreamingGrass()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D01);
		}
		static ::System::Boolean* StaticGet_InStageConfigV2Mode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D02);
		}
		static ::System::Boolean* StaticGet_EnableFadingTraceLog()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D03);
		}
		static ::System::Int32* StaticGet_OVERRIDE_STREAMING_SOURCE_LOAD_DELTA_R()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D04);
		}
		static ::System::Int32* StaticGet__ES_HeightMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D08);
		}
		static ::RPG::GameCore::GraphicQuality* StaticGet_CacheLodGraphicQuality()
		{
			return (::RPG::GameCore::GraphicQuality*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D0C);
		}
		static ::System::Single* StaticGet_SchedulerFadingFramingLimitStandard()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D10);
		}
		static ::System::Boolean* StaticGet_EnableTimeoutPromote()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D14);
		}
		static ::System::Boolean* StaticGet_UseBunchItem()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D15);
		}
		static ::System::Boolean* StaticGet_IsBaselineMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D16);
		}
		static ::System::Boolean* StaticGet_EntityStreaming()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D17);
		}
		static ::System::Int32* StaticGet_OVERRIDE_STREAMING_SOURCE_UNLOAD_DELTA_R()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D18);
		}
		static ::System::Single* StaticGet_s_VisionSimilarValue()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D1C);
		}
		static ::System::Single* StaticGet_SchedulerFadingFramingLimitDelta()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D20);
		}
		static ::System::Int32* StaticGet__ES_BlockBboxBase()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D24);
		}
		static ::System::Int32* StaticGet__Block_Bbox_Base()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D28);
		}
		static ::System::Int32* StaticGet_CLOSE_HIZ_TEST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D2C);
		}
		static ::System::Int32* StaticGet__Block_Bbox_Range()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D30);
		}
		static ::System::Int32* StaticGet__Block_Albedo_Height_Map()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D34);
		}
		static ::System::Boolean* StaticGet_ENABLE_ANIMATOR_URO()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D38);
		}
		static ::System::Boolean* StaticGet_IRI_FALLBACK()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D39);
		}
		static ::System::Boolean* StaticGet__StreamingVisibleEnalbe()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D3A);
		}
		static ::System::Boolean* StaticGet_EnableCameraOcculuder()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D3B);
		}
		static ::System::Int32* StaticGet_RegionDecEntityLodQualityRef()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D3C);
		}
		static ::System::Single* StaticGet_SchedulerFadingFramingLimit()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D40);
		}
		static ::System::Single* StaticGet_HLODSwitchDelay()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D44);
		}
		static ::System::Boolean* StaticGet_UsingStreamingInstanceStub()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D48);
		}
		static ::System::Boolean* StaticGet_SpaceFoldHideInvalidItem()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D49);
		}
		static ::System::Boolean* StaticGet_EnableLowTailSweep()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D4A);
		}
		static ::System::Boolean* StaticGet_RegionUpdateBlockVisibleInDisableStreaming()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D4B);
		}
		static ::System::Int32* StaticGet__TerrainCoverageParamsId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D4C);
		}
		static ::System::Single* StaticGet_MainSourceAttachPlayerThresholdDist()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D50);
		}
		static ::System::Int32* StaticGet__Blend_Base_Range()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D54);
		}
		static ::System::Int32* StaticGet__ES_BlockBboxRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D58);
		}
		static ::System::Boolean* StaticGet_SwitchQualityAndReloadPersistent()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D5C);
		}
		static ::System::Boolean* StaticGet_EnableBacklogWatchdog()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D5D);
		}
		static ::System::Boolean* StaticGet_GraphicSettingDirty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D5E);
		}
		static ::System::Boolean* StaticGet_ForbidCityAtmosphereStreaming()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D5F);
		}
		static ::System::UInt32* StaticGet_SUB_STAGE_ISLAND_ID_OFFSET()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D60);
		}
		static ::System::Nullable_1<::RPG::GameCore::GraphicQuality>* StaticGet_CustomEntityLodGraphicQuality()
		{
			return (::System::Nullable_1<::RPG::GameCore::GraphicQuality>*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D64);
		}
		static ::System::Single* StaticGet_OutvisiontToInvisioinLimitDist()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D6C);
		}
		static ::System::Boolean* StaticGet_STREAMING_CHECK_LOADING_TIMEOUT()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D70);
		}
		static ::System::Boolean* StaticGet_RenderDebugLodEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D71);
		}
		static ::System::Boolean* StaticGet_GRASS_FORCE_REFRESH_CULLING_ON_PERFORMANCE()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D72);
		}
		static ::System::Boolean* StaticGet_IRI_FORCE_LOW_GRAPHIC()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D73);
		}
		static ::System::Boolean* StaticGet__StreamingEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D74);
		}
		static ::System::Boolean* StaticGet_EnableStreamingJobSystem()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D75);
		}
		static ::System::Boolean* StaticGet_EnableRegionOverrideMaxPerObjectShadowCount()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D76);
		}
		static ::System::Boolean* StaticGet_StreamingGrassFastMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D77);
		}
		static ::System::Boolean* StaticGet_IRI_CLOSE_UPDATE_HIZ()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D78);
		}
		static ::System::Boolean* StaticGet_RuntimeStreamingEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D79);
		}
		static ::System::Boolean* StaticGet_EnableStreamingVolumeThreadTask()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D7A);
		}
		static ::System::Boolean* StaticGet_StreamingItemUsingObjectPool()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D7B);
		}
		static ::System::Int32* StaticGet__Block_Normal_Detail_Map()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D7C);
		}
		static ::System::Boolean* StaticGet_StreamingDebugScriptOpen()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D80);
		}
		static ::System::Boolean* StaticGet_EnableRenderItemShadowCastingModeBugFix()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D81);
		}
		static ::System::Boolean* StaticGet_UseNewStageCaptureProp()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D82);
		}
		static ::System::Boolean* StaticGet_UseSystemScheduler()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D83);
		}
		static ::System::Boolean* StaticGet__EnableUsingSyncLoad()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D84);
		}
		static ::System::Boolean* StaticGet_EnableSceneItemHLOD()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D85);
		}
		static ::System::Boolean* StaticGet_UseLodShakeThreshold()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D86);
		}
		static ::System::Boolean* StaticGet_PVS_USE_BINARY_DATA()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D87);
		}
		static ::System::Boolean* StaticGet_EnableImmediateFinishResolver()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D88);
		}
		static ::System::Boolean* StaticGet_LOW_IPHONE_STREAMING_FEATURE()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D89);
		}
		static ::System::Boolean* StaticGet_ForbidInstantiatePrefabWhenUseBunchItem()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D8A);
		}
		static ::System::Boolean* StaticGet_EnableVolumeHLODHide()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D8B);
		}
		static ::System::Boolean* StaticGet_EnableMaintenanceSweep()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D8C);
		}
		static ::System::Boolean* StaticGet_UseLodCulling()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D8D);
		}
		static ::System::Boolean* StaticGet_FORCE_DRAW_IRI()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D8E);
		}
		static ::System::Boolean* StaticGet_IRI_USE_BINARY_DATA()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D8F);
		}
		static ::System::Nullable_1<::RPG::GameCore::GraphicQuality>* StaticGet_CustomLodGraphicQuality()
		{
			return (::System::Nullable_1<::RPG::GameCore::GraphicQuality>*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D90);
		}
		static ::System::Boolean* StaticGet_EnableGrass()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D98);
		}
		static ::System::Boolean* StaticGet_LevelEditorStageStreaming()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D99);
		}
		static ::System::Int32* StaticGet__RegionOverrideMaxPerObjectShadowCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1D9C);
		}
		static ::System::Boolean* StaticGet_UsePriorityScheduler()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1DA0);
		}
		static ::System::Boolean* StaticGet_UseStageConfigV2()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1DA1);
		}
		static ::System::Boolean* StaticGet_RadicalCulling()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1DA2);
		}
		static ::System::Boolean* StaticGet_COLLIDER_STREAMING_DEBUG()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1DA3);
		}
		static ::System::Single* StaticGet_s_CenterSimilarValue()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1DA4);
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

		static ::System::Void ReturnVector3s(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RETURNVECTOR3S_OFFSET))(a1);
		}

		static ::System::Boolean CheckStreamingRectSimilar(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CHECKSTREAMINGRECTSIMILAR_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Bounds LocalSpaceBoundToFieldSpaceBound(::UnityEngine::Transform* a1, ::UnityEngine::Bounds a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Transform*, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Bounds LocalSpaceBoundToFieldSpaceBound_1(::UnityEngine::Transform* a1, ::UnityEngine::Bounds a2, ::UnityEngine::Transform* a3)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Transform*, ::UnityEngine::Bounds, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_1_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Bounds LocalSpaceBoundToFieldSpaceBound_2(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Bounds a2)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_2_OFFSET))(a1, a2);
		}

		static ::RPG::Client::OpenWorld::StreamingLayerSetting* get_StreamingLayerSetting()
		{
			return ((::RPG::Client::OpenWorld::StreamingLayerSetting*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGLAYERSETTING_OFFSET))();
		}

		static ::UnityEngine::Rect CreateRectByCenterAndSize(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CREATERECTBYCENTERANDSIZE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rect BoundsProjectToXZPlane(::UnityEngine::Bounds a1)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_BOUNDSPROJECTTOXZPLANE_OFFSET))(a1);
		}

		static ::System::Boolean RectContain(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RECTCONTAIN_OFFSET))(a1, a2);
		}

		static ::System::Boolean RectOverlay(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RECTOVERLAY_OFFSET))(a1, a2);
		}

		static ::System::Boolean BoundsContain(::UnityEngine::Bounds a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_BOUNDSCONTAIN_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Color TreeDepthToColor(::System::Int32 a1)
		{
			return ((::UnityEngine::Color(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_TREEDEPTHTOCOLOR_OFFSET))(a1);
		}

		static ::System::Void GizmoDrawRect(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GIZMODRAWRECT_OFFSET))(a1);
		}

		static ::System::Void StreamingDestroyInstance(::UnityEngine::GameObject* a1, ::Class_2_250DE1D032671F25* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::UInt32>* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::Class_2_250DE1D032671F25*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::UInt32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_STREAMINGDESTROYINSTANCE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void CopyAnimator(::UnityEngine::Animator* a1, ::UnityEngine::Animator* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::Animator*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_COPYANIMATOR_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Bounds TransformMeshBound(::RPG::GameCore::BlockNodeConfig* a1, ::RPG::GameCore::MeshBound* a2)
		{
			return ((::UnityEngine::Bounds(*)(::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::MeshBound*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_TRANSFORMMESHBOUND_OFFSET))(a1, a2);
		}

		static ::System::Void AdjustTransform(::RPG::GameCore::BlockNodeConfig* a1, ::Struct_2_CC45B4503679E14E_5 a2, ::UnityEngine::GameObject* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::BlockNodeConfig*, ::Struct_2_CC45B4503679E14E_5, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void AdjustTransform_1(::RPG::GameCore::BlockNodeConfig* a1, ::Struct_2_A77148D52D516E55 a2, ::UnityEngine::GameObject* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::BlockNodeConfig*, ::Struct_2_A77148D52D516E55, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GetStreamingItemTransform(::RPG::GameCore::BlockNodeConfig* a1, ::Struct_2_CC45B4503679E14E_5 a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::BlockNodeConfig*, ::Struct_2_CC45B4503679E14E_5, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GetStreamingItemTransform_1(::RPG::GameCore::BlockNodeConfig* a1, ::Struct_2_A77148D52D516E55 a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::BlockNodeConfig*, ::Struct_2_A77148D52D516E55, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GetStreamingItemTransform_2(::RPG::GameCore::BlockNodeConfig* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3& a5, ::UnityEngine::Vector3& a6)
		{
			return ((::System::Void(*)(::RPG::GameCore::BlockNodeConfig*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void GetStreamingItemTransform_3(::Struct_2_CC45B4503679E14E_5 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3& a5, ::UnityEngine::Vector3& a6)
		{
			return ((::System::Void(*)(::Struct_2_CC45B4503679E14E_5, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_3_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void GetStreamingItemTransform_4(::Struct_2_A77148D52D516E55 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3& a5, ::UnityEngine::Vector3& a6)
		{
			return ((::System::Void(*)(::Struct_2_A77148D52D516E55, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_4_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::Matrix4x4 AdjustTransform_2(::RPG::GameCore::BlockNodeConfig* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::UnityEngine::Matrix4x4(*)(::RPG::GameCore::BlockNodeConfig*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void AdjustTransform_3(::RPG::GameCore::BlockNodeConfig* a1, ::Class_1_64EA8B4AB59D91C7* a2, ::UnityEngine::GameObject* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::BlockNodeConfig*, ::Class_1_64EA8B4AB59D91C7*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void AdjustTransform_4(::Struct_2_CC45B4503679E14E_5 a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::Struct_2_CC45B4503679E14E_5, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_4_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void AdjustTransform_5(::Struct_2_A77148D52D516E55 a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::Struct_2_A77148D52D516E55, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_5_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void AdjustTransform_6(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_6_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void AdjustTransform_7(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_7_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void AdjustTransformInWorldSpace(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORMINWORLDSPACE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* GetSubStageDir(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSUBSTAGEDIR_OFFSET))(a1, a2);
		}

		static ::System::String* GetSubStageJsonPath(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSUBSTAGEJSONPATH_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetStageJsonPath(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTAGEJSONPATH_OFFSET))(a1, a2);
		}

		static ::System::String* GameObjectHierarchyPath(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GAMEOBJECTHIERARCHYPATH_OFFSET))(a1, a2);
		}

		static ::System::Single ProjectPoint(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_PROJECTPOINT_OFFSET))(a1, a2);
		}

		static ::System::Void EnableKeyword(::UnityEngine::Renderer* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ENABLEKEYWORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetHeightBlend(::Class_1_D70A30D666F20D90* a1, ::Class_1_53BE720C46D20BF8* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Class_1_53BE720C46D20BF8*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETHEIGHTBLEND_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean ReplaceLodConfigLayer(::System::String* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_REPLACELODCONFIGLAYER_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_TSCSPRoomCache()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_TSCSPROOMCACHE_OFFSET))();
		}

		static ::System::Boolean get_TSCRoomCache()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_TSCROOMCACHE_OFFSET))();
		}

		static ::System::Void SetTerrainTex(::Class_1_D70A30D666F20D90* a1, ::Class_1_53BE720C46D20BF8* a2, ::Struct_2_CC45B4503679E14E_5 a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Class_1_53BE720C46D20BF8*, ::Struct_2_CC45B4503679E14E_5, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETTERRAINTEX_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetTerrainTex_1(::Class_1_D70A30D666F20D90* a1, ::Class_1_53BE720C46D20BF8* a2, ::Struct_2_A77148D52D516E55 a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Class_1_53BE720C46D20BF8*, ::Struct_2_A77148D52D516E55, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETTERRAINTEX_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 GetMinLODLevel(::RPG::GameCore::LodTemplate* a1, ::System::Int32 a2, ::RPG::GameCore::GraphicQuality a3)
		{
			return ((::System::Int32(*)(::RPG::GameCore::LodTemplate*, ::System::Int32, ::RPG::GameCore::GraphicQuality))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETMINLODLEVEL_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetLODLevelByDistance(::System::Single a1, ::RPG::GameCore::LodTemplate* a2, ::System::Int32 a3, ::RPG::GameCore::GraphicQuality a4)
		{
			return ((::System::Int32(*)(::System::Single, ::RPG::GameCore::LodTemplate*, ::System::Int32, ::RPG::GameCore::GraphicQuality))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETLODLEVELBYDISTANCE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void AddTAMonoTickEntry(::Class_1_D70A30D666F20D90* a1, ::UnityEngine::GameObject* a2, ::Class_0_16E4307DCC419505_1064* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::UnityEngine::GameObject*, ::Class_0_16E4307DCC419505_1064*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADDTAMONOTICKENTRY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void RemoveTAMonoTickEntry(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_REMOVETAMONOTICKENTRY_OFFSET))(a1);
		}

		static ::System::Single CalcBoundSize(::UnityEngine::Bounds a1)
		{
			return ((::System::Single(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CALCBOUNDSIZE_OFFSET))(a1);
		}

		static ::System::Single RuntimeCalcBoundSize(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Single(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RUNTIMECALCBOUNDSIZE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsColliderGO(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ISCOLLIDERGO_OFFSET))(a1, a2);
		}

		static ::Class_1_76597B0FC8DCAD88* SetBlockGrass(::UnityEngine::GameObject* a1, ::UnityEngine::RPGPointCloudGrassBlockData* a2, ::RPG::GameCore::LodConfig* a3, ::RPG::GameCore::StageLodMapConfig* a4)
		{
			return ((::Class_1_76597B0FC8DCAD88*(*)(::UnityEngine::GameObject*, ::UnityEngine::RPGPointCloudGrassBlockData*, ::RPG::GameCore::LodConfig*, ::RPG::GameCore::StageLodMapConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETBLOCKGRASS_OFFSET))(a1, a2, a3, a4);
		}

		static ::Class_1_76597B0FC8DCAD88* SetBlockGrass_1(::UnityEngine::GameObject* a1, ::UnityEngine::RPGDensityMapGrassBlockData* a2, ::RPG::GameCore::LodConfig* a3, ::RPG::GameCore::StageLodMapConfig* a4)
		{
			return ((::Class_1_76597B0FC8DCAD88*(*)(::UnityEngine::GameObject*, ::UnityEngine::RPGDensityMapGrassBlockData*, ::RPG::GameCore::LodConfig*, ::RPG::GameCore::StageLodMapConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETBLOCKGRASS_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetStreamingGrassFastMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETSTREAMINGGRASSFASTMODE_OFFSET))(a1);
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

		static ::Struct_2_CC45B4503679E14E GetIRIBuildingRendererListWithConfigDataPool(::System::String* a1, ::System::Action_2<::Struct_2_CC45B4503679E14E, ::System::Object*>* a2, ::System::Object* a3)
		{
			return ((::Struct_2_CC45B4503679E14E(*)(::System::String*, ::System::Action_2<::Struct_2_CC45B4503679E14E, ::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETIRIBUILDINGRENDERERLISTWITHCONFIGDATAPOOL_OFFSET))(a1, a2, a3);
		}

		static ::Struct_2_CC45B4503679E14E GetIRIBuildingRendererListWithTextAsset(::UnityEngine::TextAsset* a1)
		{
			return ((::Struct_2_CC45B4503679E14E(*)(::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETIRIBUILDINGRENDERERLISTWITHTEXTASSET_OFFSET))(a1);
		}

		static ::System::Boolean get_StreamingEnable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGENABLE_OFFSET))();
		}

		static ::System::Void set_StreamingEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_STREAMINGENABLE_OFFSET))(a1);
		}

		static ::System::Boolean get_StreamingVisibleEnable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGVISIBLEENABLE_OFFSET))();
		}

		static ::System::Void set_StreamingVisibleEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_STREAMINGVISIBLEENABLE_OFFSET))(a1);
		}

		static ::System::Boolean get_EnableUsingSyncLoad()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENABLEUSINGSYNCLOAD_OFFSET))();
		}

		static ::System::Void set_EnableUsingSyncLoad(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_ENABLEUSINGSYNCLOAD_OFFSET))(a1);
		}

		static ::System::Boolean get_AsyncLoadPersistentAsset()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ASYNCLOADPERSISTENTASSET_OFFSET))();
		}

		static ::System::Boolean get_EnableTAMonoTickLogError()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENABLETAMONOTICKLOGERROR_OFFSET))();
		}

		static ::System::Void set_EnableTAMonoTickLogError(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_ENABLETAMONOTICKLOGERROR_OFFSET))(a1);
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

		static ::System::Void set_RegionOverrideMaxPerObjectShadowCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_REGIONOVERRIDEMAXPEROBJECTSHADOWCOUNT_OFFSET))(a1);
		}
	};
}
