#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaLegendRowType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournPersonaRoomCompositionTypeData; }

#define RPG_CLIENT_ROGUETOURNPERSONALEGENDROOMCOMPTYPEROW_CREATE_OFFSET UNITYSDK_OFFSET(0xDF8C230)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDROOMCOMPTYPEROW_GET_ROOMCOMPTYPEDATA_OFFSET UNITYSDK_OFFSET(0xDF8C140)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDROOMCOMPTYPEROW_GET_ROWTYPE_OFFSET UNITYSDK_OFFSET(0xDF8C0F0)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDROOMCOMPTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0xDF8C2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaLegendRoomCompTypeRow_TypeDefinitionIndex = 72822;

	class RogueTournPersonaLegendRoomCompTypeRow : public ::System::Object
	{
	public:
		::System::UInt32 _RoomCompType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDROOMCOMPTYPEROW__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaLegendRowType get_RowType()
		{
			return ((::RPG::Client::RogueTournPersonaLegendRowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDROOMCOMPTYPEROW_GET_ROWTYPE_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaRoomCompositionTypeData* get_RoomCompTypeData()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCompositionTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDROOMCOMPTYPEROW_GET_ROOMCOMPTYPEDATA_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournPersonaLegendRoomCompTypeRow* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournPersonaLegendRoomCompTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDROOMCOMPTYPEROW_CREATE_OFFSET))(a1);
		}
	};
}
