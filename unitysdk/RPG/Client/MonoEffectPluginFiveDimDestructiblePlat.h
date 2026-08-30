#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginFiveDimDestructiblePlat_Struct_2_EF2CDCADB84C17C5.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMDESTRUCTIBLEPLAT_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B389830)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMDESTRUCTIBLEPLAT_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B389240)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMDESTRUCTIBLEPLAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B389A20)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginFiveDimDestructiblePlat_TypeDefinitionIndex = 69991;

	class MonoEffectPluginFiveDimDestructiblePlat : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::Il2CppArray<::UnityEngine::ParticleSystem*>* IgnoredParticles; // 0x28
		::RPG::PoolList_1<::RPG::Client::MonoEffectPluginFiveDimDestructiblePlat_Struct_2_EF2CDCADB84C17C5>* DFDAHNAEBEC; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMDESTRUCTIBLEPLAT__CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMDESTRUCTIBLEPLAT_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMDESTRUCTIBLEPLAT_DISPOSEPLUGIN_OFFSET))(this);
		}
	};
}
