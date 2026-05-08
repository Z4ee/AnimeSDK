#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_COMBINEDMESH_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1BAFE030)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_COMBINEDMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAFDED0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MultiMeshCombiner_CombinedMesh_TypeDefinitionIndex = 85076;

	class MB3_MultiMeshCombiner_CombinedMesh : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* combinedMesh; // 0x10
		::System::Int32 extraSpace; // 0x18
		::System::Int32 numVertsInListToDelete; // 0x1C
		::System::Int32 numVertsInListToAdd; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* gosToAdd; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* gosToDelete; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* gosToUpdate; // 0x38
		::System::Boolean isDirty; // 0x40

		::System::Void _ctor(::System::Int32 maxNumVertsInMesh, ::UnityEngine::GameObject* resultSceneObject, ::DigitalOpus::MB::Core::MB2_LogLevel ll)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_COMBINEDMESH__CTOR_OFFSET))(this, maxNumVertsInMesh, resultSceneObject, ll);
		}

		::System::Boolean isEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_COMBINEDMESH_ISEMPTY_OFFSET))(this);
		}
	};
}
