#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine::Unity { class SkeletonPartsRenderer; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_UNITY_SKELETONPARTSRENDERER_SKELETONPARTSRENDERERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x183326E0)
#define SPINE_UNITY_SKELETONPARTSRENDERER_SKELETONPARTSRENDERERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18332710)
#define SPINE_UNITY_SKELETONPARTSRENDERER_SKELETONPARTSRENDERERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x183322F0)
#define SPINE_UNITY_SKELETONPARTSRENDERER_SKELETONPARTSRENDERERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x183325F0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonPartsRenderer_SkeletonPartsRendererDelegate_TypeDefinitionIndex = 43851;

	class SkeletonPartsRenderer_SkeletonPartsRendererDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_SKELETONPARTSRENDERERDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Spine::Unity::SkeletonPartsRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonPartsRenderer*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_SKELETONPARTSRENDERERDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::SkeletonPartsRenderer* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::Unity::SkeletonPartsRenderer*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_SKELETONPARTSRENDERERDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_SKELETONPARTSRENDERERDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
