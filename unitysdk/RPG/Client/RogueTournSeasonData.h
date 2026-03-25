#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_823;
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class RogueTournModuleRow; }

#define RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURMAINTOURNID_OFFSET UNITYSDK_OFFSET(0xA3D1F20)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURSUBTOURNACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xA3D1F90)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURSUBTOURNID_OFFSET UNITYSDK_OFFSET(0xA3D1F40)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURSUBTOURNSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA3D1FE0)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURTOURNMODE_OFFSET UNITYSDK_OFFSET(0xA3D1F60)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA3D1F70)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_ISNEEDSHOWNEWTOURNDIALOG_OFFSET UNITYSDK_OFFSET(0xA3D1C50)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_SETNEWTOURNDIALOGSEENCURTOURN_OFFSET UNITYSDK_OFFSET(0xA3D1DD0)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_SET_CURMAINTOURNID_OFFSET UNITYSDK_OFFSET(0xA3D1F30)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_SET_CURSUBTOURNID_OFFSET UNITYSDK_OFFSET(0xA3D1F50)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xA3D1F80)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA3D1BD0)
#define RPG_CLIENT_ROGUETOURNSEASONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3D1BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournSeasonData_TypeDefinitionIndex = 55323;

	class RogueTournSeasonData : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournModuleRow* _Row_k__BackingField; // 0x10
		::System::UInt32 _CurSubTournID_k__BackingField; // 0x18
		::System::UInt32 _CurMainTournID_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_FA4F4A67B1C04320_823* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_823*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_SYNC_OFFSET))(this, proto);
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

		::System::Void set_CurMainTournID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_SET_CURMAINTOURNID_OFFSET))(this, value);
		}

		::System::UInt32 get_CurSubTournID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURSUBTOURNID_OFFSET))(this);
		}

		::System::Void set_CurSubTournID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_SET_CURSUBTOURNID_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueTournMode get_CurTournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURTOURNMODE_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournModuleRow* get_Row()
		{
			return ((::RPG::GameCore::RogueTournModuleRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::RogueTournModuleRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournModuleRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_SET_ROW_OFFSET))(this, value);
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
