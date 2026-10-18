#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6E02665B2ACE21EF;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_170_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1643CF10)
#define CLASS_3_27518451A20BB161_170__CTOR_OFFSET UNITYSDK_OFFSET(0x1643CEE0)

inline static constexpr unsigned int Class_3_27518451A20BB161_170_TypeDefinitionIndex = 54936;

class Class_3_27518451A20BB161_170 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6E02665B2ACE21EF*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6E02665B2ACE21EF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6E02665B2ACE21EF*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_170__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_170_ONTASKBEGIN_OFFSET))(this);
	}
};
