#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_D364F829788A1B61;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_35_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1711A650)
#define CLASS_3_27518451A20BB161_35__CTOR_OFFSET UNITYSDK_OFFSET(0x1711A620)

inline static constexpr unsigned int Class_3_27518451A20BB161_35_TypeDefinitionIndex = 53103;

class Class_3_27518451A20BB161_35 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_D364F829788A1B61*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D364F829788A1B61* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D364F829788A1B61*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_35_ONTASKBEGIN_OFFSET))(this);
	}
};
