#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightDamageStatisticInfo.h"

class Class_1_23C1B7E6B450FFB8_8;
namespace RPG::Client { class GridFightAugmentConfig; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTDAMAGESTATISTICINFO_GET_AUGMENTCONFIG_OFFSET UNITYSDK_OFFSET(0xA446FC0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTDAMAGESTATISTICINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA446EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentDamageStatisticInfo_TypeDefinitionIndex = 59270;

	class GridFightAugmentDamageStatisticInfo : public ::RPG::Client::GridFightDamageStatisticInfo
	{
	public:
		::System::Void _ctor(::Class_1_23C1B7E6B450FFB8_8* damageInfo, ::System::Double maxDamage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_8*, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTDAMAGESTATISTICINFO__CTOR_OFFSET))(this, damageInfo, maxDamage);
		}

		::RPG::Client::GridFightAugmentConfig* get_AugmentConfig()
		{
			return ((::RPG::Client::GridFightAugmentConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTDAMAGESTATISTICINFO_GET_AUGMENTCONFIG_OFFSET))(this);
		}
	};
}
