#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_987;
namespace RPG::Client { class RogueBuffRowData; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueBuffRow; }

#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_CREATEROGUEHANDBOOKBUFFDATA_1_OFFSET UNITYSDK_OFFSET(0x1B67E110)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_CREATEROGUEHANDBOOKBUFFDATA_OFFSET UNITYSDK_OFFSET(0x1B67DFB0)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_BUFFACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x1B67E460)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_BUFFISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1B67E570)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_CANBUFFUPDATE_OFFSET UNITYSDK_OFFSET(0x1B67E710)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_FIRSTSORTPARAM_OFFSET UNITYSDK_OFFSET(0x1B67E830)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_ISDEFAULTUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1B67E810)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1B67E440)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_MAXBUFFLEVEL_OFFSET UNITYSDK_OFFSET(0x1B67E640)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_MAZEROW_OFFSET UNITYSDK_OFFSET(0x1B67E590)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_ROGUEROW_OFFSET UNITYSDK_OFFSET(0x1B67E520)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_SET_BUFFISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1B67E580)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_SET_ISDEFAULTUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1B67E820)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1B67E450)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_UPDATEBYSERVER_OFFSET UNITYSDK_OFFSET(0x1B67E240)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B67E1E0)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B67E0A0)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__TRYINITMAZEBUFFROW_OFFSET UNITYSDK_OFFSET(0x1B67E3C0)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__TRYINITROGUEBUFFROW_OFFSET UNITYSDK_OFFSET(0x1B67E290)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookBuffData_TypeDefinitionIndex = 67368;

	class RogueHandbookBuffData : public ::System::Object
	{
	public:
		::RPG::GameCore::MazeBuffRow* _MazeBuffRow; // 0x10
		::RPG::Client::RogueBuffRowData* _RogueBuffRow; // 0x18
		::System::Boolean _BuffIsInSchedule_k__BackingField; // 0x20
		::System::Boolean _IsUnlocked_k__BackingField; // 0x21
		::System::Boolean _IsDefaultUnlocked_k__BackingField; // 0x22
		::System::UInt32 _BuffID; // 0x24

		::System::Void _ctor(::RPG::Client::RogueBuffRowData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffRowData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Class_1_D17272E82AE804C2_987* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_987*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__CTOR_1_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueHandbookBuffData* CreateRogueHandbookBuffData(::RPG::GameCore::RogueBuffRow* a1)
		{
			return ((::RPG::Client::RogueHandbookBuffData*(*)(::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_CREATEROGUEHANDBOOKBUFFDATA_OFFSET))(a1);
		}

		static ::RPG::Client::RogueHandbookBuffData* CreateRogueHandbookBuffData_1(::Class_1_D17272E82AE804C2_987* a1)
		{
			return ((::RPG::Client::RogueHandbookBuffData*(*)(::Class_1_D17272E82AE804C2_987*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_CREATEROGUEHANDBOOKBUFFDATA_1_OFFSET))(a1);
		}

		::System::Void UpdateByServer(::Class_1_D17272E82AE804C2_987* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_987*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_UPDATEBYSERVER_OFFSET))(this, a1);
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

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_SET_ISUNLOCKED_OFFSET))(this, a1);
		}

		::System::UInt32 get_BuffActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_BUFFACTIVITYMODULEID_OFFSET))(this);
		}

		::System::Boolean get_BuffIsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_BUFFISINSCHEDULE_OFFSET))(this);
		}

		::System::Void set_BuffIsInSchedule(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_SET_BUFFISINSCHEDULE_OFFSET))(this, a1);
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

		::System::Void set_IsDefaultUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_SET_ISDEFAULTUNLOCKED_OFFSET))(this, a1);
		}

		::System::Int32 get_FirstSortParam()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_FIRSTSORTPARAM_OFFSET))(this);
		}
	};
}
