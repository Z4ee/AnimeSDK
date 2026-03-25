#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_29.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_45;
namespace RPG::GameCore { class RogueMapRow; }
namespace RPG::GameCore { class RogueRoomRow; }

#define RPG_CLIENT_ROGUESITEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA35D6F0)
#define RPG_CLIENT_ROGUESITEDATA_GETMAPPOSX_OFFSET UNITYSDK_OFFSET(0xA35D730)
#define RPG_CLIENT_ROGUESITEDATA_GETMAPPOSY_OFFSET UNITYSDK_OFFSET(0xA35D820)
#define RPG_CLIENT_ROGUESITEDATA_GETNEXTSITEIDARRAY_OFFSET UNITYSDK_OFFSET(0xA35D880)
#define RPG_CLIENT_ROGUESITEDATA_GETROGUEHIDDENROOMTYPE_OFFSET UNITYSDK_OFFSET(0xA35DB60)
#define RPG_CLIENT_ROGUESITEDATA_GETROGUEROOMTYPE_OFFSET UNITYSDK_OFFSET(0xA35DA20)
#define RPG_CLIENT_ROGUESITEDATA_GET_HIDDENROOMID_OFFSET UNITYSDK_OFFSET(0xA35DC70)
#define RPG_CLIENT_ROGUESITEDATA_GET_HIDDENROOMSTATUS_OFFSET UNITYSDK_OFFSET(0xA35DC90)
#define RPG_CLIENT_ROGUESITEDATA_GET_MAPID_OFFSET UNITYSDK_OFFSET(0xA35DBF0)
#define RPG_CLIENT_ROGUESITEDATA_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0xA35DC30)
#define RPG_CLIENT_ROGUESITEDATA_GET_ROOMROW_OFFSET UNITYSDK_OFFSET(0xA35DCB0)
#define RPG_CLIENT_ROGUESITEDATA_GET_ROOMSTATUS_OFFSET UNITYSDK_OFFSET(0xA35DC50)
#define RPG_CLIENT_ROGUESITEDATA_GET_SITEID_OFFSET UNITYSDK_OFFSET(0xA35DC10)
#define RPG_CLIENT_ROGUESITEDATA_HASNEXTSITE_OFFSET UNITYSDK_OFFSET(0xA35D900)
#define RPG_CLIENT_ROGUESITEDATA_ISSTARTSITE_OFFSET UNITYSDK_OFFSET(0xA35D9C0)
#define RPG_CLIENT_ROGUESITEDATA_REFRESHROOMS_OFFSET UNITYSDK_OFFSET(0xA346C50)
#define RPG_CLIENT_ROGUESITEDATA_SET_HIDDENROOMID_OFFSET UNITYSDK_OFFSET(0xA35DC80)
#define RPG_CLIENT_ROGUESITEDATA_SET_HIDDENROOMSTATUS_OFFSET UNITYSDK_OFFSET(0xA35DCA0)
#define RPG_CLIENT_ROGUESITEDATA_SET_MAPID_OFFSET UNITYSDK_OFFSET(0xA35DC00)
#define RPG_CLIENT_ROGUESITEDATA_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0xA35DC40)
#define RPG_CLIENT_ROGUESITEDATA_SET_ROOMSTATUS_OFFSET UNITYSDK_OFFSET(0xA35DC60)
#define RPG_CLIENT_ROGUESITEDATA_SET_SITEID_OFFSET UNITYSDK_OFFSET(0xA35DC20)
#define RPG_CLIENT_ROGUESITEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA35D670)
#define RPG_CLIENT_ROGUESITEDATA__INITROOMROW_OFFSET UNITYSDK_OFFSET(0xA35DAE0)
#define RPG_CLIENT_ROGUESITEDATA__TRYINITSITEROW_OFFSET UNITYSDK_OFFSET(0xA35D790)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueSiteData_TypeDefinitionIndex = 54976;

	class RogueSiteData : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueRoomRow* _HiddenRoomRow; // 0x10
		::RPG::GameCore::RogueRoomRow* _RoomRow; // 0x18
		::RPG::GameCore::RogueMapRow* _SiteRow; // 0x20
		::System::UInt32 _MapID_k__BackingField; // 0x28
		::System::UInt32 _RoomID_k__BackingField; // 0x2C
		::Enum_3_4608E37A1B3D374A_29 _RoomStatus_k__BackingField; // 0x30
		::System::UInt32 _SiteID_k__BackingField; // 0x34
		::System::UInt32 _HiddenRoomID_k__BackingField; // 0x38
		::Enum_3_4608E37A1B3D374A_29 _HiddenRoomStatus_k__BackingField; // 0x3C

		::System::Void _ctor(::System::UInt32 mapID, ::Class_1_352A8B3482C80E7D_45* rogueSite)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_352A8B3482C80E7D_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA__CTOR_OFFSET))(this, mapID, rogueSite);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshRooms(::Class_1_352A8B3482C80E7D_45* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_REFRESHROOMS_OFFSET))(this, proto);
		}

		::System::Single GetMapPosX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GETMAPPOSX_OFFSET))(this);
		}

		::System::Single GetMapPosY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GETMAPPOSY_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetNextSiteIDArray()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GETNEXTSITEIDARRAY_OFFSET))(this);
		}

		::System::Boolean HasNextSite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_HASNEXTSITE_OFFSET))(this);
		}

		::System::Boolean IsStartSite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_ISSTARTSITE_OFFSET))(this);
		}

		::System::Void _TryInitSiteRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA__TRYINITSITEROW_OFFSET))(this);
		}

		::System::UInt32 GetRogueRoomType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GETROGUEROOMTYPE_OFFSET))(this);
		}

		::System::Void _InitRoomRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA__INITROOMROW_OFFSET))(this);
		}

		::System::UInt32 GetRogueHiddenRoomType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GETROGUEHIDDENROOMTYPE_OFFSET))(this);
		}

		::System::UInt32 get_MapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_MAPID_OFFSET))(this);
		}

		::System::Void set_MapID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_MAPID_OFFSET))(this, value);
		}

		::System::UInt32 get_SiteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_SITEID_OFFSET))(this);
		}

		::System::Void set_SiteID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_SITEID_OFFSET))(this, value);
		}

		::System::UInt32 get_RoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_ROOMID_OFFSET))(this);
		}

		::System::Void set_RoomID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_ROOMID_OFFSET))(this, value);
		}

		::Enum_3_4608E37A1B3D374A_29 get_RoomStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_29(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_ROOMSTATUS_OFFSET))(this);
		}

		::System::Void set_RoomStatus(::Enum_3_4608E37A1B3D374A_29 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_29))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_ROOMSTATUS_OFFSET))(this, value);
		}

		::System::UInt32 get_HiddenRoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_HIDDENROOMID_OFFSET))(this);
		}

		::System::Void set_HiddenRoomID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_HIDDENROOMID_OFFSET))(this, value);
		}

		::Enum_3_4608E37A1B3D374A_29 get_HiddenRoomStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_29(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_HIDDENROOMSTATUS_OFFSET))(this);
		}

		::System::Void set_HiddenRoomStatus(::Enum_3_4608E37A1B3D374A_29 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_29))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_HIDDENROOMSTATUS_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueRoomRow* get_RoomRow()
		{
			return ((::RPG::GameCore::RogueRoomRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_ROOMROW_OFFSET))(this);
		}
	};
}
