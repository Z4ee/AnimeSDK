#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_2327EDF788F2C194;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_205_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x189271A0)
#define CLASS_3_27518451A20BB161_205__CTOR_OFFSET UNITYSDK_OFFSET(0x18927170)

inline static constexpr unsigned int Class_3_27518451A20BB161_205_TypeDefinitionIndex = 55448;

class Class_3_27518451A20BB161_205 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_2327EDF788F2C194*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2327EDF788F2C194* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2327EDF788F2C194*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_205__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_205_ONTASKBEGIN_OFFSET))(this);
	}
};
