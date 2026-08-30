#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class RtByHasLockTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_335D8DA9F671D5D3_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB6DB760)
#define CLASS_3_335D8DA9F671D5D3__CTOR_OFFSET UNITYSDK_OFFSET(0xB6DB730)

inline static constexpr unsigned int Class_3_335D8DA9F671D5D3_TypeDefinitionIndex = 54134;

class Class_3_335D8DA9F671D5D3 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::RtByHasLockTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByHasLockTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByHasLockTarget*))((::PBYTE)hIl2Cpp + CLASS_3_335D8DA9F671D5D3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_335D8DA9F671D5D3_EVALUATE_OFFSET))(this);
	}
};
