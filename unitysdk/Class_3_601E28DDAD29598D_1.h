#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_4_1309A16363C9CF81;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_601E28DDAD29598D_1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13B98FF0)
#define CLASS_3_601E28DDAD29598D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13B98F70)

inline static constexpr unsigned int Class_3_601E28DDAD29598D_1_TypeDefinitionIndex = 49250;

class Class_3_601E28DDAD29598D_1 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_1309A16363C9CF81*>
{
public:
	::Class_2_5436AF4270279182* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_1309A16363C9CF81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_1309A16363C9CF81*))((::PBYTE)hIl2Cpp + CLASS_3_601E28DDAD29598D_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_601E28DDAD29598D_1_EVALUATE_OFFSET))(this);
	}
};
