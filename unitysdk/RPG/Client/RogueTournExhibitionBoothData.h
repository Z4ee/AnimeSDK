#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_66.h"
#include "unitysdk/RPG/GameCore/RogueExhibitionType.h"
#include "unitysdk/RPG/GameCore/RogueTournCollectionExhibitionPropFloor.h"
#include "unitysdk/System/Object.h"

class Class_1_35B19D34B208E77E_22;
namespace RPG::Client { class IRogueTournCollectionExhibitionBoothData; }
namespace RPG::GameCore { class RogueTournExhibitionConfigRow; }

#define RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_GET_BOOTHID_OFFSET UNITYSDK_OFFSET(0xA38B2F0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_GET_DISPLAYEDITEMID_OFFSET UNITYSDK_OFFSET(0xA38B4B0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_GET_EXHIBITIONTYPE_OFFSET UNITYSDK_OFFSET(0xA38B300)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_GET_HASITEMDISPLAYED_OFFSET UNITYSDK_OFFSET(0xA38B4A0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_GET_PROPFLOOR_OFFSET UNITYSDK_OFFSET(0xA38B400)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA38B3A0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_ISSAMEBOOTH_OFFSET UNITYSDK_OFFSET(0xA38B270)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA38B210)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA38B200)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournExhibitionBoothData_TypeDefinitionIndex = 55087;

	class RogueTournExhibitionBoothData : public ::System::Object
	{
	public:
		::System::UInt32 _BoothID; // 0x10
		::Enum_3_0A3761FE34514D6C_66 _Status; // 0x14
		::System::UInt32 _DisplayedExhibitionID; // 0x18

		::System::Void _ctor(::System::UInt32 boothID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA__CTOR_OFFSET))(this, boothID);
		}

		::System::Void Sync(::Class_1_35B19D34B208E77E_22* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_35B19D34B208E77E_22*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_SYNC_OFFSET))(this, proto);
		}

		::System::Boolean IsSameBooth(::RPG::Client::IRogueTournCollectionExhibitionBoothData* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournCollectionExhibitionBoothData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_ISSAMEBOOTH_OFFSET))(this, other);
		}

		::System::UInt32 get_BoothID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_GET_BOOTHID_OFFSET))(this);
		}

		::RPG::GameCore::RogueExhibitionType get_ExhibitionType()
		{
			return ((::RPG::GameCore::RogueExhibitionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_GET_EXHIBITIONTYPE_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournCollectionExhibitionPropFloor get_PropFloor()
		{
			return ((::RPG::GameCore::RogueTournCollectionExhibitionPropFloor(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_GET_PROPFLOOR_OFFSET))(this);
		}

		::System::Boolean get_HasItemDisplayed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_GET_HASITEMDISPLAYED_OFFSET))(this);
		}

		::System::UInt32 get_DisplayedItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_GET_DISPLAYEDITEMID_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournExhibitionConfigRow* get__Row()
		{
			return ((::RPG::GameCore::RogueTournExhibitionConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_GET__ROW_OFFSET))(this);
		}
	};
}
