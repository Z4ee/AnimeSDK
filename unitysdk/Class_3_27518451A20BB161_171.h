#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_C1146190BE90F84F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_171_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154B4840)
#define CLASS_3_27518451A20BB161_171__CTOR_OFFSET UNITYSDK_OFFSET(0x154B4810)

inline static constexpr unsigned int Class_3_27518451A20BB161_171_TypeDefinitionIndex = 55162;

class Class_3_27518451A20BB161_171 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_C1146190BE90F84F*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C1146190BE90F84F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C1146190BE90F84F*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_171__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_171_ONTASKBEGIN_OFFSET))(this);
	}
};
