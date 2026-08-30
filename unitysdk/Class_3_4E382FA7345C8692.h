#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdvByIsEliteMonster; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4E382FA7345C8692_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18736D80)
#define CLASS_3_4E382FA7345C8692__CTOR_OFFSET UNITYSDK_OFFSET(0x18736D50)

inline static constexpr unsigned int Class_3_4E382FA7345C8692_TypeDefinitionIndex = 54667;

class Class_3_4E382FA7345C8692 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByIsEliteMonster*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByIsEliteMonster* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByIsEliteMonster*))((::PBYTE)hIl2Cpp + CLASS_3_4E382FA7345C8692__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E382FA7345C8692_EVALUATE_OFFSET))(this);
	}
};
