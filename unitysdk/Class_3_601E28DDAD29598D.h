#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_4_6F740814D9094F5F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_601E28DDAD29598D_EVALUATE_OFFSET UNITYSDK_OFFSET(0xE02D710)
#define CLASS_3_601E28DDAD29598D__CTOR_OFFSET UNITYSDK_OFFSET(0xE02D690)

inline static constexpr unsigned int Class_3_601E28DDAD29598D_TypeDefinitionIndex = 52926;

class Class_3_601E28DDAD29598D : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_6F740814D9094F5F*>
{
public:
	::Class_2_5436AF4270279182* NFJGMKPFPOC; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_6F740814D9094F5F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_6F740814D9094F5F*))((::PBYTE)hIl2Cpp + CLASS_3_601E28DDAD29598D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_601E28DDAD29598D_EVALUATE_OFFSET))(this);
	}
};
