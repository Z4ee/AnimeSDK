#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_28.h"
#include "unitysdk/System/Object.h"

class Class_1_76D163FB7972360A_1;
namespace RPG::GameCore { class RogueMapRow; }
namespace RPG::GameCore { class RogueRoomRow; }

#define RPG_CLIENT_ROGUESITEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB094110)
#define RPG_CLIENT_ROGUESITEDATA_GETMAPPOSX_OFFSET UNITYSDK_OFFSET(0xB094150)
#define RPG_CLIENT_ROGUESITEDATA_GETMAPPOSY_OFFSET UNITYSDK_OFFSET(0xB094240)
#define RPG_CLIENT_ROGUESITEDATA_GETNEXTSITEIDARRAY_OFFSET UNITYSDK_OFFSET(0xB06DCE0)
#define RPG_CLIENT_ROGUESITEDATA_GETROGUEHIDDENROOMTYPE_OFFSET UNITYSDK_OFFSET(0xB06DF60)
#define RPG_CLIENT_ROGUESITEDATA_GETROGUEROOMTYPE_OFFSET UNITYSDK_OFFSET(0xB06DEA0)
#define RPG_CLIENT_ROGUESITEDATA_GET_HIDDENROOMID_OFFSET UNITYSDK_OFFSET(0xB094460)
#define RPG_CLIENT_ROGUESITEDATA_GET_HIDDENROOMSTATUS_OFFSET UNITYSDK_OFFSET(0xB094480)
#define RPG_CLIENT_ROGUESITEDATA_GET_MAPID_OFFSET UNITYSDK_OFFSET(0xB0943E0)
#define RPG_CLIENT_ROGUESITEDATA_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0xB094420)
#define RPG_CLIENT_ROGUESITEDATA_GET_ROOMROW_OFFSET UNITYSDK_OFFSET(0xB06E060)
#define RPG_CLIENT_ROGUESITEDATA_GET_ROOMSTATUS_OFFSET UNITYSDK_OFFSET(0xB094440)
#define RPG_CLIENT_ROGUESITEDATA_GET_SITEID_OFFSET UNITYSDK_OFFSET(0xB094400)
#define RPG_CLIENT_ROGUESITEDATA_HASNEXTSITE_OFFSET UNITYSDK_OFFSET(0xB0942A0)
#define RPG_CLIENT_ROGUESITEDATA_ISSTARTSITE_OFFSET UNITYSDK_OFFSET(0xB06E580)
#define RPG_CLIENT_ROGUESITEDATA_REFRESHROOMS_OFFSET UNITYSDK_OFFSET(0xB07DF50)
#define RPG_CLIENT_ROGUESITEDATA_SET_HIDDENROOMID_OFFSET UNITYSDK_OFFSET(0xB094470)
#define RPG_CLIENT_ROGUESITEDATA_SET_HIDDENROOMSTATUS_OFFSET UNITYSDK_OFFSET(0xB094490)
#define RPG_CLIENT_ROGUESITEDATA_SET_MAPID_OFFSET UNITYSDK_OFFSET(0xB0943F0)
#define RPG_CLIENT_ROGUESITEDATA_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0xB094430)
#define RPG_CLIENT_ROGUESITEDATA_SET_ROOMSTATUS_OFFSET UNITYSDK_OFFSET(0xB094450)
#define RPG_CLIENT_ROGUESITEDATA_SET_SITEID_OFFSET UNITYSDK_OFFSET(0xB094410)
#define RPG_CLIENT_ROGUESITEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB06D890)
#define RPG_CLIENT_ROGUESITEDATA__INITROOMROW_OFFSET UNITYSDK_OFFSET(0xB094360)
#define RPG_CLIENT_ROGUESITEDATA__TRYINITSITEROW_OFFSET UNITYSDK_OFFSET(0xB0941B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueSiteData_TypeDefinitionIndex = 62164;

	class RogueSiteData : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueRoomRow* _RoomRow; // 0x10
		::RPG::GameCore::RogueMapRow* _SiteRow; // 0x18
		::RPG::GameCore::RogueRoomRow* _HiddenRoomRow; // 0x20
		::System::UInt32 _RoomID_k__BackingField; // 0x28
		::Enum_3_4608E37A1B3D374A_28 _HiddenRoomStatus_k__BackingField; // 0x2C
		::System::UInt32 _SiteID_k__BackingField; // 0x30
		::System::UInt32 _MapID_k__BackingField; // 0x34
		::System::UInt32 _HiddenRoomID_k__BackingField; // 0x38
		::Enum_3_4608E37A1B3D374A_28 _RoomStatus_k__BackingField; // 0x3C

		::System::Void _ctor(::System::UInt32 mapID, ::Class_1_76D163FB7972360A_1* rogueSite)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_76D163FB7972360A_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA__CTOR_OFFSET))(this, mapID, rogueSite);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshRooms(::Class_1_76D163FB7972360A_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_76D163FB7972360A_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_REFRESHROOMS_OFFSET))(this, proto);
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

		::Enum_3_4608E37A1B3D374A_28 get_RoomStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_28(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_ROOMSTATUS_OFFSET))(this);
		}

		::System::Void set_RoomStatus(::Enum_3_4608E37A1B3D374A_28 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_28))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_ROOMSTATUS_OFFSET))(this, value);
		}

		::System::UInt32 get_HiddenRoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_HIDDENROOMID_OFFSET))(this);
		}

		::System::Void set_HiddenRoomID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_HIDDENROOMID_OFFSET))(this, value);
		}

		::Enum_3_4608E37A1B3D374A_28 get_HiddenRoomStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_28(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_HIDDENROOMSTATUS_OFFSET))(this);
		}

		::System::Void set_HiddenRoomStatus(::Enum_3_4608E37A1B3D374A_28 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_28))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_HIDDENROOMSTATUS_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueRoomRow* get_RoomRow()
		{
			return ((::RPG::GameCore::RogueRoomRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_ROOMROW_OFFSET))(this);
		}
	};
}
