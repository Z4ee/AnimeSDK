#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByDynamicSkillButtonInputSlot; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1EC340F765DFBC73_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A8133C0)
#define CLASS_3_1EC340F765DFBC73__CTOR_OFFSET UNITYSDK_OFFSET(0x1A813390)

inline static constexpr unsigned int Class_3_1EC340F765DFBC73_TypeDefinitionIndex = 55104;

class Class_3_1EC340F765DFBC73 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByDynamicSkillButtonInputSlot*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByDynamicSkillButtonInputSlot* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByDynamicSkillButtonInputSlot*))((::PBYTE)hIl2Cpp + CLASS_3_1EC340F765DFBC73__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EC340F765DFBC73_EVALUATE_OFFSET))(this);
	}
};
