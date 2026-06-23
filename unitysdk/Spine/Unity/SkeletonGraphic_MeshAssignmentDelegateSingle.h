#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture; }

#define SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATESINGLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AD33730)
#define SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATESINGLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AD33770)
#define SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATESINGLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AD325D0)
#define SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATESINGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD33710)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonGraphic_MeshAssignmentDelegateSingle_TypeDefinitionIndex = 39456;

	class SkeletonGraphic_MeshAssignmentDelegateSingle : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATESINGLE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Mesh* mesh, ::UnityEngine::Material* graphicMaterial, ::UnityEngine::Texture* texture)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Material*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATESINGLE_INVOKE_OFFSET))(this, mesh, graphicMaterial, texture);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Mesh* mesh, ::UnityEngine::Material* graphicMaterial, ::UnityEngine::Texture* texture, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Material*, ::UnityEngine::Texture*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATESINGLE_BEGININVOKE_OFFSET))(this, mesh, graphicMaterial, texture, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MESHASSIGNMENTDELEGATESINGLE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
