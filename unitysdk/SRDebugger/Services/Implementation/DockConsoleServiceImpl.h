#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/ConsoleAlignment.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger::UI::Other { class DockConsoleController; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_CHECKTRIGGER_OFFSET UNITYSDK_OFFSET(0x19E77F80)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x19E78410)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_GET_ISEXPANDED_OFFSET UNITYSDK_OFFSET(0x19E78280)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x19E77C70)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_LOAD_OFFSET UNITYSDK_OFFSET(0x19E77D10)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x19E78420)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_SET_ISEXPANDED_OFFSET UNITYSDK_OFFSET(0x19E78290)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x19E77C80)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x19E77BF0)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int DockConsoleServiceImpl_TypeDefinitionIndex = 35445;

	class DockConsoleServiceImpl : public ::System::Object
	{
	public:
		::SRDebugger::UI::Other::DockConsoleController* _consoleRoot; // 0x10
		::SRDebugger::ConsoleAlignment _alignment; // 0x18
		::System::Boolean _didSuspendTrigger; // 0x1C
		::System::Boolean _isExpanded; // 0x1D
		::System::Boolean _isVisible; // 0x1E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Void set_IsVisible(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_SET_ISVISIBLE_OFFSET))(this, value);
		}

		::System::Boolean get_IsExpanded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_GET_ISEXPANDED_OFFSET))(this);
		}

		::System::Void set_IsExpanded(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_SET_ISEXPANDED_OFFSET))(this, value);
		}

		::SRDebugger::ConsoleAlignment get_Alignment()
		{
			return ((::SRDebugger::ConsoleAlignment(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_GET_ALIGNMENT_OFFSET))(this);
		}

		::System::Void set_Alignment(::SRDebugger::ConsoleAlignment value)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::ConsoleAlignment))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_SET_ALIGNMENT_OFFSET))(this, value);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_LOAD_OFFSET))(this);
		}

		::System::Void CheckTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_CHECKTRIGGER_OFFSET))(this);
		}
	};
}
