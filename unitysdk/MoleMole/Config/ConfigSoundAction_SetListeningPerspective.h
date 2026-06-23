#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10D0C7A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x10D0C760)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x10D0C8B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D0C900)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x10D0C940)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetListeningPerspective_TypeDefinitionIndex = 51258;

	class ConfigSoundAction_SetListeningPerspective : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::Int32 perspective; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
