#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_62D7DF27ED832319;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_231_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A68A80)
#define CLASS_3_27518451A20BB161_231__CTOR_OFFSET UNITYSDK_OFFSET(0x13A68A50)

inline static constexpr unsigned int Class_3_27518451A20BB161_231_TypeDefinitionIndex = 53164;

class Class_3_27518451A20BB161_231 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_62D7DF27ED832319*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_62D7DF27ED832319* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_62D7DF27ED832319*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_231__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_231_ONTASKBEGIN_OFFSET))(this);
	}
};
