#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesSummaryNominateType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesSummaryData; }
namespace RPG::GameCore { class PlanetFesSummaryRow; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_CREATE_OFFSET UNITYSDK_OFFSET(0xAD452F0)
#define RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_GETDESC_OFFSET UNITYSDK_OFFSET(0xAD459D0)
#define RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_GETTITLE_OFFSET UNITYSDK_OFFSET(0xAD45940)
#define RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_GET_NOMINATETYPE_OFFSET UNITYSDK_OFFSET(0xAD46340)
#define RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_ISSATISFY_OFFSET UNITYSDK_OFFSET(0xAD45380)
#define RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_SET_NOMINATETYPE_OFFSET UNITYSDK_OFFSET(0xAD46350)
#define RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE__CTOR_OFFSET UNITYSDK_OFFSET(0xAD45930)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesSummaryPlayerNominate_TypeDefinitionIndex = 61400;

	class PlanetFesSummaryPlayerNominate : public ::System::Object
	{
	public:
		::RPG::GameCore::PlanetFesSummaryRow* _Config; // 0x10
		::RPG::GameCore::PlanetFesSummaryNominateType _NominateType_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesSummaryPlayerNominate* Create(::RPG::GameCore::PlanetFesSummaryRow* config)
		{
			return ((::RPG::Client::PlanetFesSummaryPlayerNominate*(*)(::RPG::GameCore::PlanetFesSummaryRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_CREATE_OFFSET))(config);
		}

		::System::Boolean IsSatisfy(::RPG::Client::PlanetFesSummaryData* summaryData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesSummaryData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_ISSATISFY_OFFSET))(this, summaryData);
		}

		::System::String* GetTitle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_GETTITLE_OFFSET))(this);
		}

		::System::String* GetDesc(::RPG::Client::PlanetFesSummaryData* summaryData)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::PlanetFesSummaryData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_GETDESC_OFFSET))(this, summaryData);
		}

		::RPG::GameCore::PlanetFesSummaryNominateType get_NominateType()
		{
			return ((::RPG::GameCore::PlanetFesSummaryNominateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_GET_NOMINATETYPE_OFFSET))(this);
		}

		::System::Void set_NominateType(::RPG::GameCore::PlanetFesSummaryNominateType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesSummaryNominateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_SET_NOMINATETYPE_OFFSET))(this, value);
		}
	};
}
