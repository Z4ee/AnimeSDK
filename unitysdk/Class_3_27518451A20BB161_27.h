#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_4534392E87FC5ACC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_27_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFB9490)
#define CLASS_3_27518451A20BB161_27__CTOR_OFFSET UNITYSDK_OFFSET(0xBFB9460)
#define CLASS_3_27518451A20BB161_27__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xBFB9710)

inline static constexpr unsigned int Class_3_27518451A20BB161_27_TypeDefinitionIndex = 50418;

class Class_3_27518451A20BB161_27 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_4534392E87FC5ACC*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_4534392E87FC5ACC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_4534392E87FC5ACC*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_27__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_27_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_27__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}
};
