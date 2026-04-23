#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace SRDebugger::Services { class IConsoleService; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SRDEBUGGER_SERVICES_CONSOLEUPDATEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19E74AD0)
#define SRDEBUGGER_SERVICES_CONSOLEUPDATEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19E74B00)
#define SRDEBUGGER_SERVICES_CONSOLEUPDATEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x19E74580)
#define SRDEBUGGER_SERVICES_CONSOLEUPDATEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E74560)

namespace SRDebugger::Services
{
	inline static constexpr unsigned int ConsoleUpdatedEventHandler_TypeDefinitionIndex = 35420;

	class ConsoleUpdatedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_CONSOLEUPDATEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::SRDebugger::Services::IConsoleService* console)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::IConsoleService*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_CONSOLEUPDATEDEVENTHANDLER_INVOKE_OFFSET))(this, console);
		}

		::System::IAsyncResult* BeginInvoke(::SRDebugger::Services::IConsoleService* console, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::SRDebugger::Services::IConsoleService*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_CONSOLEUPDATEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, console, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_CONSOLEUPDATEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
