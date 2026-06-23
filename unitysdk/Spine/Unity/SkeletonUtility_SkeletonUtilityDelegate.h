#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_UNITY_SKELETONUTILITY_SKELETONUTILITYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AD4E570)
#define SPINE_UNITY_SKELETONUTILITY_SKELETONUTILITYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AD4E5A0)
#define SPINE_UNITY_SKELETONUTILITY_SKELETONUTILITYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AD4C250)
#define SPINE_UNITY_SKELETONUTILITY_SKELETONUTILITYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD4E550)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonUtility_SkeletonUtilityDelegate_TypeDefinitionIndex = 39486;

	class SkeletonUtility_SkeletonUtilityDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_SKELETONUTILITYDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_SKELETONUTILITYDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_SKELETONUTILITYDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_SKELETONUTILITYDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
