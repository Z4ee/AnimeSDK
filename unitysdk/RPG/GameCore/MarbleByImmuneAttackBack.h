#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYIMMUNEATTACKBACK_METHOD_4_088605AECACF8DF6_OFFSET UNITYSDK_OFFSET(0x198CC580)
#define RPG_GAMECORE_MARBLEBYIMMUNEATTACKBACK_METHOD_4_7B4B82F0B3EBAFC3_OFFSET UNITYSDK_OFFSET(0x198CC660)
#define RPG_GAMECORE_MARBLEBYIMMUNEATTACKBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x198CC610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByImmuneAttackBack_TypeDefinitionIndex = 16037;

	class MarbleByImmuneAttackBack : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYIMMUNEATTACKBACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_088605AECACF8DF6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByImmuneAttackBack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByImmuneAttackBack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYIMMUNEATTACKBACK_METHOD_4_088605AECACF8DF6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7B4B82F0B3EBAFC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByImmuneAttackBack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByImmuneAttackBack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYIMMUNEATTACKBACK_METHOD_4_7B4B82F0B3EBAFC3_OFFSET))(a1, a2);
		}
	};
}
