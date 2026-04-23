#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_1_D9E989B298282E16;
class Class_4_B845218F1B6B1C41_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_447845B248BCDDBC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9BB27E0)
#define CLASS_3_447845B248BCDDBC__CTOR_OFFSET UNITYSDK_OFFSET(0x9BB2760)

inline static constexpr unsigned int Class_3_447845B248BCDDBC_TypeDefinitionIndex = 49615;

class Class_3_447845B248BCDDBC : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_B845218F1B6B1C41_1*>
{
public:
	::Class_1_D9E989B298282E16* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_B845218F1B6B1C41_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_B845218F1B6B1C41_1*))((::PBYTE)hIl2Cpp + CLASS_3_447845B248BCDDBC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_447845B248BCDDBC_EVALUATE_OFFSET))(this);
	}
};
