#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaBaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class IRogueTournPersonaGameLevelRoom; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNPERSONAPUMANPREPAREVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1C7A4650)
#define RPG_CLIENT_ROGUETOURNPERSONAPUMANPREPAREVIEWMODEL_GET_ROOMDESCTEXTID_OFFSET UNITYSDK_OFFSET(0x1C7A4BE0)
#define RPG_CLIENT_ROGUETOURNPERSONAPUMANPREPAREVIEWMODEL_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0x1C7A4B00)
#define RPG_CLIENT_ROGUETOURNPERSONAPUMANPREPAREVIEWMODEL_GET_ROOMINDEX_OFFSET UNITYSDK_OFFSET(0x1C7A4B40)
#define RPG_CLIENT_ROGUETOURNPERSONAPUMANPREPAREVIEWMODEL_GET_ROOMNAMETEXTID_OFFSET UNITYSDK_OFFSET(0x1C7A4B80)
#define RPG_CLIENT_ROGUETOURNPERSONAPUMANPREPAREVIEWMODEL_TRYCREATEFORCURRENTROOM_OFFSET UNITYSDK_OFFSET(0x1C7A4170)
#define RPG_CLIENT_ROGUETOURNPERSONAPUMANPREPAREVIEWMODEL_TRYCREATETOASTFORCURRENTROOM_OFFSET UNITYSDK_OFFSET(0x1C7A44C0)
#define RPG_CLIENT_ROGUETOURNPERSONAPUMANPREPAREVIEWMODEL_TRYSHOWDIALOGFORCURRENTROOM_OFFSET UNITYSDK_OFFSET(0x1C7A4050)
#define RPG_CLIENT_ROGUETOURNPERSONAPUMANPREPAREVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7A4AF0)
#define RPG_CLIENT_ROGUETOURNPERSONAPUMANPREPAREVIEWMODEL__ISPUMANROOM_OFFSET UNITYSDK_OFFSET(0x1C7A4520)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaPumanPrepareViewModel_TypeDefinitionIndex = 72832;

	class RogueTournPersonaPumanPrepareViewModel : public ::RPG::Client::RogueTournPersonaBaseViewModel
	{
	public:
		// static const ::System::UInt32 StorageRoomCompositionType = 0x18; // 0x0
		// static const ::System::String* _DialogPath; // 0x0
		::System::UInt32 _RoomID; // 0x20
		::System::UInt32 _RoomIndex; // 0x24
		::RPG::Client::TextID _RoomDescTextID; // 0x28
		::RPG::Client::TextID _RoomNameTextID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAPUMANPREPAREVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::System::Boolean TryShowDialogForCurrentRoom()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAPUMANPREPAREVIEWMODEL_TRYSHOWDIALOGFORCURRENTROOM_OFFSET))();
		}

		static ::RPG::Client::RogueTournPersonaPumanPrepareViewModel* TryCreateToastForCurrentRoom()
		{
			return ((::RPG::Client::RogueTournPersonaPumanPrepareViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAPUMANPREPAREVIEWMODEL_TRYCREATETOASTFORCURRENTROOM_OFFSET))();
		}

		static ::System::Boolean TryCreateForCurrentRoom(::RPG::Client::RogueTournPersonaPumanPrepareViewModel*& a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournPersonaPumanPrepareViewModel*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAPUMANPREPAREVIEWMODEL_TRYCREATEFORCURRENTROOM_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournPersonaPumanPrepareViewModel* Create(::RPG::Client::IRogueTournPersonaGameLevelRoom* a1)
		{
			return ((::RPG::Client::RogueTournPersonaPumanPrepareViewModel*(*)(::RPG::Client::IRogueTournPersonaGameLevelRoom*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAPUMANPREPAREVIEWMODEL_CREATE_OFFSET))(a1);
		}

		static ::System::Boolean _IsPumanRoom(::RPG::Client::IRogueTournPersonaGameLevelRoom* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournPersonaGameLevelRoom*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAPUMANPREPAREVIEWMODEL__ISPUMANROOM_OFFSET))(a1);
		}

		::System::UInt32 get_RoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAPUMANPREPAREVIEWMODEL_GET_ROOMID_OFFSET))(this);
		}

		::System::UInt32 get_RoomIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAPUMANPREPAREVIEWMODEL_GET_ROOMINDEX_OFFSET))(this);
		}

		::RPG::Client::TextID get_RoomNameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAPUMANPREPAREVIEWMODEL_GET_ROOMNAMETEXTID_OFFSET))(this);
		}

		::RPG::Client::TextID get_RoomDescTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAPUMANPREPAREVIEWMODEL_GET_ROOMDESCTEXTID_OFFSET))(this);
		}
	};
}
