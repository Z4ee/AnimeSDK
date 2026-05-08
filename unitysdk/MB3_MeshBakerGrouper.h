#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MB3_MeshBakerGrouper_ClusterType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MB3_MeshBakerCommon;
namespace DigitalOpus::MB::Core { class GrouperData; }
namespace DigitalOpus::MB::Core { class MB3_MeshBakerGrouperBehaviour; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSettings; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSettingsData; }
namespace DigitalOpus::MB::Core { class MB_IMeshBakerSettings; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define MB3_MESHBAKERGROUPER_CREATEGROUPER_OFFSET UNITYSDK_OFFSET(0x1BE09310)
#define MB3_MESHBAKERGROUPER_DELETEALLCHILDMESHBAKERS_OFFSET UNITYSDK_OFFSET(0x1BE093A0)
#define MB3_MESHBAKERGROUPER_GENERATEMESHBAKERS_OFFSET UNITYSDK_OFFSET(0x1BE094F0)
#define MB3_MESHBAKERGROUPER_GETMESHBAKERSETTINGSASSERIALIZEDPROPERTY_OFFSET UNITYSDK_OFFSET(0x1BE090B0)
#define MB3_MESHBAKERGROUPER_GETMESHBAKERSETTINGS_OFFSET UNITYSDK_OFFSET(0x1BE08F30)
#define MB3_MESHBAKERGROUPER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1BE09210)
#define MB3_MESHBAKERGROUPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE0A080)
#define MB3_MESHBAKERGROUPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE09FC0)

inline static constexpr unsigned int MB3_MeshBakerGrouper_TypeDefinitionIndex = 84968;

class MB3_MeshBakerGrouper : public ::UnityEngine::MonoBehaviour
{
public:
	static ::UnityEngine::Color* StaticGet_WHITE_TRANSP()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(MB3_MeshBakerGrouper_TypeDefinitionIndex)->GetStaticField(0x11DF0);
	}
	::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour* grouper; // 0x18
	::MB3_MeshBakerGrouper_ClusterType clusterType; // 0x20
	::UnityEngine::Transform* parentSceneObject; // 0x28
	::DigitalOpus::MB::Core::GrouperData* data; // 0x30
	::UnityEngine::Bounds sourceObjectBounds; // 0x38
	::System::String* prefabOptions_outputFolder; // 0x50
	::System::Boolean prefabOptions_autoGeneratePrefabs; // 0x58
	::System::Boolean prefabOptions_mergeOutputIntoSinglePrefab; // 0x59
	::DigitalOpus::MB::Core::MB3_MeshCombinerSettings* meshBakerSettingsAsset; // 0x60
	::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData* meshBakerSettings; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERGROUPER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MB3_MESHBAKERGROUPER__CCTOR_OFFSET))();
	}

	::DigitalOpus::MB::Core::MB_IMeshBakerSettings* GetMeshBakerSettings()
	{
		return ((::DigitalOpus::MB::Core::MB_IMeshBakerSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERGROUPER_GETMESHBAKERSETTINGS_OFFSET))(this);
	}

	::System::Void GetMeshBakerSettingsAsSerializedProperty(::System::String*& propertyName, ::UnityEngine::Object*& targetObj)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*&, ::UnityEngine::Object*&))((::PBYTE)hIl2Cpp + MB3_MESHBAKERGROUPER_GETMESHBAKERSETTINGSASSERIALIZEDPROPERTY_OFFSET))(this, propertyName, targetObj);
	}

	::System::Void OnDrawGizmosSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERGROUPER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
	}

	::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour* CreateGrouper(::MB3_MeshBakerGrouper_ClusterType t)
	{
		return ((::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*(*)(::PVOID, ::MB3_MeshBakerGrouper_ClusterType))((::PBYTE)hIl2Cpp + MB3_MESHBAKERGROUPER_CREATEGROUPER_OFFSET))(this, t);
	}

	::System::Void DeleteAllChildMeshBakers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERGROUPER_DELETEALLCHILDMESHBAKERS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MB3_MeshBakerCommon*>* GenerateMeshBakers()
	{
		return ((::System::Collections::Generic::List_1<::MB3_MeshBakerCommon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERGROUPER_GENERATEMESHBAKERS_OFFSET))(this);
	}
};
