#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class BySimulateSpeedUp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E207037AAEDD9D1F_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA9DEAA0)
#define CLASS_3_E207037AAEDD9D1F__CTOR_OFFSET UNITYSDK_OFFSET(0xA9DEA70)

inline static constexpr unsigned int Class_3_E207037AAEDD9D1F_TypeDefinitionIndex = 51147;

class Class_3_E207037AAEDD9D1F : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::BySimulateSpeedUp*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BySimulateSpeedUp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BySimulateSpeedUp*))((::PBYTE)hIl2Cpp + CLASS_3_E207037AAEDD9D1F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E207037AAEDD9D1F_EVALUATE_OFFSET))(this);
	}
};
