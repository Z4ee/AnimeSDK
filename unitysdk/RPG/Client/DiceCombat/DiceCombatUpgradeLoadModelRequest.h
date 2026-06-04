#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATUPGRADELOADMODELREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0xB7B4AD0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatUpgradeLoadModelRequest_TypeDefinitionIndex = 70616;

	class DiceCombatUpgradeLoadModelRequest : public ::System::Object
	{
	public:
		::System::Int32 Index; // 0x10
		::RPG::GameCore::DiceCombatDiceType DiceType; // 0x14
		::System::Int32 UpFace; // 0x18
		::System::UInt32 EntityUID; // 0x1C
		::System::UInt32 DiceID; // 0x20
		::System::Boolean IsSpecial; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUPGRADELOADMODELREQUEST__CTOR_OFFSET))(this);
		}
	};
}
