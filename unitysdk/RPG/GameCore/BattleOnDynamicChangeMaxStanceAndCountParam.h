#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_BATTLEONDYNAMICCHANGEMAXSTANCEANDCOUNTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B634010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleOnDynamicChangeMaxStanceAndCountParam_TypeDefinitionIndex = 57905;

	class BattleOnDynamicChangeMaxStanceAndCountParam : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x10
		::System::Int32 NewCount; // 0x18
		::RPG::GameCore::FixPoint NewMaxStance; // 0x20
		::System::Boolean IsAdd; // 0x28
		::System::Int32 OldCount; // 0x2C
		::RPG::GameCore::FixPoint OldMaxStance; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEONDYNAMICCHANGEMAXSTANCEANDCOUNTPARAM__CTOR_OFFSET))(this);
		}
	};
}
