#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_26.h"
#include "unitysdk/Enum_3_DB663931210BBC27_54.h"
#include "unitysdk/System/Object.h"

class Class_1_1EC1D7523DB92148_3;
namespace RPG::GameCore { class RogueAreaConfigRow; }

#define RPG_CLIENT_ROGUEAREADATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC76EBD0)
#define RPG_CLIENT_ROGUEAREADATA_GETMAXSCORE_OFFSET UNITYSDK_OFFSET(0xC76EDC0)
#define RPG_CLIENT_ROGUEAREADATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xC76EF70)
#define RPG_CLIENT_ROGUEAREADATA_GET_AREAPROGRESSID_OFFSET UNITYSDK_OFFSET(0xC76F080)
#define RPG_CLIENT_ROGUEAREADATA_GET_CURREACHROOMNUM_OFFSET UNITYSDK_OFFSET(0xC76F010)
#define RPG_CLIENT_ROGUEAREADATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xC76F1B0)
#define RPG_CLIENT_ROGUEAREADATA_GET_ISACTIVITY_OFFSET UNITYSDK_OFFSET(0xC76F2E0)
#define RPG_CLIENT_ROGUEAREADATA_GET_ISDOING_OFFSET UNITYSDK_OFFSET(0xC76F030)
#define RPG_CLIENT_ROGUEAREADATA_GET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xC76EFD0)
#define RPG_CLIENT_ROGUEAREADATA_GET_MAPID_OFFSET UNITYSDK_OFFSET(0xC76EFF0)
#define RPG_CLIENT_ROGUEAREADATA_GET_ROGUEAREAROW_OFFSET UNITYSDK_OFFSET(0xC76EF00)
#define RPG_CLIENT_ROGUEAREADATA_GET_ROGUEAREASTATUS_OFFSET UNITYSDK_OFFSET(0xC76EF90)
#define RPG_CLIENT_ROGUEAREADATA_GET_ROGUESTATUS_OFFSET UNITYSDK_OFFSET(0xC76EFB0)
#define RPG_CLIENT_ROGUEAREADATA_REFRESHSTATUS_OFFSET UNITYSDK_OFFSET(0xC76ECA0)
#define RPG_CLIENT_ROGUEAREADATA_SETTAKENREWARD_OFFSET UNITYSDK_OFFSET(0xC76ED70)
#define RPG_CLIENT_ROGUEAREADATA_SETUNLOCKSTATUS_OFFSET UNITYSDK_OFFSET(0xC76ED20)
#define RPG_CLIENT_ROGUEAREADATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xC76EF80)
#define RPG_CLIENT_ROGUEAREADATA_SET_CURREACHROOMNUM_OFFSET UNITYSDK_OFFSET(0xC76F020)
#define RPG_CLIENT_ROGUEAREADATA_SET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xC76EFE0)
#define RPG_CLIENT_ROGUEAREADATA_SET_MAPID_OFFSET UNITYSDK_OFFSET(0xC76F000)
#define RPG_CLIENT_ROGUEAREADATA_SET_ROGUEAREASTATUS_OFFSET UNITYSDK_OFFSET(0xC76EFA0)
#define RPG_CLIENT_ROGUEAREADATA_SET_ROGUESTATUS_OFFSET UNITYSDK_OFFSET(0xC76EFC0)
#define RPG_CLIENT_ROGUEAREADATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC76EC90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueAreaData_TypeDefinitionIndex = 63098;

	class RogueAreaData : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueAreaConfigRow* _RogueAreaRow; // 0x10
		::System::UInt32 _MapID_k__BackingField; // 0x18
		::System::Boolean _IsRewardTaken_k__BackingField; // 0x1C
		::Enum_3_DB663931210BBC27_54 _RogueAreaStatus_k__BackingField; // 0x20
		::Enum_3_4608E37A1B3D374A_26 _RogueStatus_k__BackingField; // 0x24
		::System::UInt32 _AreaID_k__BackingField; // 0x28
		::System::UInt32 _CurReachRoomNum_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueAreaData* Create(::Class_1_1EC1D7523DB92148_3* a1)
		{
			return ((::RPG::Client::RogueAreaData*(*)(::Class_1_1EC1D7523DB92148_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_CREATE_OFFSET))(a1);
		}

		::System::Void RefreshStatus(::Class_1_1EC1D7523DB92148_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1EC1D7523DB92148_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_REFRESHSTATUS_OFFSET))(this, a1);
		}

		::System::Void SetUnlockStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SETUNLOCKSTATUS_OFFSET))(this);
		}

		::System::Void SetTakenReward(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SETTAKENREWARD_OFFSET))(this, a1);
		}

		::System::UInt32 GetMaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GETMAXSCORE_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SET_AREAID_OFFSET))(this, a1);
		}

		::Enum_3_DB663931210BBC27_54 get_RogueAreaStatus()
		{
			return ((::Enum_3_DB663931210BBC27_54(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_ROGUEAREASTATUS_OFFSET))(this);
		}

		::System::Void set_RogueAreaStatus(::Enum_3_DB663931210BBC27_54 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_54))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SET_ROGUEAREASTATUS_OFFSET))(this, a1);
		}

		::Enum_3_4608E37A1B3D374A_26 get_RogueStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_26(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_ROGUESTATUS_OFFSET))(this);
		}

		::System::Void set_RogueStatus(::Enum_3_4608E37A1B3D374A_26 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_26))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SET_ROGUESTATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_ISREWARDTAKEN_OFFSET))(this);
		}

		::System::Void set_IsRewardTaken(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SET_ISREWARDTAKEN_OFFSET))(this, a1);
		}

		::System::UInt32 get_MapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_MAPID_OFFSET))(this);
		}

		::System::Void set_MapID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SET_MAPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurReachRoomNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_CURREACHROOMNUM_OFFSET))(this);
		}

		::System::Void set_CurReachRoomNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SET_CURREACHROOMNUM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_ISDOING_OFFSET))(this);
		}

		::RPG::GameCore::RogueAreaConfigRow* get_RogueAreaRow()
		{
			return ((::RPG::GameCore::RogueAreaConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_ROGUEAREAROW_OFFSET))(this);
		}

		::System::UInt32 get_AreaProgressID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_AREAPROGRESSID_OFFSET))(this);
		}

		::System::UInt32 get_Difficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Boolean get_IsActivity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_ISACTIVITY_OFFSET))(this);
		}
	};
}
