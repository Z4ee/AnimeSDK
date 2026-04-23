#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA2B2820)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA2B2860)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2B1B30)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA2B2800)

namespace RPG::Client
{
	inline static constexpr unsigned int EventTriggerListener_VoidDelegate_TypeDefinitionIndex = 66830;

	class EventTriggerListener_VoidDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::GameObject* go, ::UnityEngine::EventSystems::PointerEventData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDDELEGATE_INVOKE_OFFSET))(this, go, data);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* go, ::UnityEngine::EventSystems::PointerEventData* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDDELEGATE_BEGININVOKE_OFFSET))(this, go, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
