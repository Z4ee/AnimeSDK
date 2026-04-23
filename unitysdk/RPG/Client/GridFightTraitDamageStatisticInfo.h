#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightDamageStatisticInfo.h"

class Class_1_23C1B7E6B450FFB8_7;
namespace RPG::Client { class GridFightTraitConfigBase; }

#define RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO_GET_TRAITCONFIG_OFFSET UNITYSDK_OFFSET(0xA5B7F20)
#define RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA5B7CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitDamageStatisticInfo_TypeDefinitionIndex = 59269;

	class GridFightTraitDamageStatisticInfo : public ::RPG::Client::GridFightDamageStatisticInfo
	{
	public:
		::System::UInt32 ActiveLayer; // 0x28

		::System::Void _ctor(::Class_1_23C1B7E6B450FFB8_7* damageInfo, ::System::Double maxDamage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_7*, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO__CTOR_OFFSET))(this, damageInfo, maxDamage);
		}

		::RPG::Client::GridFightTraitConfigBase* get_TraitConfig()
		{
			return ((::RPG::Client::GridFightTraitConfigBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO_GET_TRAITCONFIG_OFFSET))(this);
		}
	};
}
