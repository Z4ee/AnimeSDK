#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_0A6AEAAB98E550F1_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_70_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4A0730)
#define CLASS_3_27518451A20BB161_70__CTOR_OFFSET UNITYSDK_OFFSET(0xB4A0700)

inline static constexpr unsigned int Class_3_27518451A20BB161_70_TypeDefinitionIndex = 53154;

class Class_3_27518451A20BB161_70 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_0A6AEAAB98E550F1_2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_0A6AEAAB98E550F1_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_0A6AEAAB98E550F1_2*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_70__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_70_ONTASKBEGIN_OFFSET))(this);
	}
};
