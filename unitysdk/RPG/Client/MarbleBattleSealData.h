#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MARBLEBATTLESEALDATA_GET_CANLAUNCH_OFFSET UNITYSDK_OFFSET(0xA80AA40)
#define RPG_CLIENT_MARBLEBATTLESEALDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA8125B0)
#define RPG_CLIENT_MARBLEBATTLESEALDATA_GET_ISDEAD_OFFSET UNITYSDK_OFFSET(0xA8125A0)
#define RPG_CLIENT_MARBLEBATTLESEALDATA_GET_ISENEMY_OFFSET UNITYSDK_OFFSET(0xA80E240)
#define RPG_CLIENT_MARBLEBATTLESEALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA812710)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBattleSealData_TypeDefinitionIndex = 60593;

	class MarbleBattleSealData : public ::System::Object
	{
	public:
		::System::UInt32 BuffCount; // 0x10
		::System::Int32 Hp; // 0x14
		::System::Int32 MaxHp; // 0x18
		::System::UInt32 SealId; // 0x1C
		::System::UInt32 Level; // 0x20
		::System::UInt32 EntityId; // 0x24
		::System::Int32 WhiteAttack; // 0x28
		::System::Int32 InitHp; // 0x2C
		::System::Int32 Attack; // 0x30
		::System::UInt32 BuffId; // 0x34
		::System::Boolean IsOffField; // 0x38
		::System::Boolean TeamA; // 0x39
		::System::Boolean HasAction; // 0x3A
		::System::Boolean IsForbid; // 0x3B

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
