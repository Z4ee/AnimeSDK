#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleCollegeData_BattleCollegeStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_48;
namespace RPG::Client { class BattleCollegeAimData; }
namespace RPG::GameCore { class BattleCollegeConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLECOLLEGEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x9DFC2F0)
#define RPG_CLIENT_BATTLECOLLEGEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9DFBB20)
#define RPG_CLIENT_BATTLECOLLEGEDATA_GETAIMDATA_OFFSET UNITYSDK_OFFSET(0x9DFBDD0)
#define RPG_CLIENT_BATTLECOLLEGEDATA_GETFIRSTUNFINISHEDAIMDATA_OFFSET UNITYSDK_OFFSET(0x9DFBFE0)
#define RPG_CLIENT_BATTLECOLLEGEDATA_GET_AIMDATALIST_OFFSET UNITYSDK_OFFSET(0x9DFBEB0)
#define RPG_CLIENT_BATTLECOLLEGEDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x9DFC360)
#define RPG_CLIENT_BATTLECOLLEGEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9DFC340)
#define RPG_CLIENT_BATTLECOLLEGEDATA_GET_ISCLICKED_OFFSET UNITYSDK_OFFSET(0x9DFBC20)
#define RPG_CLIENT_BATTLECOLLEGEDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x9DFC860)
#define RPG_CLIENT_BATTLECOLLEGEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9DFC380)
#define RPG_CLIENT_BATTLECOLLEGEDATA_GET_STAGEINTRODESCLIST_OFFSET UNITYSDK_OFFSET(0x9DFC3A0)
#define RPG_CLIENT_BATTLECOLLEGEDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x9DFC840)
#define RPG_CLIENT_BATTLECOLLEGEDATA_INDEXOFAIMDATA_OFFSET UNITYSDK_OFFSET(0x9DFC110)
#define RPG_CLIENT_BATTLECOLLEGEDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x9DFC370)
#define RPG_CLIENT_BATTLECOLLEGEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x9DFC350)
#define RPG_CLIENT_BATTLECOLLEGEDATA_SET_ISCLICKED_OFFSET UNITYSDK_OFFSET(0x9DFBCF0)
#define RPG_CLIENT_BATTLECOLLEGEDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x9DFC390)
#define RPG_CLIENT_BATTLECOLLEGEDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x9DFC850)
#define RPG_CLIENT_BATTLECOLLEGEDATA_UPDATEAIMDATA_OFFSET UNITYSDK_OFFSET(0x9DFC240)
#define RPG_CLIENT_BATTLECOLLEGEDATA_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x9DFBBB0)
#define RPG_CLIENT_BATTLECOLLEGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9DFBB10)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleCollegeData_TypeDefinitionIndex = 57908;

	class BattleCollegeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BattleCollegeAimData*>* _AimDataList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* _StageIntroDescList; // 0x18
		::RPG::GameCore::BattleCollegeConfigRow* _Row_k__BackingField; // 0x20
		::RPG::Client::BattleCollegeData_BattleCollegeStatus _Status_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x2C
		::System::UInt32 _GroupID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleCollegeData* Create(::System::UInt32 ID)
		{
			return ((::RPG::Client::BattleCollegeData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_CREATE_OFFSET))(ID);
		}

		::System::Void UpdateStatus(::RPG::Client::BattleCollegeData_BattleCollegeStatus changeStatus)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleCollegeData_BattleCollegeStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_UPDATESTATUS_OFFSET))(this, changeStatus);
		}

		::RPG::Client::BattleCollegeAimData* GetAimData(::System::UInt32 aimID)
		{
			return ((::RPG::Client::BattleCollegeAimData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_GETAIMDATA_OFFSET))(this, aimID);
		}

		::RPG::Client::BattleCollegeAimData* GetFirstUnfinishedAimData()
		{
			return ((::RPG::Client::BattleCollegeAimData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_GETFIRSTUNFINISHEDAIMDATA_OFFSET))(this);
		}

		::System::Int32 IndexOfAimData(::System::UInt32 aimID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_INDEXOFAIMDATA_OFFSET))(this, aimID);
		}

		::System::Void UpdateAimData(::Class_1_7AB88D713F5121B3_48* param)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7AB88D713F5121B3_48*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_UPDATEAIMDATA_OFFSET))(this, param);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_CLEAR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_SET_GROUPID_OFFSET))(this, value);
		}

		::RPG::GameCore::BattleCollegeConfigRow* get_Row()
		{
			return ((::RPG::GameCore::BattleCollegeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::BattleCollegeConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleCollegeConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_SET_ROW_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* get_StageIntroDescList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_GET_STAGEINTRODESCLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattleCollegeAimData*>* get_AimDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattleCollegeAimData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_GET_AIMDATALIST_OFFSET))(this);
		}

		::RPG::Client::BattleCollegeData_BattleCollegeStatus get_Status()
		{
			return ((::RPG::Client::BattleCollegeData_BattleCollegeStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::BattleCollegeData_BattleCollegeStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleCollegeData_BattleCollegeStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_SET_STATUS_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_GET_ISFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsClicked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_GET_ISCLICKED_OFFSET))(this);
		}

		::System::Void set_IsClicked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_SET_ISCLICKED_OFFSET))(this, value);
		}
	};
}
