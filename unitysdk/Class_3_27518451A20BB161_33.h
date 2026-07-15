#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_D364F829788A1B61;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_33_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16CFB140)
#define CLASS_3_27518451A20BB161_33__CTOR_OFFSET UNITYSDK_OFFSET(0x16CFB110)

inline static constexpr unsigned int Class_3_27518451A20BB161_33_TypeDefinitionIndex = 50437;

class Class_3_27518451A20BB161_33 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_D364F829788A1B61*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D364F829788A1B61* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D364F829788A1B61*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_33__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_33_ONTASKBEGIN_OFFSET))(this);
	}
};
