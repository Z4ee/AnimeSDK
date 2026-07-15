#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_C1146190BE90F84F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_161_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16EC91A0)
#define CLASS_3_27518451A20BB161_161__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC9170)

inline static constexpr unsigned int Class_3_27518451A20BB161_161_TypeDefinitionIndex = 52465;

class Class_3_27518451A20BB161_161 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_C1146190BE90F84F*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C1146190BE90F84F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C1146190BE90F84F*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_161__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_161_ONTASKBEGIN_OFFSET))(this);
	}
};
