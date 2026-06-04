#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_58.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicMarkType.h"
#include "unitysdk/RPG/GameCore/RogueMagicRoomType.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_58;
namespace System { class String; }

#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_MARKTYPE_OFFSET UNITYSDK_OFFSET(0xC7A2620)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC7A2680)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0xC7A25E0)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMINDEX_OFFSET UNITYSDK_OFFSET(0xC7A2600)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xC7A2660)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xC7A2640)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0xC7A26A0)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_MARKTYPE_OFFSET UNITYSDK_OFFSET(0xC7A2630)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_NAME_OFFSET UNITYSDK_OFFSET(0xC7A2690)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0xC7A25F0)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMINDEX_OFFSET UNITYSDK_OFFSET(0xC7A2610)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xC7A2670)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xC7A2650)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0xC7A26B0)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xC7A1B40)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC7A1B30)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicGameRoomInfo_TypeDefinitionIndex = 63028;

	class RogueMagicGameRoomInfo : public ::System::Object
	{
	public:
		::System::String* _ToastIconPath_k__BackingField; // 0x10
		::RPG::Client::TextID _Name_k__BackingField; // 0x18
		::System::UInt32 _RoomID_k__BackingField; // 0x28
		::System::UInt32 _RoomIndex_k__BackingField; // 0x2C
		::Enum_3_DB663931210BBC27_58 _Status_k__BackingField; // 0x30
		::RPG::GameCore::RogueMagicRoomType _RoomType_k__BackingField; // 0x34
		::RPG::GameCore::RogueMagicMarkType _MarkType_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_1CBA230307F9C289_58* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_58*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMID_OFFSET))(this);
		}

		::System::Void set_RoomID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoomIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMINDEX_OFFSET))(this);
		}

		::System::Void set_RoomIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMINDEX_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueMagicMarkType get_MarkType()
		{
			return ((::RPG::GameCore::RogueMagicMarkType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_MARKTYPE_OFFSET))(this);
		}

		::System::Void set_MarkType(::RPG::GameCore::RogueMagicMarkType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicMarkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_MARKTYPE_OFFSET))(this, a1);
		}

		::Enum_3_DB663931210BBC27_58 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_58(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_DB663931210BBC27_58 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_58))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_STATUS_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueMagicRoomType get_RoomType()
		{
			return ((::RPG::GameCore::RogueMagicRoomType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMTYPE_OFFSET))(this);
		}

		::System::Void set_RoomType(::RPG::GameCore::RogueMagicRoomType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicRoomType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_ToastIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_TOASTICONPATH_OFFSET))(this);
		}

		::System::Void set_ToastIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_TOASTICONPATH_OFFSET))(this, a1);
		}
	};
}
