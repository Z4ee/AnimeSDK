#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_552EC1E7B14B2FEA;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_109_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154FA850)
#define CLASS_3_27518451A20BB161_109__CTOR_OFFSET UNITYSDK_OFFSET(0x154FA820)

inline static constexpr unsigned int Class_3_27518451A20BB161_109_TypeDefinitionIndex = 53301;

class Class_3_27518451A20BB161_109 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_552EC1E7B14B2FEA*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_552EC1E7B14B2FEA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_552EC1E7B14B2FEA*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_109__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_109_ONTASKBEGIN_OFFSET))(this);
	}
};
