#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightDamageStatisticInfo.h"

class Class_1_23C1B7E6B450FFB8_7;
namespace RPG::Client { class GridFightAugmentConfig; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTDAMAGESTATISTICINFO_GET_AUGMENTCONFIG_OFFSET UNITYSDK_OFFSET(0xBAE3880)
#define RPG_CLIENT_GRIDFIGHTAUGMENTDAMAGESTATISTICINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xBAE3770)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentDamageStatisticInfo_TypeDefinitionIndex = 60205;

	class GridFightAugmentDamageStatisticInfo : public ::RPG::Client::GridFightDamageStatisticInfo
	{
	public:
		::System::Void _ctor(::Class_1_23C1B7E6B450FFB8_7* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_7*, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTDAMAGESTATISTICINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightAugmentConfig* get_AugmentConfig()
		{
			return ((::RPG::Client::GridFightAugmentConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTDAMAGESTATISTICINFO_GET_AUGMENTCONFIG_OFFSET))(this);
		}
	};
}
