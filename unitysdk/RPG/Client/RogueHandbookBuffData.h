#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_816;
namespace RPG::Client { class RogueBuffRowData; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueBuffRow; }

#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_CREATEROGUEHANDBOOKBUFFDATA_1_OFFSET UNITYSDK_OFFSET(0xB040130)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_CREATEROGUEHANDBOOKBUFFDATA_OFFSET UNITYSDK_OFFSET(0xB03FFD0)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_BUFFACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xB040480)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_BUFFISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xB040570)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_CANBUFFUPDATE_OFFSET UNITYSDK_OFFSET(0xB040700)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_FIRSTSORTPARAM_OFFSET UNITYSDK_OFFSET(0xB040740)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_ISDEFAULTUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB040720)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB040460)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_MAXBUFFLEVEL_OFFSET UNITYSDK_OFFSET(0xB040640)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_MAZEROW_OFFSET UNITYSDK_OFFSET(0xB040590)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_ROGUEROW_OFFSET UNITYSDK_OFFSET(0xB040520)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_SET_BUFFISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xB040580)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_SET_ISDEFAULTUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB040730)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB040470)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_UPDATEBYSERVER_OFFSET UNITYSDK_OFFSET(0xB040260)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB040200)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB0400C0)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__TRYINITMAZEBUFFROW_OFFSET UNITYSDK_OFFSET(0xB0403E0)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__TRYINITROGUEBUFFROW_OFFSET UNITYSDK_OFFSET(0xB0402B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookBuffData_TypeDefinitionIndex = 62072;

	class RogueHandbookBuffData : public ::System::Object
	{
	public:
		::RPG::Client::RogueBuffRowData* _RogueBuffRow; // 0x10
		::RPG::GameCore::MazeBuffRow* _MazeBuffRow; // 0x18
		::System::Boolean _IsDefaultUnlocked_k__BackingField; // 0x20
		::System::Boolean _IsUnlocked_k__BackingField; // 0x21
		::System::Boolean _BuffIsInSchedule_k__BackingField; // 0x22
		::System::UInt32 _BuffID; // 0x24

		::System::Void _ctor(::RPG::Client::RogueBuffRowData* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffRowData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__CTOR_OFFSET))(this, row);
		}

		::System::Void _ctor_1(::Class_1_D17272E82AE804C2_816* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_816*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__CTOR_1_OFFSET))(this, data);
		}

		static ::RPG::Client::RogueHandbookBuffData* CreateRogueHandbookBuffData(::RPG::GameCore::RogueBuffRow* row)
		{
			return ((::RPG::Client::RogueHandbookBuffData*(*)(::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_CREATEROGUEHANDBOOKBUFFDATA_OFFSET))(row);
		}

		static ::RPG::Client::RogueHandbookBuffData* CreateRogueHandbookBuffData_1(::Class_1_D17272E82AE804C2_816* data)
		{
			return ((::RPG::Client::RogueHandbookBuffData*(*)(::Class_1_D17272E82AE804C2_816*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_CREATEROGUEHANDBOOKBUFFDATA_1_OFFSET))(data);
		}

		::System::Void UpdateByServer(::Class_1_D17272E82AE804C2_816* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_816*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_UPDATEBYSERVER_OFFSET))(this, data);
		}

		::System::Void _TryInitRogueBuffRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__TRYINITROGUEBUFFROW_OFFSET))(this);
		}

		::System::Void _TryInitMazeBuffRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__TRYINITMAZEBUFFROW_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_SET_ISUNLOCKED_OFFSET))(this, value);
		}

		::System::UInt32 get_BuffActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_BUFFACTIVITYMODULEID_OFFSET))(this);
		}

		::System::Boolean get_BuffIsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_BUFFISINSCHEDULE_OFFSET))(this);
		}

		::System::Void set_BuffIsInSchedule(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_SET_BUFFISINSCHEDULE_OFFSET))(this, value);
		}

		::RPG::Client::RogueBuffRowData* get_RogueRow()
		{
			return ((::RPG::Client::RogueBuffRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_ROGUEROW_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get_MazeRow()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_MAZEROW_OFFSET))(this);
		}

		::System::UInt32 get_MaxBuffLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_MAXBUFFLEVEL_OFFSET))(this);
		}

		::System::Boolean get_CanBuffUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_CANBUFFUPDATE_OFFSET))(this);
		}

		::System::Boolean get_IsDefaultUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_ISDEFAULTUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsDefaultUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_SET_ISDEFAULTUNLOCKED_OFFSET))(this, value);
		}

		::System::Int32 get_FirstSortParam()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_FIRSTSORTPARAM_OFFSET))(this);
		}
	};
}
