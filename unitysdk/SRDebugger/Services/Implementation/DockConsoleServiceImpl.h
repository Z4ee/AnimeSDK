#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/ConsoleAlignment.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger::UI::Other { class DockConsoleController; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_CHECKTRIGGER_OFFSET UNITYSDK_OFFSET(0x1ACEE3C0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1ACEE840)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_GET_ISEXPANDED_OFFSET UNITYSDK_OFFSET(0x1ACEE6C0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1ACEE0A0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_LOAD_OFFSET UNITYSDK_OFFSET(0x1ACEE140)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1ACEE850)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_SET_ISEXPANDED_OFFSET UNITYSDK_OFFSET(0x1ACEE6D0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1ACEE0B0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACEE020)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int DockConsoleServiceImpl_TypeDefinitionIndex = 35745;

	class DockConsoleServiceImpl : public ::System::Object
	{
	public:
		::SRDebugger::UI::Other::DockConsoleController* _consoleRoot; // 0x10
		::System::Boolean _didSuspendTrigger; // 0x18
		::System::Boolean _isExpanded; // 0x19
		::System::Boolean _isVisible; // 0x1A
		::SRDebugger::ConsoleAlignment _alignment; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Void set_IsVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_SET_ISVISIBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExpanded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_GET_ISEXPANDED_OFFSET))(this);
		}

		::System::Void set_IsExpanded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_SET_ISEXPANDED_OFFSET))(this, a1);
		}

		::SRDebugger::ConsoleAlignment get_Alignment()
		{
			return ((::SRDebugger::ConsoleAlignment(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_GET_ALIGNMENT_OFFSET))(this);
		}

		::System::Void set_Alignment(::SRDebugger::ConsoleAlignment a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::ConsoleAlignment))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_SET_ALIGNMENT_OFFSET))(this, a1);
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
