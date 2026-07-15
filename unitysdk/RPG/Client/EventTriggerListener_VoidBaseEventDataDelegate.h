#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDBASEEVENTDATADELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17CE4700)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDBASEEVENTDATADELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17CE4740)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDBASEEVENTDATADELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x17CE3ED0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDBASEEVENTDATADELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17CE4680)

namespace RPG::Client
{
	inline static constexpr unsigned int EventTriggerListener_VoidBaseEventDataDelegate_TypeDefinitionIndex = 69255;

	class EventTriggerListener_VoidBaseEventDataDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDBASEEVENTDATADELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDBASEEVENTDATADELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::BaseEventData* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDBASEEVENTDATADELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDBASEEVENTDATADELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
