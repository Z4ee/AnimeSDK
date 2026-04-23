#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine::Unity { class SkeletonRenderer; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_UNITY_SKELETONRENDERER_SKELETONRENDERERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19E5E140)
#define SPINE_UNITY_SKELETONRENDERER_SKELETONRENDERERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19E5E170)
#define SPINE_UNITY_SKELETONRENDERER_SKELETONRENDERERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19E5B990)
#define SPINE_UNITY_SKELETONRENDERER_SKELETONRENDERERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E356B0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRenderer_SkeletonRendererDelegate_TypeDefinitionIndex = 40603;

	class SkeletonRenderer_SkeletonRendererDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SKELETONRENDERERDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Spine::Unity::SkeletonRenderer* skeletonRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRenderer*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SKELETONRENDERERDELEGATE_INVOKE_OFFSET))(this, skeletonRenderer);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::SkeletonRenderer* skeletonRenderer, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::Unity::SkeletonRenderer*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SKELETONRENDERERDELEGATE_BEGININVOKE_OFFSET))(this, skeletonRenderer, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SKELETONRENDERERDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
