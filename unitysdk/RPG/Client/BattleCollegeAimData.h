#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleCollegeAimConfigRow; }

#define RPG_CLIENT_BATTLECOLLEGEAIMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC8F0E10)
#define RPG_CLIENT_BATTLECOLLEGEAIMDATA_GET_AIMID_OFFSET UNITYSDK_OFFSET(0xC8F0FB0)
#define RPG_CLIENT_BATTLECOLLEGEAIMDATA_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0xC8F0FD0)
#define RPG_CLIENT_BATTLECOLLEGEAIMDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xC8F0F90)
#define RPG_CLIENT_BATTLECOLLEGEAIMDATA_GET_TOTALVALUE_OFFSET UNITYSDK_OFFSET(0xC8F0FF0)
#define RPG_CLIENT_BATTLECOLLEGEAIMDATA_ISFINISH_OFFSET UNITYSDK_OFFSET(0xC8F0F40)
#define RPG_CLIENT_BATTLECOLLEGEAIMDATA_SET_AIMID_OFFSET UNITYSDK_OFFSET(0xC8F0FC0)
#define RPG_CLIENT_BATTLECOLLEGEAIMDATA_SET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0xC8F0FE0)
#define RPG_CLIENT_BATTLECOLLEGEAIMDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xC8F0FA0)
#define RPG_CLIENT_BATTLECOLLEGEAIMDATA_SET_TOTALVALUE_OFFSET UNITYSDK_OFFSET(0xC8F1000)
#define RPG_CLIENT_BATTLECOLLEGEAIMDATA_UPDATEVALUE_OFFSET UNITYSDK_OFFSET(0xC8F0EE0)
#define RPG_CLIENT_BATTLECOLLEGEAIMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC8F0ED0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleCollegeAimData_TypeDefinitionIndex = 62940;

	class BattleCollegeAimData : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleCollegeAimConfigRow* _Row_k__BackingField; // 0x10
		::System::UInt32 _TotalValue_k__BackingField; // 0x18
		::System::UInt32 _AimID_k__BackingField; // 0x1C
		::System::UInt32 _CurrentValue_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleCollegeAimData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::BattleCollegeAimData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA_CREATE_OFFSET))(a1);
		}

		::System::Void UpdateValue(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA_UPDATEVALUE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA_ISFINISH_OFFSET))(this);
		}

		::RPG::GameCore::BattleCollegeAimConfigRow* get_Row()
		{
			return ((::RPG::GameCore::BattleCollegeAimConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::BattleCollegeAimConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleCollegeAimConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA_SET_ROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_AimID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA_GET_AIMID_OFFSET))(this);
		}

		::System::Void set_AimID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA_SET_AIMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA_GET_CURRENTVALUE_OFFSET))(this);
		}

		::System::Void set_CurrentValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA_SET_CURRENTVALUE_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA_GET_TOTALVALUE_OFFSET))(this);
		}

		::System::Void set_TotalValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA_SET_TOTALVALUE_OFFSET))(this, a1);
		}
	};
}
