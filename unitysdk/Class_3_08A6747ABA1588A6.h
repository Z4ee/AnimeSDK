#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareBP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_08A6747ABA1588A6_EVALUATE_OFFSET UNITYSDK_OFFSET(0xE029300)
#define CLASS_3_08A6747ABA1588A6__CTOR_OFFSET UNITYSDK_OFFSET(0xE0292D0)

inline static constexpr unsigned int Class_3_08A6747ABA1588A6_TypeDefinitionIndex = 54727;

class Class_3_08A6747ABA1588A6 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareBP*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareBP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareBP*))((::PBYTE)hIl2Cpp + CLASS_3_08A6747ABA1588A6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08A6747ABA1588A6_EVALUATE_OFFSET))(this);
	}
};
