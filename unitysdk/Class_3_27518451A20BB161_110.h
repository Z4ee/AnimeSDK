#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_D8BFA798DA7D067A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_110_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x99EFEE0)
#define CLASS_3_27518451A20BB161_110__CTOR_OFFSET UNITYSDK_OFFSET(0x99EFEB0)

inline static constexpr unsigned int Class_3_27518451A20BB161_110_TypeDefinitionIndex = 50675;

class Class_3_27518451A20BB161_110 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_D8BFA798DA7D067A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D8BFA798DA7D067A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D8BFA798DA7D067A*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_110__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_110_ONTASKBEGIN_OFFSET))(this);
	}
};
