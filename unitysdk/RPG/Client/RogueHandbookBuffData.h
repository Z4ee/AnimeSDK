#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_852;
namespace RPG::Client { class RogueBuffRowData; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueBuffRow; }

#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_CREATEROGUEHANDBOOKBUFFDATA_1_OFFSET UNITYSDK_OFFSET(0xC78CE90)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_CREATEROGUEHANDBOOKBUFFDATA_OFFSET UNITYSDK_OFFSET(0xC78CD30)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_BUFFACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xC78D1E0)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_BUFFISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC78D2D0)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_CANBUFFUPDATE_OFFSET UNITYSDK_OFFSET(0xC78D470)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_FIRSTSORTPARAM_OFFSET UNITYSDK_OFFSET(0xC78D560)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_ISDEFAULTUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC78D540)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC78D1C0)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_MAXBUFFLEVEL_OFFSET UNITYSDK_OFFSET(0xC78D3A0)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_MAZEROW_OFFSET UNITYSDK_OFFSET(0xC78D2F0)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_ROGUEROW_OFFSET UNITYSDK_OFFSET(0xC78D280)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_SET_BUFFISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC78D2E0)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_SET_ISDEFAULTUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC78D550)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC78D1D0)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_UPDATEBYSERVER_OFFSET UNITYSDK_OFFSET(0xC78CFC0)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC78CF60)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC78CE20)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__TRYINITMAZEBUFFROW_OFFSET UNITYSDK_OFFSET(0xC78D140)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__TRYINITROGUEBUFFROW_OFFSET UNITYSDK_OFFSET(0xC78D010)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookBuffData_TypeDefinitionIndex = 63005;

	class RogueHandbookBuffData : public ::System::Object
	{
	public:
		::RPG::GameCore::MazeBuffRow* _MazeBuffRow; // 0x10
		::RPG::Client::RogueBuffRowData* _RogueBuffRow; // 0x18
		::System::Boolean _IsUnlocked_k__BackingField; // 0x20
		::System::Boolean _IsDefaultUnlocked_k__BackingField; // 0x21
		::System::Boolean _BuffIsInSchedule_k__BackingField; // 0x22
		::System::UInt32 _BuffID; // 0x24

		::System::Void _ctor(::RPG::Client::RogueBuffRowData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffRowData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Class_1_D17272E82AE804C2_852* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_852*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__CTOR_1_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueHandbookBuffData* CreateRogueHandbookBuffData(::RPG::GameCore::RogueBuffRow* a1)
		{
			return ((::RPG::Client::RogueHandbookBuffData*(*)(::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_CREATEROGUEHANDBOOKBUFFDATA_OFFSET))(a1);
		}

		static ::RPG::Client::RogueHandbookBuffData* CreateRogueHandbookBuffData_1(::Class_1_D17272E82AE804C2_852* a1)
		{
			return ((::RPG::Client::RogueHandbookBuffData*(*)(::Class_1_D17272E82AE804C2_852*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_CREATEROGUEHANDBOOKBUFFDATA_1_OFFSET))(a1);
		}

		::System::Void UpdateByServer(::Class_1_D17272E82AE804C2_852* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_852*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_UPDATEBYSERVER_OFFSET))(this, a1);
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
