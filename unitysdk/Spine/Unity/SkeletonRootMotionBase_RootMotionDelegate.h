#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Spine::Unity { class SkeletonRootMotionBase; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_UNITY_SKELETONROOTMOTIONBASE_ROOTMOTIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1ACD9A60)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_ROOTMOTIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1ACD9AE0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_ROOTMOTIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ACD7760)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_ROOTMOTIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACD9970)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRootMotionBase_RootMotionDelegate_TypeDefinitionIndex = 41405;

	class SkeletonRootMotionBase_RootMotionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_ROOTMOTIONDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Spine::Unity::SkeletonRootMotionBase* a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRootMotionBase*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_ROOTMOTIONDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::SkeletonRootMotionBase* a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::Unity::SkeletonRootMotionBase*, ::UnityEngine::Vector2, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_ROOTMOTIONDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_ROOTMOTIONDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
