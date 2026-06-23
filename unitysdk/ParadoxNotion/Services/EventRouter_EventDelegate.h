#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/EventData.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define PARADOXNOTION_SERVICES_EVENTROUTER_EVENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D7C9340)
#define PARADOXNOTION_SERVICES_EVENTROUTER_EVENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D7C93B0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_EVENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D7C8EE0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_EVENTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C8EC0)

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int EventRouter_EventDelegate_TypeDefinitionIndex = 29141;

	class EventRouter_EventDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_EVENTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_EVENTDELEGATE_INVOKE_OFFSET))(this, msg);
		}

		::System::IAsyncResult* BeginInvoke(::ParadoxNotion::EventData msg, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ParadoxNotion::EventData, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_EVENTDELEGATE_BEGININVOKE_OFFSET))(this, msg, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_EVENTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
