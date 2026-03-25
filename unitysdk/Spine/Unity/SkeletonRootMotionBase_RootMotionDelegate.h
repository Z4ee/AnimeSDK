#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Spine::Unity { class SkeletonRootMotionBase; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_UNITY_SKELETONROOTMOTIONBASE_ROOTMOTIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x184289B0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_ROOTMOTIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18428A30)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_ROOTMOTIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18426250)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_ROOTMOTIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18428990)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRootMotionBase_RootMotionDelegate_TypeDefinitionIndex = 34759;

	class SkeletonRootMotionBase_RootMotionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_ROOTMOTIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Spine::Unity::SkeletonRootMotionBase* component, ::UnityEngine::Vector2 translation, ::System::Single rotation)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRootMotionBase*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_ROOTMOTIONDELEGATE_INVOKE_OFFSET))(this, component, translation, rotation);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::SkeletonRootMotionBase* component, ::UnityEngine::Vector2 translation, ::System::Single rotation, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::Unity::SkeletonRootMotionBase*, ::UnityEngine::Vector2, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_ROOTMOTIONDELEGATE_BEGININVOKE_OFFSET))(this, component, translation, rotation, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_ROOTMOTIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
