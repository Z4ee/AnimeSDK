#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_D02D0DD74D08864A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_98_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x106100A0)
#define CLASS_3_27518451A20BB161_98__CTOR_OFFSET UNITYSDK_OFFSET(0x10610070)

inline static constexpr unsigned int Class_3_27518451A20BB161_98_TypeDefinitionIndex = 47289;

class Class_3_27518451A20BB161_98 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_D02D0DD74D08864A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D02D0DD74D08864A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D02D0DD74D08864A*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_98__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_98_ONTASKBEGIN_OFFSET))(this);
	}
};
