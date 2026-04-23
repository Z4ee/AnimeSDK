#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByLocalPlayerIsFakeAvatar; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A965C7D51E2DC7C3_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8F72240)
#define CLASS_3_A965C7D51E2DC7C3__CTOR_OFFSET UNITYSDK_OFFSET(0x8F72210)

inline static constexpr unsigned int Class_3_A965C7D51E2DC7C3_TypeDefinitionIndex = 49007;

class Class_3_A965C7D51E2DC7C3 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByLocalPlayerIsFakeAvatar*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar*))((::PBYTE)hIl2Cpp + CLASS_3_A965C7D51E2DC7C3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A965C7D51E2DC7C3_EVALUATE_OFFSET))(this);
	}
};
