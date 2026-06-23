#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionIntending.h"

class Class_0_16E4307DCC419505_197;
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MAYFAILACTION_BEGINSCOPE_OFFSET UNITYSDK_OFFSET(0x162BCA10)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MAYFAILACTION_ENDSCOPE_OFFSET UNITYSDK_OFFSET(0x162BCC50)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MAYFAILACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x162BCEA0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MAYFAILACTION_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x162BCA00)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MAYFAILACTION_ISMATCH_OFFSET UNITYSDK_OFFSET(0x162BD3D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MAYFAILACTION_SETSCOPEVALUE_OFFSET UNITYSDK_OFFSET(0x162BD160)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MAYFAILACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x162BD4F0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MAYFAILACTION___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x162BD530)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_MayFailAction_TypeDefinitionIndex = 52239;

	class ConfigSoundAction_MayFailAction : public ::MoleMole::Config::ConfigSoundActionIntending
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* successAction; // 0x20
		::MoleMole::Config::ConfigSoundActionGeneral* failAction; // 0x28
		::System::String* _currentRetValue; // 0x30
		::System::String* scopeName; // 0x38
		::System::Boolean useDefaultScope; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MAYFAILACTION__CTOR_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MAYFAILACTION_GET_PARAMHINT_OFFSET))(this);
		}

		::System::UInt32 BeginScope()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MAYFAILACTION_BEGINSCOPE_OFFSET))(this);
		}

		::System::Void EndScope()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MAYFAILACTION_ENDSCOPE_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MAYFAILACTION_EXECUTE_OFFSET))(this, context);
		}

		::System::Void SetScopeValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MAYFAILACTION_SETSCOPEVALUE_OFFSET))(this, value);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MAYFAILACTION_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MAYFAILACTION___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
