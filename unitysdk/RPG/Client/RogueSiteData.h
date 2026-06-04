#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_27.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_50;
namespace RPG::GameCore { class RogueMapRow; }
namespace RPG::GameCore { class RogueRoomRow; }

#define RPG_CLIENT_ROGUESITEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7E4A40)
#define RPG_CLIENT_ROGUESITEDATA_GETMAPPOSX_OFFSET UNITYSDK_OFFSET(0xC7E4A80)
#define RPG_CLIENT_ROGUESITEDATA_GETMAPPOSY_OFFSET UNITYSDK_OFFSET(0xC7E4B70)
#define RPG_CLIENT_ROGUESITEDATA_GETNEXTSITEIDARRAY_OFFSET UNITYSDK_OFFSET(0xC7BE050)
#define RPG_CLIENT_ROGUESITEDATA_GETROGUEHIDDENROOMTYPE_OFFSET UNITYSDK_OFFSET(0xC7BE340)
#define RPG_CLIENT_ROGUESITEDATA_GETROGUEROOMTYPE_OFFSET UNITYSDK_OFFSET(0xC7BE280)
#define RPG_CLIENT_ROGUESITEDATA_GET_HIDDENROOMID_OFFSET UNITYSDK_OFFSET(0xC7E4D90)
#define RPG_CLIENT_ROGUESITEDATA_GET_HIDDENROOMSTATUS_OFFSET UNITYSDK_OFFSET(0xC7E4DB0)
#define RPG_CLIENT_ROGUESITEDATA_GET_MAPID_OFFSET UNITYSDK_OFFSET(0xC7E4D10)
#define RPG_CLIENT_ROGUESITEDATA_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0xC7E4D50)
#define RPG_CLIENT_ROGUESITEDATA_GET_ROOMROW_OFFSET UNITYSDK_OFFSET(0xC7BE4B0)
#define RPG_CLIENT_ROGUESITEDATA_GET_ROOMSTATUS_OFFSET UNITYSDK_OFFSET(0xC7E4D70)
#define RPG_CLIENT_ROGUESITEDATA_GET_SITEID_OFFSET UNITYSDK_OFFSET(0xC7E4D30)
#define RPG_CLIENT_ROGUESITEDATA_HASNEXTSITE_OFFSET UNITYSDK_OFFSET(0xC7E4BD0)
#define RPG_CLIENT_ROGUESITEDATA_ISSTARTSITE_OFFSET UNITYSDK_OFFSET(0xC7BE9F0)
#define RPG_CLIENT_ROGUESITEDATA_REFRESHROOMS_OFFSET UNITYSDK_OFFSET(0xC7CDF10)
#define RPG_CLIENT_ROGUESITEDATA_SET_HIDDENROOMID_OFFSET UNITYSDK_OFFSET(0xC7E4DA0)
#define RPG_CLIENT_ROGUESITEDATA_SET_HIDDENROOMSTATUS_OFFSET UNITYSDK_OFFSET(0xC7E4DC0)
#define RPG_CLIENT_ROGUESITEDATA_SET_MAPID_OFFSET UNITYSDK_OFFSET(0xC7E4D20)
#define RPG_CLIENT_ROGUESITEDATA_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0xC7E4D60)
#define RPG_CLIENT_ROGUESITEDATA_SET_ROOMSTATUS_OFFSET UNITYSDK_OFFSET(0xC7E4D80)
#define RPG_CLIENT_ROGUESITEDATA_SET_SITEID_OFFSET UNITYSDK_OFFSET(0xC7E4D40)
#define RPG_CLIENT_ROGUESITEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC7BDBD0)
#define RPG_CLIENT_ROGUESITEDATA__INITROOMROW_OFFSET UNITYSDK_OFFSET(0xC7E4C90)
#define RPG_CLIENT_ROGUESITEDATA__TRYINITSITEROW_OFFSET UNITYSDK_OFFSET(0xC7E4AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueSiteData_TypeDefinitionIndex = 63097;

	class RogueSiteData : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueRoomRow* _HiddenRoomRow; // 0x10
		::RPG::GameCore::RogueMapRow* _SiteRow; // 0x18
		::RPG::GameCore::RogueRoomRow* _RoomRow; // 0x20
		::System::UInt32 _RoomID_k__BackingField; // 0x28
		::System::UInt32 _MapID_k__BackingField; // 0x2C
		::Enum_3_4608E37A1B3D374A_27 _HiddenRoomStatus_k__BackingField; // 0x30
		::System::UInt32 _SiteID_k__BackingField; // 0x34
		::System::UInt32 _HiddenRoomID_k__BackingField; // 0x38
		::Enum_3_4608E37A1B3D374A_27 _RoomStatus_k__BackingField; // 0x3C

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_1CBA230307F9C289_50* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_1CBA230307F9C289_50*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshRooms(::Class_1_1CBA230307F9C289_50* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_50*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_REFRESHROOMS_OFFSET))(this, a1);
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

		::System::Void set_MapID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_MAPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SiteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_SITEID_OFFSET))(this);
		}

		::System::Void set_SiteID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_SITEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_ROOMID_OFFSET))(this);
		}

		::System::Void set_RoomID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_ROOMID_OFFSET))(this, a1);
		}

		::Enum_3_4608E37A1B3D374A_27 get_RoomStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_27(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_ROOMSTATUS_OFFSET))(this);
		}

		::System::Void set_RoomStatus(::Enum_3_4608E37A1B3D374A_27 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_27))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_ROOMSTATUS_OFFSET))(this, a1);
		}

		::System::UInt32 get_HiddenRoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_HIDDENROOMID_OFFSET))(this);
		}

		::System::Void set_HiddenRoomID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_HIDDENROOMID_OFFSET))(this, a1);
		}

		::Enum_3_4608E37A1B3D374A_27 get_HiddenRoomStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_27(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_HIDDENROOMSTATUS_OFFSET))(this);
		}

		::System::Void set_HiddenRoomStatus(::Enum_3_4608E37A1B3D374A_27 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_27))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_HIDDENROOMSTATUS_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueRoomRow* get_RoomRow()
		{
			return ((::RPG::GameCore::RogueRoomRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_ROOMROW_OFFSET))(this);
		}
	};
}
