#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

#define RPG_CLIENT_MONOEFFECTPLUGINSPEED_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA9A0800)
#define RPG_CLIENT_MONOEFFECTPLUGINSPEED_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xA9A0780)
#define RPG_CLIENT_MONOEFFECTPLUGINSPEED_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xA9A07C0)
#define RPG_CLIENT_MONOEFFECTPLUGINSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0xA9A0840)
#define RPG_CLIENT_MONOEFFECTPLUGINSPEED___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xA9A0850)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginSpeed_TypeDefinitionIndex = 64635;

	class MonoEffectPluginSpeed : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Boolean KeySpeedIsOn; // 0x28
		::System::Single Speed; // 0x2C
		::System::Boolean IsSimulationSpeedSyncMode; // 0x30
		::System::Boolean IsApplyToShaderSimulationSpeed; // 0x31
		::System::Boolean InfluencedBySimulationSpeed; // 0x32

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSPEED__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSPEED_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSPEED_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSPEED_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSPEED___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET))(this);
		}
	};
}
