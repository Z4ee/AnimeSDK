#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture; }

#define SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATESINGLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x168BC160)
#define SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATESINGLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x168BC1A0)
#define SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATESINGLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x168BBA30)
#define SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATESINGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x168BC0E0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonGraphic_MeshAssignmentDelegateSingle_TypeDefinitionIndex = 42226;

	class SkeletonGraphic_MeshAssignmentDelegateSingle : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATESINGLE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::Mesh* a1, ::UnityEngine::Material* a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Material*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATESINGLE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Mesh* a1, ::UnityEngine::Material* a2, ::UnityEngine::Texture* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Material*, ::UnityEngine::Texture*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATESINGLE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATESINGLE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
