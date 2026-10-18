#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_E9FC55FC1F0BB51A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_329_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDA29660)
#define CLASS_3_27518451A20BB161_329__CTOR_OFFSET UNITYSDK_OFFSET(0xDA29630)

inline static constexpr unsigned int Class_3_27518451A20BB161_329_TypeDefinitionIndex = 58812;

class Class_3_27518451A20BB161_329 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_E9FC55FC1F0BB51A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_E9FC55FC1F0BB51A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_E9FC55FC1F0BB51A*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_329__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_329_ONTASKBEGIN_OFFSET))(this);
	}
};
