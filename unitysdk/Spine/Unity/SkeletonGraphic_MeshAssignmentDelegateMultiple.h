#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture; }

#define SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATEMULTIPLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E653850)
#define SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATEMULTIPLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E6538E0)
#define SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATEMULTIPLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E653230)
#define SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATEMULTIPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6537E0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonGraphic_MeshAssignmentDelegateMultiple_TypeDefinitionIndex = 43838;

	class SkeletonGraphic_MeshAssignmentDelegateMultiple : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATEMULTIPLE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Mesh*>* a2, ::Il2CppArray<::UnityEngine::Material*>* a3, ::Il2CppArray<::UnityEngine::Texture*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Mesh*>*, ::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Texture*>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATEMULTIPLE_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Mesh*>* a2, ::Il2CppArray<::UnityEngine::Material*>* a3, ::Il2CppArray<::UnityEngine::Texture*>* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Mesh*>*, ::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Texture*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATEMULTIPLE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATEMULTIPLE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
