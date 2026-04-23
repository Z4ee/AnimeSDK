#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleCollegeAimConfigRow; }

#define RPG_CLIENT_BATTLECOLLEGEAIMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9DFB910)
#define RPG_CLIENT_BATTLECOLLEGEAIMDATA_GET_AIMID_OFFSET UNITYSDK_OFFSET(0x9DFBAB0)
#define RPG_CLIENT_BATTLECOLLEGEAIMDATA_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x9DFBAD0)
#define RPG_CLIENT_BATTLECOLLEGEAIMDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9DFBA90)
#define RPG_CLIENT_BATTLECOLLEGEAIMDATA_GET_TOTALVALUE_OFFSET UNITYSDK_OFFSET(0x9DFBAF0)
#define RPG_CLIENT_BATTLECOLLEGEAIMDATA_ISFINISH_OFFSET UNITYSDK_OFFSET(0x9DFBA40)
#define RPG_CLIENT_BATTLECOLLEGEAIMDATA_SET_AIMID_OFFSET UNITYSDK_OFFSET(0x9DFBAC0)
#define RPG_CLIENT_BATTLECOLLEGEAIMDATA_SET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x9DFBAE0)
#define RPG_CLIENT_BATTLECOLLEGEAIMDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x9DFBAA0)
#define RPG_CLIENT_BATTLECOLLEGEAIMDATA_SET_TOTALVALUE_OFFSET UNITYSDK_OFFSET(0x9DFBB00)
#define RPG_CLIENT_BATTLECOLLEGEAIMDATA_UPDATEVALUE_OFFSET UNITYSDK_OFFSET(0x9DFB9E0)
#define RPG_CLIENT_BATTLECOLLEGEAIMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9DFB9D0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleCollegeAimData_TypeDefinitionIndex = 57907;

	class BattleCollegeAimData : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleCollegeAimConfigRow* _Row_k__BackingField; // 0x10
		::System::UInt32 _AimID_k__BackingField; // 0x18
		::System::UInt32 _TotalValue_k__BackingField; // 0x1C
		::System::UInt32 _CurrentValue_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleCollegeAimData* Create(::System::UInt32 ID)
		{
			return ((::RPG::Client::BattleCollegeAimData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA_CREATE_OFFSET))(ID);
		}

		::System::Void UpdateValue(::System::UInt32 currentValue, ::System::UInt32 totalValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA_UPDATEVALUE_OFFSET))(this, currentValue, totalValue);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA_ISFINISH_OFFSET))(this);
		}

		::RPG::GameCore::BattleCollegeAimConfigRow* get_Row()
		{
			return ((::RPG::GameCore::BattleCollegeAimConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::BattleCollegeAimConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleCollegeAimConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA_SET_ROW_OFFSET))(this, value);
		}

		::System::UInt32 get_AimID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA_GET_AIMID_OFFSET))(this);
		}

		::System::Void set_AimID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA_SET_AIMID_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA_GET_CURRENTVALUE_OFFSET))(this);
		}

		::System::Void set_CurrentValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA_SET_CURRENTVALUE_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA_GET_TOTALVALUE_OFFSET))(this);
		}

		::System::Void set_TotalValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEAIMDATA_SET_TOTALVALUE_OFFSET))(this, value);
		}
	};
}
