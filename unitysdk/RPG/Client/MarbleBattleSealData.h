#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MarbleBattleAffiliationType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MARBLEBATTLESEALDATA_GET_AFFILIATIONTYPE_OFFSET UNITYSDK_OFFSET(0xD5717C0)
#define RPG_CLIENT_MARBLEBATTLESEALDATA_GET_CANLAUNCH_OFFSET UNITYSDK_OFFSET(0xD56A180)
#define RPG_CLIENT_MARBLEBATTLESEALDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD572C30)
#define RPG_CLIENT_MARBLEBATTLESEALDATA_GET_ISDEAD_OFFSET UNITYSDK_OFFSET(0xD572BE0)
#define RPG_CLIENT_MARBLEBATTLESEALDATA_GET_ISENEMY_OFFSET UNITYSDK_OFFSET(0xD56DD60)
#define RPG_CLIENT_MARBLEBATTLESEALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD572EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBattleSealData_TypeDefinitionIndex = 65812;

	class MarbleBattleSealData : public ::System::Object
	{
	public:
		::System::UInt32 EntityId; // 0x10
		::System::UInt32 SealId; // 0x14
		::System::UInt32 PlayerId; // 0x18
		::System::Int32 Attack; // 0x1C
		::System::UInt32 BuffCount; // 0x20
		::System::Int32 Hp; // 0x24
		::System::Boolean TeamA; // 0x28
		::System::Boolean HasAction; // 0x29
		::System::Boolean IsForbid; // 0x2A
		::System::Boolean IsOffField; // 0x2B
		::System::UInt32 Level; // 0x2C
		::System::Int32 WhiteAttack; // 0x30
		::System::UInt32 AppearanceID; // 0x34
		::System::UInt32 BuffId; // 0x38
		::System::Int32 InitHp; // 0x3C
		::System::Int32 MaxHp; // 0x40

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

		::RPG::Client::MarbleBattleAffiliationType get_AffiliationType()
		{
			return ((::RPG::Client::MarbleBattleAffiliationType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLESEALDATA_GET_AFFILIATIONTYPE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLESEALDATA_GET_ICONPATH_OFFSET))(this);
		}
	};
}
