#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareIsBookAvailable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5FECBAC0B79F3D4A_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAD23C50)
#define CLASS_3_5FECBAC0B79F3D4A__CTOR_OFFSET UNITYSDK_OFFSET(0xAD23C20)

inline static constexpr unsigned int Class_3_5FECBAC0B79F3D4A_TypeDefinitionIndex = 49168;

class Class_3_5FECBAC0B79F3D4A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareIsBookAvailable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareIsBookAvailable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareIsBookAvailable*))((::PBYTE)hIl2Cpp + CLASS_3_5FECBAC0B79F3D4A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5FECBAC0B79F3D4A_EVALUATE_OFFSET))(this);
	}
};
