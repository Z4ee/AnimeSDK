#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/DefaultTabs.h"
#include "unitysdk/SRF/Service/SRServiceBase_1.h"

namespace SRDebugger { class Settings_KeyboardShortcut; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BDA64B0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE_EXECUTESHORTCUT_OFFSET UNITYSDK_OFFSET(0x1BDA6900)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE_TOGGLETAB_OFFSET UNITYSDK_OFFSET(0x1BDA65F0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE_UPDATELEGACYINPUTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1BDA7590)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BDA7580)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDA79B0)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int KeyboardShortcutListenerService_TypeDefinitionIndex = 37387;

	class KeyboardShortcutListenerService : public ::SRF::Service::SRServiceBase_1<::SRDebugger::Services::Implementation::KeyboardShortcutListenerService*>
	{
	public:
		::System::Collections::Generic::List_1<::SRDebugger::Settings_KeyboardShortcut*>* _shortcuts; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE_AWAKE_OFFSET))(this);
		}

		::System::Void ToggleTab(::SRDebugger::DefaultTabs a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::DefaultTabs))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE_TOGGLETAB_OFFSET))(this, a1);
		}

		::System::Void ExecuteShortcut(::SRDebugger::Settings_KeyboardShortcut* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Settings_KeyboardShortcut*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE_EXECUTESHORTCUT_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateLegacyInputSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE_UPDATELEGACYINPUTSYSTEM_OFFSET))(this);
		}
	};
}
