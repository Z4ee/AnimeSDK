#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightDamageStatisticInfo.h"

class Class_1_23C1B7E6B450FFB8_8;
namespace RPG::Client { class GridFightTraitConfigBase; }

#define RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO_GET_TRAITCONFIG_OFFSET UNITYSDK_OFFSET(0xBC2A220)
#define RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xBC2A020)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitDamageStatisticInfo_TypeDefinitionIndex = 60204;

	class GridFightTraitDamageStatisticInfo : public ::RPG::Client::GridFightDamageStatisticInfo
	{
	public:
		::System::UInt32 ActiveLayer; // 0x28

		::System::Void _ctor(::Class_1_23C1B7E6B450FFB8_8* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_8*, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightTraitConfigBase* get_TraitConfig()
		{
			return ((::RPG::Client::GridFightTraitConfigBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITDAMAGESTATISTICINFO_GET_TRAITCONFIG_OFFSET))(this);
		}
	};
}
