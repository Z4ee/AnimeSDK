#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdvByCompareEnhancedID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_11A90D17A4636717_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11059C00)
#define CLASS_3_11A90D17A4636717__CTOR_OFFSET UNITYSDK_OFFSET(0x11059BD0)

inline static constexpr unsigned int Class_3_11A90D17A4636717_TypeDefinitionIndex = 42980;

class Class_3_11A90D17A4636717 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByCompareEnhancedID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByCompareEnhancedID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByCompareEnhancedID*))((::PBYTE)hIl2Cpp + CLASS_3_11A90D17A4636717__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11A90D17A4636717_EVALUATE_OFFSET))(this);
	}
};
