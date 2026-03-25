#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightDamageStatisticInfo.h"

class Class_1_6EBEA8069CDA622C_8;
namespace RPG::Client { class GridFightTraitConfigBase; }

#define RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO_GET_TRAITCONFIG_OFFSET UNITYSDK_OFFSET(0x98D1B40)
#define RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x98D1940)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitDamageStatisticInfo_TypeDefinitionIndex = 52316;

	class GridFightTraitDamageStatisticInfo : public ::RPG::Client::GridFightDamageStatisticInfo
	{
	public:
		::System::UInt32 ActiveLayer; // 0x28

		::System::Void _ctor(::Class_1_6EBEA8069CDA622C_8* damageInfo, ::System::Double maxDamage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6EBEA8069CDA622C_8*, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO__CTOR_OFFSET))(this, damageInfo, maxDamage);
		}

		::RPG::Client::GridFightTraitConfigBase* get_TraitConfig()
		{
			return ((::RPG::Client::GridFightTraitConfigBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO_GET_TRAITCONFIG_OFFSET))(this);
		}
	};
}
