#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginParticleManualUpdate_ManualUpdateType.h"

#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEMANUALUPDATE_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7FB0D0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEMANUALUPDATE_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7FB120)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEMANUALUPDATE_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7FB040)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEMANUALUPDATE_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xD7FB180)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEMANUALUPDATE_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7FAFA0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEMANUALUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0xD7FB300)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginParticleManualUpdate_TypeDefinitionIndex = 70089;

	class MonoEffectPluginParticleManualUpdate : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::MonoEffectPluginParticleManualUpdate_ManualUpdateType UpdateType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEMANUALUPDATE__CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEMANUALUPDATE_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEMANUALUPDATE_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEMANUALUPDATE_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEMANUALUPDATE_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEMANUALUPDATE_ENDOFLATETICK_OFFSET))(this, a1);
		}
	};
}
