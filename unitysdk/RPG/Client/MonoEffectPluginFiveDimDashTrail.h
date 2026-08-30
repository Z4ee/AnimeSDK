#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

namespace UnityEngine { class TrailRenderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMDASHTRAIL_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7BBE70)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMDASHTRAIL_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7BBBD0)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMDASHTRAIL__CTOR_OFFSET UNITYSDK_OFFSET(0xD7BBF30)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginFiveDimDashTrail_TypeDefinitionIndex = 69990;

	class MonoEffectPluginFiveDimDashTrail : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::UInt32 UnitLengthIndex; // 0x28
		::Il2CppArray<::UnityEngine::TrailRenderer*>* BMADEIDMGAL; // 0x30
		::Il2CppArray<::System::Single>* JIMIHBOAMMH; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMDASHTRAIL__CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMDASHTRAIL_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMDASHTRAIL_DISPOSEPLUGIN_OFFSET))(this);
		}
	};
}
