#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MARBLEBATTLESEALDATA_GET_CANLAUNCH_OFFSET UNITYSDK_OFFSET(0x9B11300)
#define RPG_CLIENT_MARBLEBATTLESEALDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9B188A0)
#define RPG_CLIENT_MARBLEBATTLESEALDATA_GET_ISDEAD_OFFSET UNITYSDK_OFFSET(0x9B18890)
#define RPG_CLIENT_MARBLEBATTLESEALDATA_GET_ISENEMY_OFFSET UNITYSDK_OFFSET(0x9B14800)
#define RPG_CLIENT_MARBLEBATTLESEALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B18A00)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBattleSealData_TypeDefinitionIndex = 53449;

	class MarbleBattleSealData : public ::System::Object
	{
	public:
		::System::Int32 Attack; // 0x10
		::System::Boolean HasAction; // 0x14
		::System::Boolean IsOffField; // 0x15
		::System::Boolean TeamA; // 0x16
		::System::Boolean IsForbid; // 0x17
		::System::UInt32 Level; // 0x18
		::System::UInt32 BuffCount; // 0x1C
		::System::Int32 InitHp; // 0x20
		::System::UInt32 SealId; // 0x24
		::System::UInt32 EntityId; // 0x28
		::System::UInt32 BuffId; // 0x2C
		::System::Int32 Hp; // 0x30
		::System::Int32 WhiteAttack; // 0x34
		::System::Int32 MaxHp; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLESEALDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsEnemy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLESEALDATA_GET_ISENEMY_OFFSET))(this);
		}

		::System::Boolean get_IsDead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLESEALDATA_GET_ISDEAD_OFFSET))(this);
		}

		::System::Boolean get_CanLaunch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLESEALDATA_GET_CANLAUNCH_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLESEALDATA_GET_ICONPATH_OFFSET))(this);
		}
	};
}
