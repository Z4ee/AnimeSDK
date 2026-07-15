#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GuideType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConditionChecker; }
namespace RPG::GameCore { class GameplayGuideDataConfigRow; }
namespace RPG::GameCore { class GameplayGuideTabConfigRow; }
namespace RPG::GameCore { class MappingInfoRow; }
namespace System { class String; }

#define RPG_CLIENT_HANDBOOKGUIDEDATA_CANQUICKGO_OFFSET UNITYSDK_OFFSET(0x18FD5230)
#define RPG_CLIENT_HANDBOOKGUIDEDATA_CANTELEPORT_OFFSET UNITYSDK_OFFSET(0x18FD4E10)
#define RPG_CLIENT_HANDBOOKGUIDEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x18FD4A80)
#define RPG_CLIENT_HANDBOOKGUIDEDATA_GETLOCKREASON_OFFSET UNITYSDK_OFFSET(0x18FD55A0)
#define RPG_CLIENT_HANDBOOKGUIDEDATA_GETMAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0x18FD5000)
#define RPG_CLIENT_HANDBOOKGUIDEDATA_GETQUICKGOENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x18FD5440)
#define RPG_CLIENT_HANDBOOKGUIDEDATA_GETQUICKGONEXTBEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x18FD54F0)
#define RPG_CLIENT_HANDBOOKGUIDEDATA_GETWORLDID_OFFSET UNITYSDK_OFFSET(0x18FD5170)
#define RPG_CLIENT_HANDBOOKGUIDEDATA_GET_GUIDETYPE_OFFSET UNITYSDK_OFFSET(0x18FD4DC0)
#define RPG_CLIENT_HANDBOOKGUIDEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x18FD5C60)
#define RPG_CLIENT_HANDBOOKGUIDEDATA_GET_ISENTRANCEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x18FD5E50)
#define RPG_CLIENT_HANDBOOKGUIDEDATA_GET_ISQUICKGOUNLOCKED_OFFSET UNITYSDK_OFFSET(0x18FD5D90)
#define RPG_CLIENT_HANDBOOKGUIDEDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x18FD5EA0)
#define RPG_CLIENT_HANDBOOKGUIDEDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x18FD5D10)
#define RPG_CLIENT_HANDBOOKGUIDEDATA_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x18FD5C80)
#define RPG_CLIENT_HANDBOOKGUIDEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x18FD5CD0)
#define RPG_CLIENT_HANDBOOKGUIDEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x18FD4B80)
#define RPG_CLIENT_HANDBOOKGUIDEDATA_GET_TYPEROW_OFFSET UNITYSDK_OFFSET(0x18FD5CF0)
#define RPG_CLIENT_HANDBOOKGUIDEDATA_ISOPENDAY_OFFSET UNITYSDK_OFFSET(0x18FD4BD0)
#define RPG_CLIENT_HANDBOOKGUIDEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x18FD5C70)
#define RPG_CLIENT_HANDBOOKGUIDEDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x18FD5CE0)
#define RPG_CLIENT_HANDBOOKGUIDEDATA_SET_TYPEROW_OFFSET UNITYSDK_OFFSET(0x18FD5D00)
#define RPG_CLIENT_HANDBOOKGUIDEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18FD4B70)
#define RPG_CLIENT_HANDBOOKGUIDEDATA__ISLOCKEDBYENTRANCE_OFFSET UNITYSDK_OFFSET(0x18FD58A0)
#define RPG_CLIENT_HANDBOOKGUIDEDATA__ISLOCKEDBYMISSION_OFFSET UNITYSDK_OFFSET(0x18FD56B0)
#define RPG_CLIENT_HANDBOOKGUIDEDATA__ISLOCKEDBYROGUETOURN_OFFSET UNITYSDK_OFFSET(0x18FD5B80)
#define RPG_CLIENT_HANDBOOKGUIDEDATA__ISLOCKEDBYTELEPORT_OFFSET UNITYSDK_OFFSET(0x18FD5A30)
#define RPG_CLIENT_HANDBOOKGUIDEDATA__ISQUICKGOTOUNLOCKED_OFFSET UNITYSDK_OFFSET(0x18FD53A0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookGuideData_TypeDefinitionIndex = 62700;

	class HandbookGuideData : public ::System::Object
	{
	public:
		::RPG::GameCore::GameplayGuideDataConfigRow* _Row_k__BackingField; // 0x10
		::RPG::Client::ConditionChecker* _MissionLockChecker; // 0x18
		::RPG::GameCore::GameplayGuideTabConfigRow* _TypeRow_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::HandbookGuideData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::HandbookGuideData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA_CREATE_OFFSET))(a1);
		}

		::System::Boolean IsOpenDay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA_ISOPENDAY_OFFSET))(this);
		}

		::System::Boolean CanTeleport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA_CANTELEPORT_OFFSET))(this);
		}

		::RPG::GameCore::MappingInfoRow* GetMappingInfoRow()
		{
			return ((::RPG::GameCore::MappingInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA_GETMAPPINGINFOROW_OFFSET))(this);
		}

		::System::UInt32 GetWorldID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA_GETWORLDID_OFFSET))(this);
		}

		::System::Boolean CanQuickGo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA_CANQUICKGO_OFFSET))(this);
		}

		::System::UInt32 GetQuickGoEndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA_GETQUICKGOENDTIMESTAMP_OFFSET))(this);
		}

		::System::UInt32 GetQuickGoNextBeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA_GETQUICKGONEXTBEGINTIMESTAMP_OFFSET))(this);
		}

		::System::String* GetLockReason()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA_GETLOCKREASON_OFFSET))(this);
		}

		::System::Boolean _IsLockedByMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA__ISLOCKEDBYMISSION_OFFSET))(this);
		}

		::System::Boolean _IsLockedByEntrance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA__ISLOCKEDBYENTRANCE_OFFSET))(this);
		}

		::System::Boolean _IsLockedByTeleport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA__ISLOCKEDBYTELEPORT_OFFSET))(this);
		}

		::System::Boolean _IsLockedByRogueTourn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA__ISLOCKEDBYROGUETOURN_OFFSET))(this);
		}

		::System::Boolean _IsQuickGotoUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA__ISQUICKGOTOUNLOCKED_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TypeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA_GET_TYPEID_OFFSET))(this);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA_GET_ORDER_OFFSET))(this);
		}

		::RPG::GameCore::GameplayGuideDataConfigRow* get_Row()
		{
			return ((::RPG::GameCore::GameplayGuideDataConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::GameplayGuideDataConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameplayGuideDataConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA_SET_ROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameplayGuideTabConfigRow* get_TypeRow()
		{
			return ((::RPG::GameCore::GameplayGuideTabConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA_GET_TYPEROW_OFFSET))(this);
		}

		::System::Void set_TypeRow(::RPG::GameCore::GameplayGuideTabConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameplayGuideTabConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA_SET_TYPEROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::GuideType get_GuideType()
		{
			return ((::RPG::GameCore::GuideType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA_GET_GUIDETYPE_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsQuickGoUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA_GET_ISQUICKGOUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsEntranceUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA_GET_ISENTRANCEUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEDATA_GET_ISSHOW_OFFSET))(this);
		}
	};
}
