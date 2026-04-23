#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6FCED0DC6A3564B4_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_50_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA45DB0)
#define CLASS_3_27518451A20BB161_50__CTOR_OFFSET UNITYSDK_OFFSET(0xAA45D80)
#define CLASS_3_27518451A20BB161_50__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xAA45FA0)

inline static constexpr unsigned int Class_3_27518451A20BB161_50_TypeDefinitionIndex = 48828;

class Class_3_27518451A20BB161_50 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6FCED0DC6A3564B4_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6FCED0DC6A3564B4_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6FCED0DC6A3564B4_1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_50__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_50_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_50__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}
};
