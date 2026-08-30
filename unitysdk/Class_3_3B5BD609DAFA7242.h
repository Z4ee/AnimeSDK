#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckFloorCustomBoolV2; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3B5BD609DAFA7242_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17D6CBF0)
#define CLASS_3_3B5BD609DAFA7242__CTOR_OFFSET UNITYSDK_OFFSET(0x17D6CBC0)

inline static constexpr unsigned int Class_3_3B5BD609DAFA7242_TypeDefinitionIndex = 52825;

class Class_3_3B5BD609DAFA7242 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckFloorCustomBoolV2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckFloorCustomBoolV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckFloorCustomBoolV2*))((::PBYTE)hIl2Cpp + CLASS_3_3B5BD609DAFA7242__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B5BD609DAFA7242_EVALUATE_OFFSET))(this);
	}
};
