#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYIMMUNEATTACKBACK_METHOD_4_0861999BD2C0D2A5_OFFSET UNITYSDK_OFFSET(0x18A994F0)
#define RPG_GAMECORE_MARBLEBYIMMUNEATTACKBACK_METHOD_4_51000A96990515A0_OFFSET UNITYSDK_OFFSET(0x18A99410)
#define RPG_GAMECORE_MARBLEBYIMMUNEATTACKBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18A994A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByImmuneAttackBack_TypeDefinitionIndex = 15987;

	class MarbleByImmuneAttackBack : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYIMMUNEATTACKBACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_51000A96990515A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByImmuneAttackBack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByImmuneAttackBack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYIMMUNEATTACKBACK_METHOD_4_51000A96990515A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0861999BD2C0D2A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByImmuneAttackBack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByImmuneAttackBack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYIMMUNEATTACKBACK_METHOD_4_0861999BD2C0D2A5_OFFSET))(a1, a2);
		}
	};
}
