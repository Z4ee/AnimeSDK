#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_550C42FE954A4893;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_277_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA54DF0)
#define CLASS_3_27518451A20BB161_277__CTOR_OFFSET UNITYSDK_OFFSET(0xBA54DC0)

inline static constexpr unsigned int Class_3_27518451A20BB161_277_TypeDefinitionIndex = 56353;

class Class_3_27518451A20BB161_277 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_550C42FE954A4893*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_550C42FE954A4893* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_550C42FE954A4893*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_277__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_277_ONTASKBEGIN_OFFSET))(this);
	}
};
