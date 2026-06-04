#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleCollegeData_BattleCollegeStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_48;
namespace RPG::Client { class BattleCollegeAimData; }
namespace RPG::GameCore { class BattleCollegeConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLECOLLEGEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xB3D4180)
#define RPG_CLIENT_BATTLECOLLEGEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB3D3900)
#define RPG_CLIENT_BATTLECOLLEGEDATA_GETAIMDATA_OFFSET UNITYSDK_OFFSET(0xB3D3BB0)
#define RPG_CLIENT_BATTLECOLLEGEDATA_GETFIRSTUNFINISHEDAIMDATA_OFFSET UNITYSDK_OFFSET(0xB3D3E40)
#define RPG_CLIENT_BATTLECOLLEGEDATA_GET_AIMDATALIST_OFFSET UNITYSDK_OFFSET(0xB3D3CB0)
#define RPG_CLIENT_BATTLECOLLEGEDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xB3D41F0)
#define RPG_CLIENT_BATTLECOLLEGEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xB3D41D0)
#define RPG_CLIENT_BATTLECOLLEGEDATA_GET_ISCLICKED_OFFSET UNITYSDK_OFFSET(0xB3D3A00)
#define RPG_CLIENT_BATTLECOLLEGEDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xB3D43B0)
#define RPG_CLIENT_BATTLECOLLEGEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB3D4210)
#define RPG_CLIENT_BATTLECOLLEGEDATA_GET_STAGEINTRODESCLIST_OFFSET UNITYSDK_OFFSET(0xB3D4230)
#define RPG_CLIENT_BATTLECOLLEGEDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xB3D4390)
#define RPG_CLIENT_BATTLECOLLEGEDATA_INDEXOFAIMDATA_OFFSET UNITYSDK_OFFSET(0xB3D3FA0)
#define RPG_CLIENT_BATTLECOLLEGEDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xB3D4200)
#define RPG_CLIENT_BATTLECOLLEGEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xB3D41E0)
#define RPG_CLIENT_BATTLECOLLEGEDATA_SET_ISCLICKED_OFFSET UNITYSDK_OFFSET(0xB3D3AD0)
#define RPG_CLIENT_BATTLECOLLEGEDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xB3D4220)
#define RPG_CLIENT_BATTLECOLLEGEDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xB3D43A0)
#define RPG_CLIENT_BATTLECOLLEGEDATA_UPDATEAIMDATA_OFFSET UNITYSDK_OFFSET(0xB3D40D0)
#define RPG_CLIENT_BATTLECOLLEGEDATA_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0xB3D3990)
#define RPG_CLIENT_BATTLECOLLEGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB3D38F0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleCollegeData_TypeDefinitionIndex = 58824;

	class BattleCollegeData : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleCollegeConfigRow* _Row_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::BattleCollegeAimData*>* _AimDataList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* _StageIntroDescList; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28
		::RPG::Client::BattleCollegeData_BattleCollegeStatus _Status_k__BackingField; // 0x2C
		::System::UInt32 _GroupID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleCollegeData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::BattleCollegeData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_CREATE_OFFSET))(a1);
		}

		::System::Void UpdateStatus(::RPG::Client::BattleCollegeData_BattleCollegeStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleCollegeData_BattleCollegeStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_UPDATESTATUS_OFFSET))(this, a1);
		}

		::RPG::Client::BattleCollegeAimData* GetAimData(::System::UInt32 a1)
		{
			return ((::RPG::Client::BattleCollegeAimData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_GETAIMDATA_OFFSET))(this, a1);
		}

		::RPG::Client::BattleCollegeAimData* GetFirstUnfinishedAimData()
		{
			return ((::RPG::Client::BattleCollegeAimData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_GETFIRSTUNFINISHEDAIMDATA_OFFSET))(this);
		}

		::System::Int32 IndexOfAimData(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_INDEXOFAIMDATA_OFFSET))(this, a1);
		}

		::System::Void UpdateAimData(::Class_1_7AB88D713F5121B3_48* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7AB88D713F5121B3_48*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_UPDATEAIMDATA_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_CLEAR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_SET_GROUPID_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleCollegeConfigRow* get_Row()
		{
			return ((::RPG::GameCore::BattleCollegeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::BattleCollegeConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleCollegeConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_SET_ROW_OFFSET))(this, a1);
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

		::System::Void set_Status(::RPG::Client::BattleCollegeData_BattleCollegeStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleCollegeData_BattleCollegeStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_GET_ISFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsClicked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_GET_ISCLICKED_OFFSET))(this);
		}

		::System::Void set_IsClicked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA_SET_ISCLICKED_OFFSET))(this, a1);
		}
	};
}
