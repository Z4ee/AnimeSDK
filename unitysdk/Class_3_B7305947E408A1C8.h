#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckTimeRewindEntityPauseBySkillCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B7305947E408A1C8_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB7D4460)
#define CLASS_3_B7305947E408A1C8__CTOR_OFFSET UNITYSDK_OFFSET(0xB7D4430)

inline static constexpr unsigned int Class_3_B7305947E408A1C8_TypeDefinitionIndex = 49194;

class Class_3_B7305947E408A1C8 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*))((::PBYTE)hIl2Cpp + CLASS_3_B7305947E408A1C8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B7305947E408A1C8_EVALUATE_OFFSET))(this);
	}
};
