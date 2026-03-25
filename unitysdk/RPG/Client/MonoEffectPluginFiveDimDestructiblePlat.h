#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginFiveDimDestructiblePlat_Struct_2_EF2CDCADB84C17C5.h"

namespace RPG { template <typename T> class PoolList_1; }

#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMDESTRUCTIBLEPLAT_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CD0630)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMDESTRUCTIBLEPLAT_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CD0090)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMDESTRUCTIBLEPLAT__CTOR_OFFSET UNITYSDK_OFFSET(0x9CD0840)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginFiveDimDestructiblePlat_TypeDefinitionIndex = 57298;

	class MonoEffectPluginFiveDimDestructiblePlat : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::PoolList_1<::RPG::Client::MonoEffectPluginFiveDimDestructiblePlat_Struct_2_EF2CDCADB84C17C5>* Field_6_0; // 0x28

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
