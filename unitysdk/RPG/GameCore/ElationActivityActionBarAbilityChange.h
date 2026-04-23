#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELATIONACTIVITYACTIONBARABILITYCHANGE_METHOD_3_8473306A632D0B94_OFFSET UNITYSDK_OFFSET(0x18897BA0)
#define RPG_GAMECORE_ELATIONACTIVITYACTIONBARABILITYCHANGE_METHOD_3_98EFA70BF9DB095D_OFFSET UNITYSDK_OFFSET(0x18897C20)
#define RPG_GAMECORE_ELATIONACTIVITYACTIONBARABILITYCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18897BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationActivityActionBarAbilityChange_TypeDefinitionIndex = 21742;

	class ElationActivityActionBarAbilityChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 CharacterID; // 0x18
		::System::UInt32 BattleEventID; // 0x1C
		::System::Boolean IsAdd; // 0x20
		::System::Boolean AddToFirst; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONACTIVITYACTIONBARABILITYCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8473306A632D0B94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElationActivityActionBarAbilityChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElationActivityActionBarAbilityChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONACTIVITYACTIONBARABILITYCHANGE_METHOD_3_8473306A632D0B94_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_98EFA70BF9DB095D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElationActivityActionBarAbilityChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElationActivityActionBarAbilityChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONACTIVITYACTIONBARABILITYCHANGE_METHOD_3_98EFA70BF9DB095D_OFFSET))(a1, a2);
		}
	};
}
