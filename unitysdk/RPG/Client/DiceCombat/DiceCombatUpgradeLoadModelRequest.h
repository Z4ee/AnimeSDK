#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATUPGRADELOADMODELREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x9487AD0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatUpgradeLoadModelRequest_TypeDefinitionIndex = 61897;

	class DiceCombatUpgradeLoadModelRequest : public ::System::Object
	{
	public:
		::System::UInt32 DiceID; // 0x10
		::System::Int32 UpFace; // 0x14
		::System::Boolean IsSpecial; // 0x18
		::System::Boolean IsLocalPlayer; // 0x19
		::System::Int32 Index; // 0x1C
		::RPG::GameCore::DiceCombatDiceType DiceType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUPGRADELOADMODELREQUEST__CTOR_OFFSET))(this);
		}
	};
}
