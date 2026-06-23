#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class AnimationClip; }

#define ROOTMOTION_BAKER_BAKERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E05B620)
#define ROOTMOTION_BAKER_BAKERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E05B6A0)
#define ROOTMOTION_BAKER_BAKERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E05B080)
#define ROOTMOTION_BAKER_BAKERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E05B060)

namespace RootMotion
{
	inline static constexpr unsigned int Baker_BakerDelegate_TypeDefinitionIndex = 38351;

	class Baker_BakerDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKER_BAKERDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::AnimationClip* clip, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKER_BAKERDELEGATE_INVOKE_OFFSET))(this, clip, time);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::AnimationClip* clip, ::System::Single time, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::AnimationClip*, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKER_BAKERDELEGATE_BEGININVOKE_OFFSET))(this, clip, time, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKER_BAKERDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
