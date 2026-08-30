#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureDyingParam; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTURESETATTACKTARGETMONSTERDIE_METHOD_3_8C50EB2515FF24EF_OFFSET UNITYSDK_OFFSET(0x1CBBDE20)
#define RPG_GAMECORE_ADVENTURESETATTACKTARGETMONSTERDIE_METHOD_3_CADBF022D0B71D4E_OFFSET UNITYSDK_OFFSET(0x1CBBDE70)
#define RPG_GAMECORE_ADVENTURESETATTACKTARGETMONSTERDIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBBDE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureSetAttackTargetMonsterDie_TypeDefinitionIndex = 19981;

	class AdventureSetAttackTargetMonsterDie : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsServerSimulateBattle; // 0x20
		::RPG::GameCore::AdventureDyingParam* DyingStyleParam; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESETATTACKTARGETMONSTERDIE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8C50EB2515FF24EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureSetAttackTargetMonsterDie*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureSetAttackTargetMonsterDie*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESETATTACKTARGETMONSTERDIE_METHOD_3_8C50EB2515FF24EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CADBF022D0B71D4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureSetAttackTargetMonsterDie* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureSetAttackTargetMonsterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESETATTACKTARGETMONSTERDIE_METHOD_3_CADBF022D0B71D4E_OFFSET))(a1, a2);
		}
	};
}
