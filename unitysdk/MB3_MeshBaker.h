#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MB3_MeshBakerCommon.h"

namespace DigitalOpus::MB::Core { class MB3_MeshCombiner; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle; }
namespace UnityEngine { class GameObject; }

#define MB3_MESHBAKER_ADDDELETEGAMEOBJECTSBYID_OFFSET UNITYSDK_OFFSET(0x1B670B80)
#define MB3_MESHBAKER_ADDDELETEGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1B670A50)
#define MB3_MESHBAKER_APPLYSHOWHIDE_OFFSET UNITYSDK_OFFSET(0x1B670A20)
#define MB3_MESHBAKER_BUILDSCENEMESHOBJECT_OFFSET UNITYSDK_OFFSET(0x1B6709D0)
#define MB3_MESHBAKER_GET_MESHCOMBINER_OFFSET UNITYSDK_OFFSET(0x1B6709C0)
#define MB3_MESHBAKER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B670CB0)
#define MB3_MESHBAKER_PRINTTIMINGS_OFFSET UNITYSDK_OFFSET(0x1B66FCF0)
#define MB3_MESHBAKER_SHOWHIDE_OFFSET UNITYSDK_OFFSET(0x1B670A00)
#define MB3_MESHBAKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B670CD0)

inline static constexpr unsigned int MB3_MeshBaker_TypeDefinitionIndex = 84965;

class MB3_MeshBaker : public ::MB3_MeshBakerCommon
{
public:
	::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* _meshCombiner; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKER__CTOR_OFFSET))(this);
	}

	::System::Void PrintTimings()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKER_PRINTTIMINGS_OFFSET))(this);
	}

	::DigitalOpus::MB::Core::MB3_MeshCombiner* get_meshCombiner()
	{
		return ((::DigitalOpus::MB::Core::MB3_MeshCombiner*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKER_GET_MESHCOMBINER_OFFSET))(this);
	}

	::System::Void BuildSceneMeshObject()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKER_BUILDSCENEMESHOBJECT_OFFSET))(this);
	}

	::System::Boolean ShowHide(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::Il2CppArray<::UnityEngine::GameObject*>* deleteGOs)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MB3_MESHBAKER_SHOWHIDE_OFFSET))(this, gos, deleteGOs);
	}

	::System::Void ApplyShowHide()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKER_APPLYSHOWHIDE_OFFSET))(this);
	}

	::System::Boolean AddDeleteGameObjects(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::Il2CppArray<::UnityEngine::GameObject*>* deleteGOs, ::System::Boolean disableRendererInSource)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::Il2CppArray<::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MB3_MESHBAKER_ADDDELETEGAMEOBJECTS_OFFSET))(this, gos, deleteGOs, disableRendererInSource);
	}

	::System::Boolean AddDeleteGameObjectsByID(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::Il2CppArray<::System::Int32>* deleteGOinstanceIDs, ::System::Boolean disableRendererInSource)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MB3_MESHBAKER_ADDDELETEGAMEOBJECTSBYID_OFFSET))(this, gos, deleteGOinstanceIDs, disableRendererInSource);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKER_ONDESTROY_OFFSET))(this);
	}
};
