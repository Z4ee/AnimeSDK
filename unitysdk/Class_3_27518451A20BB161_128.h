#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_E88EA9A9A873B27A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_128_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC498260)
#define CLASS_3_27518451A20BB161_128__CTOR_OFFSET UNITYSDK_OFFSET(0xC498230)

inline static constexpr unsigned int Class_3_27518451A20BB161_128_TypeDefinitionIndex = 53830;

class Class_3_27518451A20BB161_128 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_E88EA9A9A873B27A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_E88EA9A9A873B27A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_E88EA9A9A873B27A*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_128__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_128_ONTASKBEGIN_OFFSET))(this);
	}
};
