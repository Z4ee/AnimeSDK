#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture; }

#define SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATEMULTIPLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18416030)
#define SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATEMULTIPLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x184160C0)
#define SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATEMULTIPLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18415790)
#define SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATEMULTIPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18416010)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonGraphic_MeshAssignmentDelegateMultiple_TypeDefinitionIndex = 34766;

	class SkeletonGraphic_MeshAssignmentDelegateMultiple : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATEMULTIPLE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 meshCount, ::Il2CppArray<::UnityEngine::Mesh*>* meshes, ::Il2CppArray<::UnityEngine::Material*>* graphicMaterials, ::Il2CppArray<::UnityEngine::Texture*>* textures)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Mesh*>*, ::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Texture*>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATEMULTIPLE_INVOKE_OFFSET))(this, meshCount, meshes, graphicMaterials, textures);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 meshCount, ::Il2CppArray<::UnityEngine::Mesh*>* meshes, ::Il2CppArray<::UnityEngine::Material*>* graphicMaterials, ::Il2CppArray<::UnityEngine::Texture*>* textures, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Mesh*>*, ::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Texture*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATEMULTIPLE_BEGININVOKE_OFFSET))(this, meshCount, meshes, graphicMaterials, textures, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATEMULTIPLE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
