#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace SRDebugger::Services { class IConsoleService; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SRDEBUGGER_SERVICES_CONSOLEUPDATEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BDA22A0)
#define SRDEBUGGER_SERVICES_CONSOLEUPDATEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BDA22D0)
#define SRDEBUGGER_SERVICES_CONSOLEUPDATEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BDA2290)
#define SRDEBUGGER_SERVICES_CONSOLEUPDATEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDA21A0)

namespace SRDebugger::Services
{
	inline static constexpr unsigned int ConsoleUpdatedEventHandler_TypeDefinitionIndex = 37361;

	class ConsoleUpdatedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_CONSOLEUPDATEDEVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::SRDebugger::Services::IConsoleService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::IConsoleService*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_CONSOLEUPDATEDEVENTHANDLER_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::SRDebugger::Services::IConsoleService* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::SRDebugger::Services::IConsoleService*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_CONSOLEUPDATEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_CONSOLEUPDATEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
