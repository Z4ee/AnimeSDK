#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleCollegeData; }
namespace RPG::GameCore { class BattleCollegeTypeGroupConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_ADDBATTLECOLLEGEDATA_OFFSET UNITYSDK_OFFSET(0x1748EF60)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1748EEC0)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_BATTLECOLLEGEDATALIST_OFFSET UNITYSDK_OFFSET(0x1748F090)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x1748F100)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1748F050)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_ISADVANCED_OFFSET UNITYSDK_OFFSET(0x1748F290)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1748F200)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1748F070)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1748F0B0)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1748F010)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_SET_BATTLECOLLEGEDATALIST_OFFSET UNITYSDK_OFFSET(0x1748F0A0)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1748F060)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x1748F080)
#define RPG_CLIENT_BATTLECOLLEGEGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1748EE80)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleCollegeGroupData_TypeDefinitionIndex = 60100;

	class BattleCollegeGroupData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BattleCollegeData*>* _BattleCollegeDataList_k__BackingField; // 0x10
		::RPG::GameCore::BattleCollegeTypeGroupConfigRow* _Row_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleCollegeGroupData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::BattleCollegeGroupData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_CREATE_OFFSET))(a1);
		}

		::System::Void AddBattleCollegeData(::RPG::Client::BattleCollegeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleCollegeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_ADDBATTLECOLLEGEDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_ISUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleCollegeTypeGroupConfigRow* get_Row()
		{
			return ((::RPG::GameCore::BattleCollegeTypeGroupConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::BattleCollegeTypeGroupConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleCollegeTypeGroupConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_SET_ROW_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattleCollegeData*>* get_BattleCollegeDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattleCollegeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_BATTLECOLLEGEDATALIST_OFFSET))(this);
		}

		::System::Void set_BattleCollegeDataList(::System::Collections::Generic::List_1<::RPG::Client::BattleCollegeData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BattleCollegeData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_SET_BATTLECOLLEGEDATALIST_OFFSET))(this, a1);
		}

		::System::Int32 get_TotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Int32 get_FinishCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_FINISHCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_ISFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsAdvanced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEGROUPDATA_GET_ISADVANCED_OFFSET))(this);
		}
	};
}
