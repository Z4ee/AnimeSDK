#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLingFes/GameDayState.h"
#include "unitysdk/System/Object.h"

class Class_1_D55DA8BFAC94B3A4_1;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_E1F8E3E063D5EA1C_GET_CHENLINGDAYCOUNTSBYPHASE_OFFSET UNITYSDK_OFFSET(0x162B4F10)
#define CLASS_1_E1F8E3E063D5EA1C_GET_CURRENTGAMEDAYINDEX_OFFSET UNITYSDK_OFFSET(0x162B4F50)
#define CLASS_1_E1F8E3E063D5EA1C_GET_CURRENTGAMEDAYSTATE_OFFSET UNITYSDK_OFFSET(0x162B4F70)
#define CLASS_1_E1F8E3E063D5EA1C_GET_CURRENTGAMEWEEKINDEX_OFFSET UNITYSDK_OFFSET(0x162B4F30)
#define CLASS_1_E1F8E3E063D5EA1C_GET_ISENDLESSMODE_OFFSET UNITYSDK_OFFSET(0x162B4EF0)
#define CLASS_1_E1F8E3E063D5EA1C_GET_LEVELDATA_OFFSET UNITYSDK_OFFSET(0x162B4ED0)
#define CLASS_1_E1F8E3E063D5EA1C_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x162B4EB0)
#define CLASS_1_E1F8E3E063D5EA1C_GET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x162B4F90)
#define CLASS_1_E1F8E3E063D5EA1C_GET_ONRESTART_OFFSET UNITYSDK_OFFSET(0x162B4FB0)
#define CLASS_1_E1F8E3E063D5EA1C_SET_CHENLINGDAYCOUNTSBYPHASE_OFFSET UNITYSDK_OFFSET(0x162B4F20)
#define CLASS_1_E1F8E3E063D5EA1C_SET_CURRENTGAMEDAYINDEX_OFFSET UNITYSDK_OFFSET(0x162B4F60)
#define CLASS_1_E1F8E3E063D5EA1C_SET_CURRENTGAMEDAYSTATE_OFFSET UNITYSDK_OFFSET(0x162B4F80)
#define CLASS_1_E1F8E3E063D5EA1C_SET_CURRENTGAMEWEEKINDEX_OFFSET UNITYSDK_OFFSET(0x162B4F40)
#define CLASS_1_E1F8E3E063D5EA1C_SET_ISENDLESSMODE_OFFSET UNITYSDK_OFFSET(0x162B4F00)
#define CLASS_1_E1F8E3E063D5EA1C_SET_LEVELDATA_OFFSET UNITYSDK_OFFSET(0x162B4EE0)
#define CLASS_1_E1F8E3E063D5EA1C_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0x162B4EC0)
#define CLASS_1_E1F8E3E063D5EA1C_SET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x162B4FA0)
#define CLASS_1_E1F8E3E063D5EA1C_SET_ONRESTART_OFFSET UNITYSDK_OFFSET(0x162B4FC0)
#define CLASS_1_E1F8E3E063D5EA1C__CTOR_OFFSET UNITYSDK_OFFSET(0x162B4FD0)

inline static constexpr unsigned int Class_1_E1F8E3E063D5EA1C_TypeDefinitionIndex = 80073;

class Class_1_E1F8E3E063D5EA1C : public ::System::Object
{
public:
	::System::Action* _OnRestart_k__BackingField; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* _ChenLingDayCountsByPhase_k__BackingField; // 0x18
	::Class_1_D55DA8BFAC94B3A4_1* _LevelData_k__BackingField; // 0x20
	::System::Action* _OnClose_k__BackingField; // 0x28
	::System::Int32 _CurrentGameWeekIndex_k__BackingField; // 0x30
	::RPG::Client::LittleGame::ChenLingFes::GameDayState _CurrentGameDayState_k__BackingField; // 0x34
	::System::Int32 _CurrentGameDayIndex_k__BackingField; // 0x38
	::System::Boolean _IsEndlessMode_k__BackingField; // 0x3C
	::System::UInt32 _LevelID_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1F8E3E063D5EA1C__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_LevelID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1F8E3E063D5EA1C_GET_LEVELID_OFFSET))(this);
	}

	::System::Void set_LevelID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E1F8E3E063D5EA1C_SET_LEVELID_OFFSET))(this, a1);
	}

	::Class_1_D55DA8BFAC94B3A4_1* get_LevelData()
	{
		return ((::Class_1_D55DA8BFAC94B3A4_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1F8E3E063D5EA1C_GET_LEVELDATA_OFFSET))(this);
	}

	::System::Void set_LevelData(::Class_1_D55DA8BFAC94B3A4_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D55DA8BFAC94B3A4_1*))((::PBYTE)hIl2Cpp + CLASS_1_E1F8E3E063D5EA1C_SET_LEVELDATA_OFFSET))(this, a1);
	}

	::System::Boolean get_IsEndlessMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1F8E3E063D5EA1C_GET_ISENDLESSMODE_OFFSET))(this);
	}

	::System::Void set_IsEndlessMode(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E1F8E3E063D5EA1C_SET_ISENDLESSMODE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* get_ChenLingDayCountsByPhase()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1F8E3E063D5EA1C_GET_CHENLINGDAYCOUNTSBYPHASE_OFFSET))(this);
	}

	::System::Void set_ChenLingDayCountsByPhase(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_E1F8E3E063D5EA1C_SET_CHENLINGDAYCOUNTSBYPHASE_OFFSET))(this, a1);
	}

	::System::Int32 get_CurrentGameWeekIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1F8E3E063D5EA1C_GET_CURRENTGAMEWEEKINDEX_OFFSET))(this);
	}

	::System::Void set_CurrentGameWeekIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E1F8E3E063D5EA1C_SET_CURRENTGAMEWEEKINDEX_OFFSET))(this, a1);
	}

	::System::Int32 get_CurrentGameDayIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1F8E3E063D5EA1C_GET_CURRENTGAMEDAYINDEX_OFFSET))(this);
	}

	::System::Void set_CurrentGameDayIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E1F8E3E063D5EA1C_SET_CURRENTGAMEDAYINDEX_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::ChenLingFes::GameDayState get_CurrentGameDayState()
	{
		return ((::RPG::Client::LittleGame::ChenLingFes::GameDayState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1F8E3E063D5EA1C_GET_CURRENTGAMEDAYSTATE_OFFSET))(this);
	}

	::System::Void set_CurrentGameDayState(::RPG::Client::LittleGame::ChenLingFes::GameDayState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLingFes::GameDayState))((::PBYTE)hIl2Cpp + CLASS_1_E1F8E3E063D5EA1C_SET_CURRENTGAMEDAYSTATE_OFFSET))(this, a1);
	}

	::System::Action* get_OnClose()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1F8E3E063D5EA1C_GET_ONCLOSE_OFFSET))(this);
	}

	::System::Void set_OnClose(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E1F8E3E063D5EA1C_SET_ONCLOSE_OFFSET))(this, a1);
	}

	::System::Action* get_OnRestart()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1F8E3E063D5EA1C_GET_ONRESTART_OFFSET))(this);
	}

	::System::Void set_OnRestart(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E1F8E3E063D5EA1C_SET_ONRESTART_OFFSET))(this, a1);
	}
};
