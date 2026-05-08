#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseConfigSoundAction.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONGENERAL_WALK_OFFSET UNITYSDK_OFFSET(0x1242C6C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONGENERAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1242C750)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionGeneral_TypeDefinitionIndex = 45573;

	class ConfigSoundActionGeneral : public ::MoleMole::Config::BaseConfigSoundAction
	{
	public:
		::System::String* comment; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONGENERAL__CTOR_OFFSET))(this);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONGENERAL_WALK_OFFSET))(this, callback);
		}
	};
}
