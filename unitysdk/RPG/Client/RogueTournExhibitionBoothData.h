#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_70.h"
#include "unitysdk/RPG/GameCore/RogueExhibitionType.h"
#include "unitysdk/RPG/GameCore/RogueTournCollectionExhibitionPropFloor.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_83;
namespace RPG::Client { class IRogueTournCollectionExhibitionBoothData; }
namespace RPG::GameCore { class RogueTournExhibitionConfigRow; }

#define RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_GET_BOOTHID_OFFSET UNITYSDK_OFFSET(0x1AF12BA0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_GET_DISPLAYEDITEMID_OFFSET UNITYSDK_OFFSET(0x1AF12DD0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_GET_EXHIBITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1AF12BE0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_GET_HASITEMDISPLAYED_OFFSET UNITYSDK_OFFSET(0x1AF12D80)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_GET_PROPFLOOR_OFFSET UNITYSDK_OFFSET(0x1AF12CE0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1AF12C80)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_ISSAMEBOOTH_OFFSET UNITYSDK_OFFSET(0x1AF12AC0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1AF12A60)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF12A50)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournExhibitionBoothData_TypeDefinitionIndex = 67571;

	class RogueTournExhibitionBoothData : public ::System::Object
	{
	public:
		::System::UInt32 _BoothID; // 0x10
		::System::UInt32 _DisplayedExhibitionID; // 0x14
		::Enum_3_0A3761FE34514D6C_70 _Status; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_1CBA230307F9C289_83* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_83*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Boolean IsSameBooth(::RPG::Client::IRogueTournCollectionExhibitionBoothData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournCollectionExhibitionBoothData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONBOOTHDATA_ISSAMEBOOTH_OFFSET))(this, a1);
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
