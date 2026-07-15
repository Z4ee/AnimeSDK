#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHaveUniqueNameEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E38B68E59D6C55E5_EVALUATE_OFFSET UNITYSDK_OFFSET(0x14698900)
#define CLASS_3_E38B68E59D6C55E5__CTOR_OFFSET UNITYSDK_OFFSET(0x146988D0)

inline static constexpr unsigned int Class_3_E38B68E59D6C55E5_TypeDefinitionIndex = 50209;

class Class_3_E38B68E59D6C55E5 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHaveUniqueNameEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHaveUniqueNameEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHaveUniqueNameEffect*))((::PBYTE)hIl2Cpp + CLASS_3_E38B68E59D6C55E5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E38B68E59D6C55E5_EVALUATE_OFFSET))(this);
	}
};
