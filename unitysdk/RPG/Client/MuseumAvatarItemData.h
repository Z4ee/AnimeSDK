#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MuseumCollectionItemStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class EventStuffConfigRow; }
namespace RPG::GameCore { class MuseumStuffRow; }
namespace System { class String; }

#define RPG_CLIENT_MUSEUMAVATARITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1B6FF240)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1B6FF520)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_EVIDENCEINFOTEXTID_OFFSET UNITYSDK_OFFSET(0x1B6FF4B0)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B6FF6D0)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0x1B6FF580)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_MISSIONID_OFFSET UNITYSDK_OFFSET(0x1B6FF320)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_MISSIONSTARTSTRING_OFFSET UNITYSDK_OFFSET(0x1B6FF340)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_MUSEUMSTUFFROW_OFFSET UNITYSDK_OFFSET(0x1B6FF3D0)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1B6FF6F0)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_STORYDESC_OFFSET UNITYSDK_OFFSET(0x1B6FF360)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B6FF6E0)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_SET_MISSIONID_OFFSET UNITYSDK_OFFSET(0x1B6FF330)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_SET_MISSIONSTARTSTRING_OFFSET UNITYSDK_OFFSET(0x1B6FF350)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1B6FF700)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_UPDATEEVENTDATA_OFFSET UNITYSDK_OFFSET(0x1B6FF2A0)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6FF230)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumAvatarItemData_TypeDefinitionIndex = 66368;

	class MuseumAvatarItemData : public ::System::Object
	{
	public:
		::RPG::Client::ItemData* _ItemData; // 0x10
		::System::String* _MissionStartString_k__BackingField; // 0x18
		::RPG::GameCore::MuseumStuffRow* _MuseumStuffRow; // 0x20
		::System::UInt32 _MissionID_k__BackingField; // 0x28
		::RPG::Client::MuseumCollectionItemStatus _Status_k__BackingField; // 0x2C
		::System::Boolean TakenCollectReward; // 0x30
		::System::UInt32 _ID_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MuseumAvatarItemData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::MuseumAvatarItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_CREATE_OFFSET))(a1);
		}

		::System::Void UpdateEventData(::RPG::GameCore::EventStuffConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventStuffConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_UPDATEEVENTDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_MissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_MISSIONID_OFFSET))(this);
		}

		::System::Void set_MissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_SET_MISSIONID_OFFSET))(this, a1);
		}

		::System::String* get_MissionStartString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_MISSIONSTARTSTRING_OFFSET))(this);
		}

		::System::Void set_MissionStartString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_SET_MISSIONSTARTSTRING_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_StoryDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_STORYDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_EvidenceInfoTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_EVIDENCEINFOTEXTID_OFFSET))(this);
		}

		::System::UInt32 get_DisplayOrder()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_DISPLAYORDER_OFFSET))(this);
		}

		::RPG::Client::ItemData* get_ItemData()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_ITEMDATA_OFFSET))(this);
		}

		::RPG::GameCore::MuseumStuffRow* get_MuseumStuffRow()
		{
			return ((::RPG::GameCore::MuseumStuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_MUSEUMSTUFFROW_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::MuseumCollectionItemStatus get_Status()
		{
			return ((::RPG::Client::MuseumCollectionItemStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::MuseumCollectionItemStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumCollectionItemStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_SET_STATUS_OFFSET))(this, a1);
		}
	};
}
