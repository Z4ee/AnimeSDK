#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_DF1481A29952185A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_184_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB21C0C0)
#define CLASS_3_27518451A20BB161_184__CTOR_OFFSET UNITYSDK_OFFSET(0xB21C090)

inline static constexpr unsigned int Class_3_27518451A20BB161_184_TypeDefinitionIndex = 55038;

class Class_3_27518451A20BB161_184 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DF1481A29952185A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DF1481A29952185A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DF1481A29952185A*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_184__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_184_ONTASKBEGIN_OFFSET))(this);
	}
};
