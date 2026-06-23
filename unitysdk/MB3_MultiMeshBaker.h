#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MB3_MeshBakerCommon.h"

namespace DigitalOpus::MB::Core { class MB3_MeshCombiner; }
namespace DigitalOpus::MB::Core { class MB3_MultiMeshCombiner; }
namespace UnityEngine { class GameObject; }

#define MB3_MULTIMESHBAKER_ADDDELETEGAMEOBJECTSBYID_OFFSET UNITYSDK_OFFSET(0x1D954340)
#define MB3_MULTIMESHBAKER_ADDDELETEGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1D954020)
#define MB3_MULTIMESHBAKER_GET_MESHCOMBINER_OFFSET UNITYSDK_OFFSET(0x1D954010)
#define MB3_MULTIMESHBAKER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D954660)
#define MB3_MULTIMESHBAKER_PRINTTIMINGS_OFFSET UNITYSDK_OFFSET(0x1D9534A0)
#define MB3_MULTIMESHBAKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D954680)

inline static constexpr unsigned int MB3_MultiMeshBaker_TypeDefinitionIndex = 90548;

class MB3_MultiMeshBaker : public ::MB3_MeshBakerCommon
{
public:
	::DigitalOpus::MB::Core::MB3_MultiMeshCombiner* _meshCombiner; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MULTIMESHBAKER__CTOR_OFFSET))(this);
	}

	::System::Void PrintTimings()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MULTIMESHBAKER_PRINTTIMINGS_OFFSET))(this);
	}

	::DigitalOpus::MB::Core::MB3_MeshCombiner* get_meshCombiner()
	{
		return ((::DigitalOpus::MB::Core::MB3_MeshCombiner*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MULTIMESHBAKER_GET_MESHCOMBINER_OFFSET))(this);
	}

	::System::Boolean AddDeleteGameObjects(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::Il2CppArray<::UnityEngine::GameObject*>* deleteGOs, ::System::Boolean disableRendererInSource)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::Il2CppArray<::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MB3_MULTIMESHBAKER_ADDDELETEGAMEOBJECTS_OFFSET))(this, gos, deleteGOs, disableRendererInSource);
	}

	::System::Boolean AddDeleteGameObjectsByID(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::Il2CppArray<::System::Int32>* deleteGOs, ::System::Boolean disableRendererInSource)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MB3_MULTIMESHBAKER_ADDDELETEGAMEOBJECTSBYID_OFFSET))(this, gos, deleteGOs, disableRendererInSource);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MULTIMESHBAKER_ONDESTROY_OFFSET))(this);
	}
};
