#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATUPGRADELOADMODELREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A425400)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatUpgradeLoadModelRequest_TypeDefinitionIndex = 72129;

	class DiceCombatUpgradeLoadModelRequest : public ::System::Object
	{
	public:
		::System::UInt32 DiceID; // 0x10
		::System::UInt32 EntityUID; // 0x14
		::RPG::GameCore::DiceCombatDiceType DiceType; // 0x18
		::System::Boolean IsSpecial; // 0x1C
		::System::Int32 Index; // 0x20
		::System::Int32 UpFace; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUPGRADELOADMODELREQUEST__CTOR_OFFSET))(this);
		}
	};
}
