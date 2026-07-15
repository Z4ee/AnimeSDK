#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5536EB8CB151A38B;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_233_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14AC4C40)
#define CLASS_3_27518451A20BB161_233__CTOR_OFFSET UNITYSDK_OFFSET(0x14AC4C10)

inline static constexpr unsigned int Class_3_27518451A20BB161_233_TypeDefinitionIndex = 53167;

class Class_3_27518451A20BB161_233 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_5536EB8CB151A38B*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5536EB8CB151A38B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5536EB8CB151A38B*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_233__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_233_ONTASKBEGIN_OFFSET))(this);
	}
};
