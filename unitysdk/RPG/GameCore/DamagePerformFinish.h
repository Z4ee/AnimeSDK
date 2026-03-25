#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DAMAGEPERFORMFINISH_METHOD_3_58EEA8822C2ACC1C_OFFSET UNITYSDK_OFFSET(0x17147FF0)
#define RPG_GAMECORE_DAMAGEPERFORMFINISH_METHOD_3_D25523C21EAF3109_OFFSET UNITYSDK_OFFSET(0x17147E30)
#define RPG_GAMECORE_DAMAGEPERFORMFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x17147FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamagePerformFinish_TypeDefinitionIndex = 20803;

	class DamagePerformFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean SkipDeathSettlement; // 0x18
		::System::Boolean IsFakeAvatarAttack; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEPERFORMFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D25523C21EAF3109(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DamagePerformFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DamagePerformFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEPERFORMFINISH_METHOD_3_D25523C21EAF3109_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_58EEA8822C2ACC1C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DamagePerformFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DamagePerformFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEPERFORMFINISH_METHOD_3_58EEA8822C2ACC1C_OFFSET))(a1, a2);
		}
	};
}
