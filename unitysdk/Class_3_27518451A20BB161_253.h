#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_35557ECC3FEF8EBD;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_253_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AAF1B0)
#define CLASS_3_27518451A20BB161_253__CTOR_OFFSET UNITYSDK_OFFSET(0x15AAF180)

inline static constexpr unsigned int Class_3_27518451A20BB161_253_TypeDefinitionIndex = 55902;

class Class_3_27518451A20BB161_253 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_35557ECC3FEF8EBD*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_35557ECC3FEF8EBD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_35557ECC3FEF8EBD*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_253__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_253_ONTASKBEGIN_OFFSET))(this);
	}
};
