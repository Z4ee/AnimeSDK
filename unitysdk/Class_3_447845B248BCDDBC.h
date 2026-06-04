#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_1_D9E989B298282E16;
class Class_4_B845218F1B6B1C41_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_447845B248BCDDBC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x14309650)
#define CLASS_3_447845B248BCDDBC__CTOR_OFFSET UNITYSDK_OFFSET(0x143095D0)

inline static constexpr unsigned int Class_3_447845B248BCDDBC_TypeDefinitionIndex = 50282;

class Class_3_447845B248BCDDBC : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_B845218F1B6B1C41_2*>
{
public:
	::Class_1_D9E989B298282E16* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_B845218F1B6B1C41_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_B845218F1B6B1C41_2*))((::PBYTE)hIl2Cpp + CLASS_3_447845B248BCDDBC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_447845B248BCDDBC_EVALUATE_OFFSET))(this);
	}
};
