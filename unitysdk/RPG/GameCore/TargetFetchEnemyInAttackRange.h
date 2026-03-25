#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHENEMYINATTACKRANGE_METHOD_4_4AD3EAD1F03E3CF3_OFFSET UNITYSDK_OFFSET(0x177BE970)
#define RPG_GAMECORE_TARGETFETCHENEMYINATTACKRANGE_METHOD_4_5335833A85E47995_OFFSET UNITYSDK_OFFSET(0x177B5580)
#define RPG_GAMECORE_TARGETFETCHENEMYINATTACKRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x177B5500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchEnemyInAttackRange_TypeDefinitionIndex = 22169;

	class TargetFetchEnemyInAttackRange : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHENEMYINATTACKRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4AD3EAD1F03E3CF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchEnemyInAttackRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchEnemyInAttackRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHENEMYINATTACKRANGE_METHOD_4_4AD3EAD1F03E3CF3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5335833A85E47995(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchEnemyInAttackRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchEnemyInAttackRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHENEMYINATTACKRANGE_METHOD_4_5335833A85E47995_OFFSET))(a1, a2);
		}
	};
}
