#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesLandLineupData; }
namespace RPG::GameCore { class PlanetFesRecommendTeamRow; }

#define RPG_CLIENT_PLANETFESLINEUPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xACC36A0)
#define RPG_CLIENT_PLANETFESLINEUPDATA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xACC3680)
#define RPG_CLIENT_PLANETFESLINEUPDATA_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xACC3690)
#define RPG_CLIENT_PLANETFESLINEUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xACC3780)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesLineupData_TypeDefinitionIndex = 61285;

	class PlanetFesLineupData : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesLandLineupData* GameLineup; // 0x10
		::RPG::Client::PlanetFesLandLineupData* BusinessLineup; // 0x18
		::RPG::Client::PlanetFesLandLineupData* ExhibitionLineup; // 0x20
		::System::UInt32 _Index_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLINEUPDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLINEUPDATA_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLINEUPDATA_SET_INDEX_OFFSET))(this, value);
		}

		static ::RPG::Client::PlanetFesLineupData* Create(::RPG::GameCore::PlanetFesRecommendTeamRow* row)
		{
			return ((::RPG::Client::PlanetFesLineupData*(*)(::RPG::GameCore::PlanetFesRecommendTeamRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLINEUPDATA_CREATE_OFFSET))(row);
		}
	};
}
