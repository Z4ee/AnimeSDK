#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674.h"
#include "unitysdk/System/Object.h"

class Class_1_0DBDDE68AC58CF23;

#define RPG_CLIENT_PLAYERDIARYITEMDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x9FE5650)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_GET_CONTENTPARAM_OFFSET UNITYSDK_OFFSET(0x9FE5670)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9FE5610)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9FE5630)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_ISDATAVALID_OFFSET UNITYSDK_OFFSET(0x9FE53D0)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_SET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x9FE5660)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_SET_CONTENTPARAM_OFFSET UNITYSDK_OFFSET(0x9FE5680)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_SET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9FE5620)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x9FE5640)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9FE4F10)
#define RPG_CLIENT_PLAYERDIARYITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FE4F00)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerDiaryItemData_TypeDefinitionIndex = 52189;

	class PlayerDiaryItemData : public ::System::Object
	{
	public:
		::Enum_3_63C076C405BE0674 _Type_k__BackingField; // 0x10
		::System::UInt32 _ContentID_k__BackingField; // 0x14
		::System::UInt32 _ContentParam_k__BackingField; // 0x18
		::System::Int64 _TimeStamp_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_0DBDDE68AC58CF23* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0DBDDE68AC58CF23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_SYNC_OFFSET))(this, info);
		}

		::System::Boolean IsDataValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_ISDATAVALID_OFFSET))(this);
		}

		::System::Int64 get_TimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_GET_TIMESTAMP_OFFSET))(this);
		}

		::System::Void set_TimeStamp(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_SET_TIMESTAMP_OFFSET))(this, value);
		}

		::Enum_3_63C076C405BE0674 get_Type()
		{
			return ((::Enum_3_63C076C405BE0674(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Enum_3_63C076C405BE0674 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_SET_TYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_GET_CONTENTID_OFFSET))(this);
		}

		::System::Void set_ContentID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_SET_CONTENTID_OFFSET))(this, value);
		}

		::System::UInt32 get_ContentParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_GET_CONTENTPARAM_OFFSET))(this);
		}

		::System::Void set_ContentParam(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_SET_CONTENTPARAM_OFFSET))(this, value);
		}
	};
}
