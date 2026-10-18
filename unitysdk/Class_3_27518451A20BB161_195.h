#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_E1DE22462278FCAD;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_195_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F0B6A0)
#define CLASS_3_27518451A20BB161_195__CTOR_OFFSET UNITYSDK_OFFSET(0x15F0B670)

inline static constexpr unsigned int Class_3_27518451A20BB161_195_TypeDefinitionIndex = 55069;

class Class_3_27518451A20BB161_195 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_E1DE22462278FCAD*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_E1DE22462278FCAD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_E1DE22462278FCAD*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_195__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_195_ONTASKBEGIN_OFFSET))(this);
	}
};
