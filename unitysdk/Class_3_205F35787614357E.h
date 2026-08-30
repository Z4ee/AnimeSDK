#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureByCompareMP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_205F35787614357E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18703D50)
#define CLASS_3_205F35787614357E__CTOR_OFFSET UNITYSDK_OFFSET(0x18703D20)

inline static constexpr unsigned int Class_3_205F35787614357E_TypeDefinitionIndex = 54671;

class Class_3_205F35787614357E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdventureByCompareMP*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByCompareMP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByCompareMP*))((::PBYTE)hIl2Cpp + CLASS_3_205F35787614357E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_205F35787614357E_EVALUATE_OFFSET))(this);
	}
};
