#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine::Unity { class ISkeletonAnimation; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_UNITY_UPDATEBONESDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19E6A520)
#define SPINE_UNITY_UPDATEBONESDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19E6A550)
#define SPINE_UNITY_UPDATEBONESDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19E46890)
#define SPINE_UNITY_UPDATEBONESDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E60520)

namespace Spine::Unity
{
	inline static constexpr unsigned int UpdateBonesDelegate_TypeDefinitionIndex = 40624;

	class UpdateBonesDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_UPDATEBONESDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Spine::Unity::ISkeletonAnimation* animated)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimation*))((::PBYTE)hIl2Cpp + SPINE_UNITY_UPDATEBONESDELEGATE_INVOKE_OFFSET))(this, animated);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::ISkeletonAnimation* animated, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::Unity::ISkeletonAnimation*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_UPDATEBONESDELEGATE_BEGININVOKE_OFFSET))(this, animated, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_UPDATEBONESDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
