#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_777;
namespace RPG::Client { class RogueBuffRowData; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueBuffRow; }

#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_CREATEROGUEHANDBOOKBUFFDATA_1_OFFSET UNITYSDK_OFFSET(0xA309550)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_CREATEROGUEHANDBOOKBUFFDATA_OFFSET UNITYSDK_OFFSET(0xA3093F0)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_BUFFACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xA3098A0)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_BUFFISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA309990)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_CANBUFFUPDATE_OFFSET UNITYSDK_OFFSET(0xA309B20)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_FIRSTSORTPARAM_OFFSET UNITYSDK_OFFSET(0xA309B60)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_ISDEFAULTUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA309B40)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA309880)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_MAXBUFFLEVEL_OFFSET UNITYSDK_OFFSET(0xA309A60)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_MAZEROW_OFFSET UNITYSDK_OFFSET(0xA3099B0)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_GET_ROGUEROW_OFFSET UNITYSDK_OFFSET(0xA309940)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_SET_BUFFISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA3099A0)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_SET_ISDEFAULTUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA309B50)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA309890)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_UPDATEBYSERVER_OFFSET UNITYSDK_OFFSET(0xA309680)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA309620)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3094E0)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__TRYINITMAZEBUFFROW_OFFSET UNITYSDK_OFFSET(0xA309800)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__TRYINITROGUEBUFFROW_OFFSET UNITYSDK_OFFSET(0xA3096D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookBuffData_TypeDefinitionIndex = 54884;

	class RogueHandbookBuffData : public ::System::Object
	{
	public:
		::RPG::GameCore::MazeBuffRow* _MazeBuffRow; // 0x10
		::RPG::Client::RogueBuffRowData* _RogueBuffRow; // 0x18
		::System::UInt32 _BuffID; // 0x20
		::System::Boolean _BuffIsInSchedule_k__BackingField; // 0x24
		::System::Boolean _IsDefaultUnlocked_k__BackingField; // 0x25
		::System::Boolean _IsUnlocked_k__BackingField; // 0x26

		::System::Void _ctor(::RPG::Client::RogueBuffRowData* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffRowData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__CTOR_OFFSET))(this, row);
		}

		::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_777* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_777*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA__CTOR_1_OFFSET))(this, data);
		}

		static ::RPG::Client::RogueHandbookBuffData* CreateRogueHandbookBuffData(::RPG::GameCore::RogueBuffRow* row)
		{
			return ((::RPG::Client::RogueHandbookBuffData*(*)(::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_CREATEROGUEHANDBOOKBUFFDATA_OFFSET))(row);
		}

		static ::RPG::Client::RogueHandbookBuffData* CreateRogueHandbookBuffData_1(::Class_1_FA4F4A67B1C04320_777* data)
		{
			return ((::RPG::Client::RogueHandbookBuffData*(*)(::Class_1_FA4F4A67B1C04320_777*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_CREATEROGUEHANDBOOKBUFFDATA_1_OFFSET))(data);
		}

		::System::Void UpdateByServer(::Class_1_FA4F4A67B1C04320_777* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_777*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFDATA_UPDATEBYSERVER_OFFSET))(this, data);
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
