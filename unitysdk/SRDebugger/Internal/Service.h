#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger::Services { class IConsoleService; }
namespace SRDebugger::Services { class IDebugCameraService; }
namespace SRDebugger::Services { class IDebugPanelService; }
namespace SRDebugger::Services { class IDebugTriggerService; }
namespace SRDebugger::Services { class IDockConsoleService; }
namespace SRDebugger::Services { class IOptionCollectionService; }
namespace SRDebugger::Services { class IOptionsService; }
namespace SRDebugger::Services { class IPinnedUIService; }

#define SRDEBUGGER_INTERNAL_SERVICE_GET_CONSOLE_OFFSET UNITYSDK_OFFSET(0x1E66FB80)
#define SRDEBUGGER_INTERNAL_SERVICE_GET_DEBUGCAMERA_OFFSET UNITYSDK_OFFSET(0x1E673800)
#define SRDEBUGGER_INTERNAL_SERVICE_GET_DOCKCONSOLE_OFFSET UNITYSDK_OFFSET(0x1E673DC0)
#define SRDEBUGGER_INTERNAL_SERVICE_GET_OPTIONCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1E673FC0)
#define SRDEBUGGER_INTERNAL_SERVICE_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1E673F60)
#define SRDEBUGGER_INTERNAL_SERVICE_GET_PANEL_OFFSET UNITYSDK_OFFSET(0x1E673E40)
#define SRDEBUGGER_INTERNAL_SERVICE_GET_PINNEDUI_OFFSET UNITYSDK_OFFSET(0x1E673F00)
#define SRDEBUGGER_INTERNAL_SERVICE_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1E673EA0)

namespace SRDebugger::Internal
{
	inline static constexpr unsigned int Service_TypeDefinitionIndex = 37413;

	class Service : public ::System::Object
	{
	public:
		static ::SRDebugger::Services::IConsoleService** StaticGet__consoleService()
		{
			return (::SRDebugger::Services::IConsoleService**)Il2CppClass::FromTypeDefinitionIndex(Service_TypeDefinitionIndex)->GetStaticField(0x44670);
		}
		static ::SRDebugger::Services::IDebugCameraService** StaticGet__debugCameraService()
		{
			return (::SRDebugger::Services::IDebugCameraService**)Il2CppClass::FromTypeDefinitionIndex(Service_TypeDefinitionIndex)->GetStaticField(0x44678);
		}
		static ::SRDebugger::Services::IOptionsService** StaticGet__optionsService()
		{
			return (::SRDebugger::Services::IOptionsService**)Il2CppClass::FromTypeDefinitionIndex(Service_TypeDefinitionIndex)->GetStaticField(0x44680);
		}
		static ::SRDebugger::Services::IPinnedUIService** StaticGet__pinnedUiService()
		{
			return (::SRDebugger::Services::IPinnedUIService**)Il2CppClass::FromTypeDefinitionIndex(Service_TypeDefinitionIndex)->GetStaticField(0x44688);
		}
		static ::SRDebugger::Services::IDebugTriggerService** StaticGet__debugTriggerService()
		{
			return (::SRDebugger::Services::IDebugTriggerService**)Il2CppClass::FromTypeDefinitionIndex(Service_TypeDefinitionIndex)->GetStaticField(0x44690);
		}
		static ::SRDebugger::Services::IDebugPanelService** StaticGet__debugPanelService()
		{
			return (::SRDebugger::Services::IDebugPanelService**)Il2CppClass::FromTypeDefinitionIndex(Service_TypeDefinitionIndex)->GetStaticField(0x44698);
		}
		static ::SRDebugger::Services::IDockConsoleService** StaticGet__dockConsoleService()
		{
			return (::SRDebugger::Services::IDockConsoleService**)Il2CppClass::FromTypeDefinitionIndex(Service_TypeDefinitionIndex)->GetStaticField(0x446A0);
		}
		static ::SRDebugger::Services::IOptionCollectionService** StaticGet__optionCollectionService()
		{
			return (::SRDebugger::Services::IOptionCollectionService**)Il2CppClass::FromTypeDefinitionIndex(Service_TypeDefinitionIndex)->GetStaticField(0x446A8);
		}

		static ::SRDebugger::Services::IConsoleService* get_Console()
		{
			return ((::SRDebugger::Services::IConsoleService*(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SERVICE_GET_CONSOLE_OFFSET))();
		}

		static ::SRDebugger::Services::IDockConsoleService* get_DockConsole()
		{
			return ((::SRDebugger::Services::IDockConsoleService*(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SERVICE_GET_DOCKCONSOLE_OFFSET))();
		}

		static ::SRDebugger::Services::IDebugPanelService* get_Panel()
		{
			return ((::SRDebugger::Services::IDebugPanelService*(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SERVICE_GET_PANEL_OFFSET))();
		}

		static ::SRDebugger::Services::IDebugTriggerService* get_Trigger()
		{
			return ((::SRDebugger::Services::IDebugTriggerService*(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SERVICE_GET_TRIGGER_OFFSET))();
		}

		static ::SRDebugger::Services::IPinnedUIService* get_PinnedUI()
		{
			return ((::SRDebugger::Services::IPinnedUIService*(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SERVICE_GET_PINNEDUI_OFFSET))();
		}

		static ::SRDebugger::Services::IDebugCameraService* get_DebugCamera()
		{
			return ((::SRDebugger::Services::IDebugCameraService*(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SERVICE_GET_DEBUGCAMERA_OFFSET))();
		}

		static ::SRDebugger::Services::IOptionsService* get_Options()
		{
			return ((::SRDebugger::Services::IOptionsService*(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SERVICE_GET_OPTIONS_OFFSET))();
		}

		static ::SRDebugger::Services::IOptionCollectionService* get_OptionCollection()
		{
			return ((::SRDebugger::Services::IOptionCollectionService*(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SERVICE_GET_OPTIONCOLLECTION_OFFSET))();
		}
	};
}
