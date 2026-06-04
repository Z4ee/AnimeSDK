#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_RPGANIMATIONEVENT_ANIMATIONEVENTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xC680AB0)
#define RPG_CLIENT_RPGANIMATIONEVENT_ANIMATIONEVENTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xC680AE0)
#define RPG_CLIENT_RPGANIMATIONEVENT_ANIMATIONEVENTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xC680720)
#define RPG_CLIENT_RPGANIMATIONEVENT_ANIMATIONEVENTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xC680A40)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGAnimationEvent_AnimationEventCallBack_TypeDefinitionIndex = 68061;

	class RPGAnimationEvent_AnimationEventCallBack : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_ANIMATIONEVENTCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_ANIMATIONEVENTCALLBACK_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_ANIMATIONEVENTCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT_ANIMATIONEVENTCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
