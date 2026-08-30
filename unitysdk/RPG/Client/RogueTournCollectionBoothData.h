#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_70.h"
#include "unitysdk/RPG/GameCore/RogueTournCollectionExhibitionPropFloor.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_84;
namespace RPG::Client { class IRogueTournCollectionExhibitionBoothData; }
namespace RPG::GameCore { class RogueTournCollectionConfigRow; }

#define RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA_GET_BOOTHID_OFFSET UNITYSDK_OFFSET(0xDF47190)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA_GET_DISPLAYEDITEMID_OFFSET UNITYSDK_OFFSET(0xDF47320)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA_GET_HASITEMDISPLAYED_OFFSET UNITYSDK_OFFSET(0xDF472D0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA_GET_PROPFLOOR_OFFSET UNITYSDK_OFFSET(0xDF471D0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xDF47270)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA_ISSAMEBOOTH_OFFSET UNITYSDK_OFFSET(0xDF470B0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xDF47050)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDF47040)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournCollectionBoothData_TypeDefinitionIndex = 67567;

	class RogueTournCollectionBoothData : public ::System::Object
	{
	public:
		::Enum_3_0A3761FE34514D6C_70 _Status; // 0x10
		::System::UInt32 _DisplayedCollectionID; // 0x14
		::System::UInt32 _BoothID; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_1CBA230307F9C289_84* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_84*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Boolean IsSameBooth(::RPG::Client::IRogueTournCollectionExhibitionBoothData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournCollectionExhibitionBoothData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONBOOTHDATA_ISSAMEBOOTH_OFFSET))(this, a1);
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
