#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDBASEEVENTDATADELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x962BAC0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDBASEEVENTDATADELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x962BB00)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDBASEEVENTDATADELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x962A850)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDBASEEVENTDATADELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x962BAA0)

namespace RPG::Client
{
	inline static constexpr unsigned int EventTriggerListener_VoidBaseEventDataDelegate_TypeDefinitionIndex = 59436;

	class EventTriggerListener_VoidBaseEventDataDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDBASEEVENTDATADELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::GameObject* go, ::UnityEngine::EventSystems::BaseEventData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDBASEEVENTDATADELEGATE_INVOKE_OFFSET))(this, go, data);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* go, ::UnityEngine::EventSystems::BaseEventData* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDBASEEVENTDATADELEGATE_BEGININVOKE_OFFSET))(this, go, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDBASEEVENTDATADELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
