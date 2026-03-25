#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_53.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicMarkType.h"
#include "unitysdk/RPG/GameCore/RogueMagicRoomType.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_53;
namespace System { class String; }

#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_MARKTYPE_OFFSET UNITYSDK_OFFSET(0xA31DD10)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA31DD70)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0xA31DCD0)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMINDEX_OFFSET UNITYSDK_OFFSET(0xA31DCF0)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xA31DD50)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xA31DD30)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0xA31DD90)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_MARKTYPE_OFFSET UNITYSDK_OFFSET(0xA31DD20)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA31DD80)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0xA31DCE0)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMINDEX_OFFSET UNITYSDK_OFFSET(0xA31DD00)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xA31DD60)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xA31DD40)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0xA31DDA0)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA31D200)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA31D1F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicGameRoomInfo_TypeDefinitionIndex = 54907;

	class RogueMagicGameRoomInfo : public ::System::Object
	{
	public:
		::System::String* _ToastIconPath_k__BackingField; // 0x10
		::System::UInt32 _RoomIndex_k__BackingField; // 0x18
		::Enum_3_DB663931210BBC27_53 _Status_k__BackingField; // 0x1C
		::System::UInt32 _RoomID_k__BackingField; // 0x20
		::RPG::GameCore::RogueMagicMarkType _MarkType_k__BackingField; // 0x24
		::RPG::Client::TextID _Name_k__BackingField; // 0x28
		::RPG::GameCore::RogueMagicRoomType _RoomType_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_352A8B3482C80E7D_53* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_53*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SYNC_OFFSET))(this, proto);
		}

		::System::UInt32 get_RoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMID_OFFSET))(this);
		}

		::System::Void set_RoomID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMID_OFFSET))(this, value);
		}

		::System::UInt32 get_RoomIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMINDEX_OFFSET))(this);
		}

		::System::Void set_RoomIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMINDEX_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueMagicMarkType get_MarkType()
		{
			return ((::RPG::GameCore::RogueMagicMarkType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_MARKTYPE_OFFSET))(this);
		}

		::System::Void set_MarkType(::RPG::GameCore::RogueMagicMarkType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicMarkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_MARKTYPE_OFFSET))(this, value);
		}

		::Enum_3_DB663931210BBC27_53 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_53(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_DB663931210BBC27_53 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_53))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_STATUS_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueMagicRoomType get_RoomType()
		{
			return ((::RPG::GameCore::RogueMagicRoomType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMTYPE_OFFSET))(this);
		}

		::System::Void set_RoomType(::RPG::GameCore::RogueMagicRoomType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicRoomType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMTYPE_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_ToastIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_TOASTICONPATH_OFFSET))(this);
		}

		::System::Void set_ToastIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_TOASTICONPATH_OFFSET))(this, value);
		}
	};
}
