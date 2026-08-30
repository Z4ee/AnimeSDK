#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_FC1D173B0E9199B5_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_79_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7CA360)
#define CLASS_3_27518451A20BB161_79__CTOR_OFFSET UNITYSDK_OFFSET(0xB7CA330)
#define CLASS_3_27518451A20BB161_79__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xB7CA560)

inline static constexpr unsigned int Class_3_27518451A20BB161_79_TypeDefinitionIndex = 53218;

class Class_3_27518451A20BB161_79 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FC1D173B0E9199B5_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FC1D173B0E9199B5_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FC1D173B0E9199B5_1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_79__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_79_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_79__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}
};
