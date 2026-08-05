#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace ParadoxNotion { class IEventData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define PARADOXNOTION_SERVICES_EVENTROUTER_CUSTOMEVENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DFE5950)
#define PARADOXNOTION_SERVICES_EVENTROUTER_CUSTOMEVENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DFE5990)
#define PARADOXNOTION_SERVICES_EVENTROUTER_CUSTOMEVENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DFE53C0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_CUSTOMEVENTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE53A0)

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int EventRouter_CustomEventDelegate_TypeDefinitionIndex = 31494;

	class EventRouter_CustomEventDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_CUSTOMEVENTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* name, ::ParadoxNotion::IEventData* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ParadoxNotion::IEventData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_CUSTOMEVENTDELEGATE_INVOKE_OFFSET))(this, name, data);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* name, ::ParadoxNotion::IEventData* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::ParadoxNotion::IEventData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_CUSTOMEVENTDELEGATE_BEGININVOKE_OFFSET))(this, name, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_CUSTOMEVENTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
