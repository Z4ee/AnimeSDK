#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEGAMEDELEGATE_RAILFIREEVENTSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7B9E0)
#define MIHOYO_SDK_WEGAMEDELEGATE_RAILFIREEVENTSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7BA10)
#define MIHOYO_SDK_WEGAMEDELEGATE_RAILFIREEVENTSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7B9D0)
#define MIHOYO_SDK_WEGAMEDELEGATE_RAILFIREEVENTSDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7B960)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WeGameDelegate_RailFireEventsDelegate_TypeDefinitionIndex = 7665;

	class WeGameDelegate_RailFireEventsDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_RAILFIREEVENTSDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_RAILFIREEVENTSDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_RAILFIREEVENTSDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_RAILFIREEVENTSDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
