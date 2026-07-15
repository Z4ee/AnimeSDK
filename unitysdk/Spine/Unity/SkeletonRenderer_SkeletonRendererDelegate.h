#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine::Unity { class SkeletonRenderer; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_UNITY_SKELETONRENDERER_SKELETONRENDERERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x168C8A90)
#define SPINE_UNITY_SKELETONRENDERER_SKELETONRENDERERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x168C8AC0)
#define SPINE_UNITY_SKELETONRENDERER_SKELETONRENDERERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x168C6900)
#define SPINE_UNITY_SKELETONRENDERER_SKELETONRENDERERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x168C89A0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRenderer_SkeletonRendererDelegate_TypeDefinitionIndex = 42245;

	class SkeletonRenderer_SkeletonRendererDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SKELETONRENDERERDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Spine::Unity::SkeletonRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRenderer*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SKELETONRENDERERDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::SkeletonRenderer* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::Unity::SkeletonRenderer*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SKELETONRENDERERDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SKELETONRENDERERDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
