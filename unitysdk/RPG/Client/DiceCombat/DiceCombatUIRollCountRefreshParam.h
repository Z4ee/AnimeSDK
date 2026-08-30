#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATUIROLLCOUNTREFRESHPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xCD39050)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatUIRollCountRefreshParam_TypeDefinitionIndex = 75556;

	class DiceCombatUIRollCountRefreshParam : public ::System::Object
	{
	public:
		::System::Int32 LeftRollCount; // 0x10
		::System::Int32 RollCount; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUIROLLCOUNTREFRESHPARAM__CTOR_OFFSET))(this);
		}
	};
}
