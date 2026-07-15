#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5ABE204154916C7E;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_159_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1823A420)
#define CLASS_3_27518451A20BB161_159__CTOR_OFFSET UNITYSDK_OFFSET(0x1823A3F0)

inline static constexpr unsigned int Class_3_27518451A20BB161_159_TypeDefinitionIndex = 52462;

class Class_3_27518451A20BB161_159 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_5ABE204154916C7E*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5ABE204154916C7E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5ABE204154916C7E*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_159__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_159_ONTASKBEGIN_OFFSET))(this);
	}
};
