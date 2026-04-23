#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LoseHPByRatio; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_3_30A93F44A91CED2A_METHOD_3_4ACC970A76EEB7BF_OFFSET UNITYSDK_OFFSET(0x124CC180)
#define CLASS_3_30A93F44A91CED2A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x124CB120)
#define CLASS_3_30A93F44A91CED2A__CTOR_OFFSET UNITYSDK_OFFSET(0x124CB050)

inline static constexpr unsigned int Class_3_30A93F44A91CED2A_TypeDefinitionIndex = 50857;

class Class_3_30A93F44A91CED2A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LoseHPByRatio*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoseHPByRatio* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoseHPByRatio*))((::PBYTE)hIl2Cpp + CLASS_3_30A93F44A91CED2A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30A93F44A91CED2A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_4ACC970A76EEB7BF(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_3_30A93F44A91CED2A_METHOD_3_4ACC970A76EEB7BF_OFFSET))(this, a1, a2);
	}
};
