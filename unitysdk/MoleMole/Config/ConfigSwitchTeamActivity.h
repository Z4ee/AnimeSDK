#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSWITCHTEAMACTIVITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1424E740)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSwitchTeamActivity_TypeDefinitionIndex = 39865;

	class ConfigSwitchTeamActivity : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::Il2CppArray<::System::String*>* SwitchTeamBuffLevelIcons; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSWITCHTEAMACTIVITY__CTOR_OFFSET))(this);
		}
	};
}
