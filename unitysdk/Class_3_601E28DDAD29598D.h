#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_4_B845218F1B6B1C41;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_601E28DDAD29598D_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC94B2E0)
#define CLASS_3_601E28DDAD29598D__CTOR_OFFSET UNITYSDK_OFFSET(0xC94B260)

inline static constexpr unsigned int Class_3_601E28DDAD29598D_TypeDefinitionIndex = 49248;

class Class_3_601E28DDAD29598D : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_B845218F1B6B1C41*>
{
public:
	::Class_2_5436AF4270279182* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_B845218F1B6B1C41* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_B845218F1B6B1C41*))((::PBYTE)hIl2Cpp + CLASS_3_601E28DDAD29598D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_601E28DDAD29598D_EVALUATE_OFFSET))(this);
	}
};
