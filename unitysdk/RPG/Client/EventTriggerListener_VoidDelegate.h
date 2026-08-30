#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1993E5E0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1993E620)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1993DD70)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1993E560)

namespace RPG::Client
{
	inline static constexpr unsigned int EventTriggerListener_VoidDelegate_TypeDefinitionIndex = 72456;

	class EventTriggerListener_VoidDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_VOIDDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
