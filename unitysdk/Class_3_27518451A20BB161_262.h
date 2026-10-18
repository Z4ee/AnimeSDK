#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_B2714ECCB11DEF92;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_262_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB151010)
#define CLASS_3_27518451A20BB161_262__CTOR_OFFSET UNITYSDK_OFFSET(0xB150FE0)

inline static constexpr unsigned int Class_3_27518451A20BB161_262_TypeDefinitionIndex = 55685;

class Class_3_27518451A20BB161_262 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_B2714ECCB11DEF92*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B2714ECCB11DEF92* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B2714ECCB11DEF92*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_262__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_262_ONTASKBEGIN_OFFSET))(this);
	}
};
