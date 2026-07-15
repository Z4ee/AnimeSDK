#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_0_16E4307DCC419505_134;
namespace RPG::Client { class MonoEffectPluginEffectScan; }

#define RPG_CLIENT_MONOEFFECTPLUGINEFFECTSCANFIVEDIMADAPT_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1912C3D0)
#define RPG_CLIENT_MONOEFFECTPLUGINEFFECTSCANFIVEDIMADAPT_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x1912C210)
#define RPG_CLIENT_MONOEFFECTPLUGINEFFECTSCANFIVEDIMADAPT_TICK_OFFSET UNITYSDK_OFFSET(0x1912C330)
#define RPG_CLIENT_MONOEFFECTPLUGINEFFECTSCANFIVEDIMADAPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1912C420)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginEffectScanFiveDimAdapt_TypeDefinitionIndex = 66869;

	class MonoEffectPluginEffectScanFiveDimAdapt : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::MonoEffectPluginEffectScan* Field_6_0; // 0x28
		::Class_0_16E4307DCC419505_134* Field_6_1; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINEFFECTSCANFIVEDIMADAPT__CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINEFFECTSCANFIVEDIMADAPT_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINEFFECTSCANFIVEDIMADAPT_TICK_OFFSET))(this, a1);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINEFFECTSCANFIVEDIMADAPT_DISPOSEPLUGIN_OFFSET))(this);
		}
	};
}
