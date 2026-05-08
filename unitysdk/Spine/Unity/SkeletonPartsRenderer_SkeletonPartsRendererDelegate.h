#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine::Unity { class SkeletonPartsRenderer; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_UNITY_SKELETONPARTSRENDERER_SKELETONPARTSRENDERERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18B60F60)
#define SPINE_UNITY_SKELETONPARTSRENDERER_SKELETONPARTSRENDERERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18B60F90)
#define SPINE_UNITY_SKELETONPARTSRENDERER_SKELETONPARTSRENDERERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18B605E0)
#define SPINE_UNITY_SKELETONPARTSRENDERER_SKELETONPARTSRENDERERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B60F50)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonPartsRenderer_SkeletonPartsRendererDelegate_TypeDefinitionIndex = 37840;

	class SkeletonPartsRenderer_SkeletonPartsRendererDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_SKELETONPARTSRENDERERDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Spine::Unity::SkeletonPartsRenderer* skeletonPartsRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonPartsRenderer*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_SKELETONPARTSRENDERERDELEGATE_INVOKE_OFFSET))(this, skeletonPartsRenderer);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::SkeletonPartsRenderer* skeletonPartsRenderer, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::Unity::SkeletonPartsRenderer*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_SKELETONPARTSRENDERERDELEGATE_BEGININVOKE_OFFSET))(this, skeletonPartsRenderer, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_SKELETONPARTSRENDERERDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
