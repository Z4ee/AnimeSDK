#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByTargetListIntersects; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D56759F1A11DB012_EVALUATE_OFFSET UNITYSDK_OFFSET(0x95B68D0)
#define CLASS_3_D56759F1A11DB012__CTOR_OFFSET UNITYSDK_OFFSET(0x95B68A0)

inline static constexpr unsigned int Class_3_D56759F1A11DB012_TypeDefinitionIndex = 50492;

class Class_3_D56759F1A11DB012 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByTargetListIntersects*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetListIntersects* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetListIntersects*))((::PBYTE)hIl2Cpp + CLASS_3_D56759F1A11DB012__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D56759F1A11DB012_EVALUATE_OFFSET))(this);
	}
};
