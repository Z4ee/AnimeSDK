#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_RPGANIMATIONEVENT_ANIMATIONEVENTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xAF3ACA0)
#define RPG_CLIENT_RPGANIMATIONEVENT_ANIMATIONEVENTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xAF3ACD0)
#define RPG_CLIENT_RPGANIMATIONEVENT_ANIMATIONEVENTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xAF3A6D0)
#define RPG_CLIENT_RPGANIMATIONEVENT_ANIMATIONEVENTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xAF3AC80)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGAnimationEvent_AnimationEventCallBack_TypeDefinitionIndex = 67118;

	class RPGAnimationEvent_AnimationEventCallBack : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_ANIMATIONEVENTCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_ANIMATIONEVENTCALLBACK_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_ANIMATIONEVENTCALLBACK_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_ANIMATIONEVENTCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
