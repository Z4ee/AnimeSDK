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

#define SRDEBUGGER_INTERNAL_SERVICE_GET_CONSOLE_OFFSET UNITYSDK_OFFSET(0x18431E80)
#define SRDEBUGGER_INTERNAL_SERVICE_GET_DEBUGCAMERA_OFFSET UNITYSDK_OFFSET(0x18434E40)
#define SRDEBUGGER_INTERNAL_SERVICE_GET_DOCKCONSOLE_OFFSET UNITYSDK_OFFSET(0x18435250)
#define SRDEBUGGER_INTERNAL_SERVICE_GET_OPTIONCOLLECTION_OFFSET UNITYSDK_OFFSET(0x18435450)
#define SRDEBUGGER_INTERNAL_SERVICE_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x184353F0)
#define SRDEBUGGER_INTERNAL_SERVICE_GET_PANEL_OFFSET UNITYSDK_OFFSET(0x184352D0)
#define SRDEBUGGER_INTERNAL_SERVICE_GET_PINNEDUI_OFFSET UNITYSDK_OFFSET(0x18435390)
#define SRDEBUGGER_INTERNAL_SERVICE_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x18435330)

namespace SRDebugger::Internal
{
	inline static constexpr unsigned int Service_TypeDefinitionIndex = 29752;

	class Service : public ::System::Object
	{
	public:
		static ::SRDebugger::Services::IOptionCollectionService** StaticGet__optionCollectionService()
		{
			return (::SRDebugger::Services::IOptionCollectionService**)Il2CppClass::FromTypeDefinitionIndex(Service_TypeDefinitionIndex)->GetStaticField(0x32230);
		}
		static ::SRDebugger::Services::IOptionsService** StaticGet__optionsService()
		{
			return (::SRDebugger::Services::IOptionsService**)Il2CppClass::FromTypeDefinitionIndex(Service_TypeDefinitionIndex)->GetStaticField(0x32238);
		}
		static ::SRDebugger::Services::IDebugTriggerService** StaticGet__debugTriggerService()
		{
			return (::SRDebugger::Services::IDebugTriggerService**)Il2CppClass::FromTypeDefinitionIndex(Service_TypeDefinitionIndex)->GetStaticField(0x32240);
		}
		static ::SRDebugger::Services::IDebugCameraService** StaticGet__debugCameraService()
		{
			return (::SRDebugger::Services::IDebugCameraService**)Il2CppClass::FromTypeDefinitionIndex(Service_TypeDefinitionIndex)->GetStaticField(0x32248);
		}
		static ::SRDebugger::Services::IConsoleService** StaticGet__consoleService()
		{
			return (::SRDebugger::Services::IConsoleService**)Il2CppClass::FromTypeDefinitionIndex(Service_TypeDefinitionIndex)->GetStaticField(0x32250);
		}
		static ::SRDebugger::Services::IDebugPanelService** StaticGet__debugPanelService()
		{
			return (::SRDebugger::Services::IDebugPanelService**)Il2CppClass::FromTypeDefinitionIndex(Service_TypeDefinitionIndex)->GetStaticField(0x32258);
		}
		static ::SRDebugger::Services::IPinnedUIService** StaticGet__pinnedUiService()
		{
			return (::SRDebugger::Services::IPinnedUIService**)Il2CppClass::FromTypeDefinitionIndex(Service_TypeDefinitionIndex)->GetStaticField(0x32260);
		}
		static ::SRDebugger::Services::IDockConsoleService** StaticGet__dockConsoleService()
		{
			return (::SRDebugger::Services::IDockConsoleService**)Il2CppClass::FromTypeDefinitionIndex(Service_TypeDefinitionIndex)->GetStaticField(0x32268);
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
