#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine { class Animation; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ONCLIPAPPLIEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C188220)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ONCLIPAPPLIEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C188320)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ONCLIPAPPLIEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C186F20)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ONCLIPAPPLIEDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C188200)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate_TypeDefinitionIndex = 40127;

	class SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ONCLIPAPPLIEDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Spine::Animation* clip, ::System::Int32 layerIndex, ::System::Single weight, ::System::Single time, ::System::Single lastTime, ::System::Boolean playsBackward)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Animation*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ONCLIPAPPLIEDDELEGATE_INVOKE_OFFSET))(this, clip, layerIndex, weight, time, lastTime, playsBackward);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Animation* clip, ::System::Int32 layerIndex, ::System::Single weight, ::System::Single time, ::System::Single lastTime, ::System::Boolean playsBackward, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::Animation*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ONCLIPAPPLIEDDELEGATE_BEGININVOKE_OFFSET))(this, clip, layerIndex, weight, time, lastTime, playsBackward, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ONCLIPAPPLIEDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
