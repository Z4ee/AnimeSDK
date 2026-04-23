#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCurrentRogueHasMiracle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5DAF7D825D2DAA7A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11E25760)
#define CLASS_3_5DAF7D825D2DAA7A__CTOR_OFFSET UNITYSDK_OFFSET(0x11E25730)

inline static constexpr unsigned int Class_3_5DAF7D825D2DAA7A_TypeDefinitionIndex = 48995;

class Class_3_5DAF7D825D2DAA7A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCurrentRogueHasMiracle*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCurrentRogueHasMiracle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCurrentRogueHasMiracle*))((::PBYTE)hIl2Cpp + CLASS_3_5DAF7D825D2DAA7A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5DAF7D825D2DAA7A_EVALUATE_OFFSET))(this);
	}
};
