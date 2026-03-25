#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaLegendRowType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournPersonaRoomAttributeData; }

#define RPG_CLIENT_ROGUETOURNPERSONALEGENDATTRIBUTEROW_CREATE_OFFSET UNITYSDK_OFFSET(0xA3BDF20)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDATTRIBUTEROW_GET_ATTRIBUTEDATA_OFFSET UNITYSDK_OFFSET(0xA3BDEC0)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDATTRIBUTEROW_GET_ROWTYPE_OFFSET UNITYSDK_OFFSET(0xA3BDEB0)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDATTRIBUTEROW__CTOR_OFFSET UNITYSDK_OFFSET(0xA3BDFA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaLegendAttributeRow_TypeDefinitionIndex = 59764;

	class RogueTournPersonaLegendAttributeRow : public ::System::Object
	{
	public:
		::System::UInt32 _AttributeID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDATTRIBUTEROW__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaLegendRowType get_RowType()
		{
			return ((::RPG::Client::RogueTournPersonaLegendRowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDATTRIBUTEROW_GET_ROWTYPE_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaRoomAttributeData* get_AttributeData()
		{
			return ((::RPG::Client::RogueTournPersonaRoomAttributeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDATTRIBUTEROW_GET_ATTRIBUTEDATA_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournPersonaLegendAttributeRow* Create(::System::UInt32 attributeID)
		{
			return ((::RPG::Client::RogueTournPersonaLegendAttributeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDATTRIBUTEROW_CREATE_OFFSET))(attributeID);
		}
	};
}
