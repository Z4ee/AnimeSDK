#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_66.h"
#include "unitysdk/RPG/GameCore/RogueTournCollectionExhibitionPropFloor.h"
#include "unitysdk/System/Object.h"

class Class_1_35B19D34B208E77E_23;
namespace RPG::Client { class IRogueTournCollectionExhibitionBoothData; }
namespace RPG::GameCore { class RogueTournCollectionConfigRow; }

#define RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA_GET_BOOTHID_OFFSET UNITYSDK_OFFSET(0xA385040)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA_GET_DISPLAYEDITEMID_OFFSET UNITYSDK_OFFSET(0xA385160)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA_GET_HASITEMDISPLAYED_OFFSET UNITYSDK_OFFSET(0xA385150)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA_GET_PROPFLOOR_OFFSET UNITYSDK_OFFSET(0xA385050)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA3850F0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA_ISSAMEBOOTH_OFFSET UNITYSDK_OFFSET(0xA384FC0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA384F60)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA384F50)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournCollectionBoothData_TypeDefinitionIndex = 55083;

	class RogueTournCollectionBoothData : public ::System::Object
	{
	public:
		::System::UInt32 _BoothID; // 0x10
		::System::UInt32 _DisplayedCollectionID; // 0x14
		::Enum_3_0A3761FE34514D6C_66 _Status; // 0x18

		::System::Void _ctor(::System::UInt32 boothID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA__CTOR_OFFSET))(this, boothID);
		}

		::System::Void Sync(::Class_1_35B19D34B208E77E_23* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_35B19D34B208E77E_23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA_SYNC_OFFSET))(this, proto);
		}

		::System::Boolean IsSameBooth(::RPG::Client::IRogueTournCollectionExhibitionBoothData* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournCollectionExhibitionBoothData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA_ISSAMEBOOTH_OFFSET))(this, other);
		}

		::System::UInt32 get_BoothID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA_GET_BOOTHID_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournCollectionExhibitionPropFloor get_PropFloor()
		{
			return ((::RPG::GameCore::RogueTournCollectionExhibitionPropFloor(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA_GET_PROPFLOOR_OFFSET))(this);
		}

		::System::Boolean get_HasItemDisplayed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA_GET_HASITEMDISPLAYED_OFFSET))(this);
		}

		::System::UInt32 get_DisplayedItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA_GET_DISPLAYEDITEMID_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournCollectionConfigRow* get__Row()
		{
			return ((::RPG::GameCore::RogueTournCollectionConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA_GET__ROW_OFFSET))(this);
		}
	};
}
