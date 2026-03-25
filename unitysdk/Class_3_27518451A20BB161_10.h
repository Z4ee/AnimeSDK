#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_E19B324AEE40BF0E_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_10_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB282320)
#define CLASS_3_27518451A20BB161_10__CTOR_OFFSET UNITYSDK_OFFSET(0xB2822F0)

inline static constexpr unsigned int Class_3_27518451A20BB161_10_TypeDefinitionIndex = 42751;

class Class_3_27518451A20BB161_10 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_E19B324AEE40BF0E_2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_E19B324AEE40BF0E_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_E19B324AEE40BF0E_2*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_10__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_10_ONTASKBEGIN_OFFSET))(this);
	}
};
