#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareEnhancedID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2FFE0135A9AEDB68_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1138F2D0)
#define CLASS_3_2FFE0135A9AEDB68__CTOR_OFFSET UNITYSDK_OFFSET(0x1138F2A0)

inline static constexpr unsigned int Class_3_2FFE0135A9AEDB68_TypeDefinitionIndex = 43611;

class Class_3_2FFE0135A9AEDB68 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareEnhancedID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareEnhancedID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareEnhancedID*))((::PBYTE)hIl2Cpp + CLASS_3_2FFE0135A9AEDB68__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FFE0135A9AEDB68_EVALUATE_OFFSET))(this);
	}
};
