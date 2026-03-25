#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightDamageStatisticInfo.h"

class Class_1_6EBEA8069CDA622C_7;
namespace RPG::Client { class GridFightAugmentConfig; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTDAMAGESTATISTICINFO_GET_AUGMENTCONFIG_OFFSET UNITYSDK_OFFSET(0x97CE4C0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTDAMAGESTATISTICINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x97CE3E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentDamageStatisticInfo_TypeDefinitionIndex = 52317;

	class GridFightAugmentDamageStatisticInfo : public ::RPG::Client::GridFightDamageStatisticInfo
	{
	public:
		::System::Void _ctor(::Class_1_6EBEA8069CDA622C_7* damageInfo, ::System::Double maxDamage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6EBEA8069CDA622C_7*, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTDAMAGESTATISTICINFO__CTOR_OFFSET))(this, damageInfo, maxDamage);
		}

		::RPG::Client::GridFightAugmentConfig* get_AugmentConfig()
		{
			return ((::RPG::Client::GridFightAugmentConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTDAMAGESTATISTICINFO_GET_AUGMENTCONFIG_OFFSET))(this);
		}
	};
}
