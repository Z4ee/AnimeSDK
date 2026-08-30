#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_0_16E4307DCC419505_1028_ERenderInstanceCollectMode.h"
#include "unitysdk/RPG/Client/DeformSourceMode.h"
#include "unitysdk/RPG/Client/InstanceArrayConfigJsonSyncMode.h"
#include "unitysdk/RPG/Client/InstanceArrayWorkMode.h"
#include "unitysdk/RPG/Client/Scene_InstanceArrayMonoPlugin_ExternalTransformInput.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/Struct_2_B3CFB45E7E960210.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Scene_InstanceArrayBehavior; }
namespace RPG::Client { class Scene_InstanceArrayMonoPlugin_IndexedMaterial; }
namespace RPG::Client { class Scene_InstanceArrayMonoPlugin_IndexedMesh; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_CLEAREXTERNALTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1AF65AF0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x1AF66750)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_ARTBOUNDFULL_OFFSET UNITYSDK_OFFSET(0x1AF669B0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_ARTBOUND_OFFSET UNITYSDK_OFFSET(0x1AF66900)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_CONFIGSAVENAME_OFFSET UNITYSDK_OFFSET(0x1AF667B0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_ISBAKEDATACONTAINERMODE_OFFSET UNITYSDK_OFFSET(0x1AF5D1C0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_ISINSTANCEARRAYRENDERINGMODE_OFFSET UNITYSDK_OFFSET(0x1AF66740)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_RENDERBUDGETDATA_OFFSET UNITYSDK_OFFSET(0x1AF66D40)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_RENDERINSTANCECOLLECTMODE_OFFSET UNITYSDK_OFFSET(0x1AF676B0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_HASANYEXTERNALTRANSFORMINPUT_OFFSET UNITYSDK_OFFSET(0x1AF60100)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_HASHOVERBRIDGEDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x1AF60160)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_PRUNEEXTERNALTRANSFORMSBYFRAMEAGE_OFFSET UNITYSDK_OFFSET(0x1AF65EF0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_REMOVEEXTERNALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1AF657C0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_SETEXTERNALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1AF64FA0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_TRYGETEXTERNALELEMENTWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1AF60980)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF676C0)

namespace RPG::Client
{
	inline static constexpr unsigned int Scene_InstanceArrayMonoPlugin_TypeDefinitionIndex = 70819;

	class Scene_InstanceArrayMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Scene_InstanceArrayBehavior*>
	{
	public:
		// static const ::System::String* JHBGKECJDKG; // 0x0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::Scene_InstanceArrayMonoPlugin_ExternalTransformInput>*>* NKIPBCPAFCH; // 0x30
		::System::Int64 EEHENJIKGOK; // 0x38
		::RPG::Client::InstanceArrayWorkMode WorkMode; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::Scene_InstanceArrayMonoPlugin_IndexedMaterial*>* Materials; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::Scene_InstanceArrayMonoPlugin_IndexedMesh*>* Meshes; // 0x50
		::System::Boolean DynamicTransform; // 0x58
		::System::Boolean AnimationDriven; // 0x59
		::System::Boolean PolymerBridge; // 0x5A
		::RPG::Client::DeformSourceMode DeformSource; // 0x5C
		::System::String* ConfigWorldIndex; // 0x60
		::System::String* ConfigSceneCode; // 0x68
		::System::String* ConfigAssetName; // 0x70
		::UnityEngine::TextAsset* ConfigJsonAsset; // 0x78
		::RPG::Client::InstanceArrayConfigJsonSyncMode ConfigJsonSyncMode; // 0x80
		::System::String* LEJJFMLOGGH; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void SetExternalTransform(::UnityEngine::Transform* a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Vector3 a3, ::System::Int32 a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_SETEXTERNALTRANSFORM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void RemoveExternalTransform(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_REMOVEEXTERNALTRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Void ClearExternalTransforms(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_CLEAREXTERNALTRANSFORMS_OFFSET))(this, a1);
		}

		::System::Void PruneExternalTransformsByFrameAge(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_PRUNEEXTERNALTRANSFORMSBYFRAMEAGE_OFFSET))(this, a1);
		}

		::System::Boolean TryGetExternalElementWorldTransform(::UnityEngine::Transform* a1, ::UnityEngine::Matrix4x4& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Matrix4x4&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_TRYGETEXTERNALELEMENTWORLDTRANSFORM_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HasAnyExternalTransformInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_HASANYEXTERNALTRANSFORMINPUT_OFFSET))(this);
		}

		::System::Boolean HasHoverBridgeDependency()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_HASHOVERBRIDGEDEPENDENCY_OFFSET))(this);
		}

		::System::Boolean get_IsBakeDataContainerMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_ISBAKEDATACONTAINERMODE_OFFSET))(this);
		}

		::System::Boolean get_IsInstanceArrayRenderingMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_ISINSTANCEARRAYRENDERINGMODE_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* get_ConfigSaveName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_CONFIGSAVENAME_OFFSET))(this);
		}

		::System::Single get_ArtBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_ARTBOUND_OFFSET))(this);
		}

		::UnityEngine::Bounds get_ArtBoundFull()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_ARTBOUNDFULL_OFFSET))(this);
		}

		::Struct_2_B3CFB45E7E960210 get_RenderBudgetData()
		{
			return ((::Struct_2_B3CFB45E7E960210(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_RENDERBUDGETDATA_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1028_ERenderInstanceCollectMode get_RenderInstanceCollectMode()
		{
			return ((::Class_0_16E4307DCC419505_1028_ERenderInstanceCollectMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_RENDERINSTANCECOLLECTMODE_OFFSET))(this);
		}
	};
}
