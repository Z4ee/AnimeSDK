#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesSummaryNominateType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesSummaryData; }
namespace RPG::GameCore { class PlanetFesSummaryRow; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_CREATE_OFFSET UNITYSDK_OFFSET(0x1C2C9CF0)
#define RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_GETDESC_OFFSET UNITYSDK_OFFSET(0x1C2CA3D0)
#define RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_GETTITLE_OFFSET UNITYSDK_OFFSET(0x1C2CA340)
#define RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_GET_NOMINATETYPE_OFFSET UNITYSDK_OFFSET(0x1C2CACD0)
#define RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_ISSATISFY_OFFSET UNITYSDK_OFFSET(0x1C2C9D80)
#define RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_SET_NOMINATETYPE_OFFSET UNITYSDK_OFFSET(0x1C2CACE0)
#define RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2CA330)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesSummaryPlayerNominate_TypeDefinitionIndex = 66675;

	class PlanetFesSummaryPlayerNominate : public ::System::Object
	{
	public:
		::RPG::GameCore::PlanetFesSummaryRow* _Config; // 0x10
		::RPG::GameCore::PlanetFesSummaryNominateType _NominateType_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesSummaryPlayerNominate* Create(::RPG::GameCore::PlanetFesSummaryRow* a1)
		{
			return ((::RPG::Client::PlanetFesSummaryPlayerNominate*(*)(::RPG::GameCore::PlanetFesSummaryRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_CREATE_OFFSET))(a1);
		}

		::System::Boolean IsSatisfy(::RPG::Client::PlanetFesSummaryData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesSummaryData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_ISSATISFY_OFFSET))(this, a1);
		}

		::System::String* GetTitle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_GETTITLE_OFFSET))(this);
		}

		::System::String* GetDesc(::RPG::Client::PlanetFesSummaryData* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::PlanetFesSummaryData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_GETDESC_OFFSET))(this, a1);
		}

		::RPG::GameCore::PlanetFesSummaryNominateType get_NominateType()
		{
			return ((::RPG::GameCore::PlanetFesSummaryNominateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_GET_NOMINATETYPE_OFFSET))(this);
		}

		::System::Void set_NominateType(::RPG::GameCore::PlanetFesSummaryNominateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesSummaryNominateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYPLAYERNOMINATE_SET_NOMINATETYPE_OFFSET))(this, a1);
		}
	};
}
