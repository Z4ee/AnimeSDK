#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7ED93EDF030C1F5D_4;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_78_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2EC160)
#define CLASS_3_27518451A20BB161_78__CTOR_OFFSET UNITYSDK_OFFSET(0xC2EC130)

inline static constexpr unsigned int Class_3_27518451A20BB161_78_TypeDefinitionIndex = 52888;

class Class_3_27518451A20BB161_78 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7ED93EDF030C1F5D_4*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7ED93EDF030C1F5D_4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7ED93EDF030C1F5D_4*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_78__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_78_ONTASKBEGIN_OFFSET))(this);
	}
};
