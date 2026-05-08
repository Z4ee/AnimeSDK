#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseConfigSoundAction.h"

class Class_0_16E4307DCC419505_147;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONINTENDING_EXECUTEANDENDSCOPE_1_OFFSET UNITYSDK_OFFSET(0x17539D90)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONINTENDING_EXECUTEANDENDSCOPE_OFFSET UNITYSDK_OFFSET(0x17539D20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONINTENDING__CTOR_OFFSET UNITYSDK_OFFSET(0x17539E30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionIntending_TypeDefinitionIndex = 64702;

	class ConfigSoundActionIntending : public ::MoleMole::Config::BaseConfigSoundAction
	{
	public:
		::System::UInt32 scopeToken; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONINTENDING__CTOR_OFFSET))(this);
		}

		::System::Void ExecuteAndEndScope(::Class_0_16E4307DCC419505_147* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_147*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONINTENDING_EXECUTEANDENDSCOPE_OFFSET))(this, context);
		}

		::System::Void ExecuteAndEndScope_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONINTENDING_EXECUTEANDENDSCOPE_1_OFFSET))(this);
		}
	};
}
