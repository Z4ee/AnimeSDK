#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_1037;
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class RogueTournModuleRow; }

#define RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURMAINTOURNID_OFFSET UNITYSDK_OFFSET(0xDFA8740)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURSUBTOURNACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xDFA87E0)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURSUBTOURNID_OFFSET UNITYSDK_OFFSET(0xDFA8760)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURSUBTOURNSCHEDULE_OFFSET UNITYSDK_OFFSET(0xDFA8830)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURTOURNMODE_OFFSET UNITYSDK_OFFSET(0xDFA8780)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xDFA87C0)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_ISNEEDSHOWNEWTOURNDIALOG_OFFSET UNITYSDK_OFFSET(0xDFA84A0)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_SETNEWTOURNDIALOGSEENCURTOURN_OFFSET UNITYSDK_OFFSET(0xDFA85F0)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_SET_CURMAINTOURNID_OFFSET UNITYSDK_OFFSET(0xDFA8750)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_SET_CURSUBTOURNID_OFFSET UNITYSDK_OFFSET(0xDFA8770)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xDFA87D0)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xDFA8420)
#define RPG_CLIENT_ROGUETOURNSEASONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDFA8410)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournSeasonData_TypeDefinitionIndex = 67821;

	class RogueTournSeasonData : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournModuleRow* _Row_k__BackingField; // 0x10
		::System::UInt32 _CurMainTournID_k__BackingField; // 0x18
		::System::UInt32 _CurSubTournID_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_1037* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1037*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Boolean IsNeedShowNewTournDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_ISNEEDSHOWNEWTOURNDIALOG_OFFSET))(this);
		}

		::System::Void SetNewTournDialogSeenCurTourn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_SETNEWTOURNDIALOGSEENCURTOURN_OFFSET))(this);
		}

		::System::UInt32 get_CurMainTournID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURMAINTOURNID_OFFSET))(this);
		}

		::System::Void set_CurMainTournID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_SET_CURMAINTOURNID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurSubTournID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURSUBTOURNID_OFFSET))(this);
		}

		::System::Void set_CurSubTournID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_SET_CURSUBTOURNID_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueTournMode get_CurTournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURTOURNMODE_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournModuleRow* get_Row()
		{
			return ((::RPG::GameCore::RogueTournModuleRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::RogueTournModuleRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournModuleRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_SET_ROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurSubTournActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURSUBTOURNACTIVITYMODULEID_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_CurSubTournSchedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURSUBTOURNSCHEDULE_OFFSET))(this);
		}
	};
}
