#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5325286AD2465A2A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAF1FE80)
#define CLASS_3_27518451A20BB161_7__CTOR_OFFSET UNITYSDK_OFFSET(0xAF1FE50)

inline static constexpr unsigned int Class_3_27518451A20BB161_7_TypeDefinitionIndex = 49314;

class Class_3_27518451A20BB161_7 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_5325286AD2465A2A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5325286AD2465A2A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5325286AD2465A2A*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_7_ONTASKBEGIN_OFFSET))(this);
	}
};
