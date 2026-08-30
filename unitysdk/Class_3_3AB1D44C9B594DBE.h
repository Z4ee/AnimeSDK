#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareDamageCustomName; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3AB1D44C9B594DBE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1AF42940)
#define CLASS_3_3AB1D44C9B594DBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF42910)

inline static constexpr unsigned int Class_3_3AB1D44C9B594DBE_TypeDefinitionIndex = 55091;

class Class_3_3AB1D44C9B594DBE : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareDamageCustomName*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareDamageCustomName* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareDamageCustomName*))((::PBYTE)hIl2Cpp + CLASS_3_3AB1D44C9B594DBE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3AB1D44C9B594DBE_EVALUATE_OFFSET))(this);
	}
};
