#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_NOTIFYHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x191BE440)
#define RPG_CLIENT_NOTIFYHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x191BE470)
#define RPG_CLIENT_NOTIFYHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x191BE430)
#define RPG_CLIENT_NOTIFYHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x191BE340)

namespace RPG::Client
{
	inline static constexpr unsigned int NotifyHandler_TypeDefinitionIndex = 59429;

	class NotifyHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYHANDLER_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
