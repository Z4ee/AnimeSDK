#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A33B829C07C46E7D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_22_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA7078D0)
#define CLASS_3_27518451A20BB161_22__CTOR_OFFSET UNITYSDK_OFFSET(0xA7078A0)

inline static constexpr unsigned int Class_3_27518451A20BB161_22_TypeDefinitionIndex = 49404;

class Class_3_27518451A20BB161_22 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A33B829C07C46E7D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A33B829C07C46E7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A33B829C07C46E7D*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_22__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_22_ONTASKBEGIN_OFFSET))(this);
	}
};
