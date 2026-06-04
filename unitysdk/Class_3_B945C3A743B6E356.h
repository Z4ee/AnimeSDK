#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B945C3A743B6E356_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC75C460)
#define CLASS_3_B945C3A743B6E356__CTOR_OFFSET UNITYSDK_OFFSET(0xC75C430)

inline static constexpr unsigned int Class_3_B945C3A743B6E356_TypeDefinitionIndex = 51019;

class Class_3_B945C3A743B6E356 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareTarget*))((::PBYTE)hIl2Cpp + CLASS_3_B945C3A743B6E356__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B945C3A743B6E356_EVALUATE_OFFSET))(this);
	}
};
