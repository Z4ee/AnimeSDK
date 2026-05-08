#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine::Unity { class ISkeletonAnimation; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_UNITY_ISKELETONANIMATIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18B3BF70)
#define SPINE_UNITY_ISKELETONANIMATIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18B3BFA0)
#define SPINE_UNITY_ISKELETONANIMATIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18B3BA70)
#define SPINE_UNITY_ISKELETONANIMATIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B3BA60)

namespace Spine::Unity
{
	inline static constexpr unsigned int ISkeletonAnimationDelegate_TypeDefinitionIndex = 37865;

	class ISkeletonAnimationDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_ISKELETONANIMATIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Spine::Unity::ISkeletonAnimation* animated)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimation*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ISKELETONANIMATIONDELEGATE_INVOKE_OFFSET))(this, animated);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::ISkeletonAnimation* animated, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::Unity::ISkeletonAnimation*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ISKELETONANIMATIONDELEGATE_BEGININVOKE_OFFSET))(this, animated, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ISKELETONANIMATIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
