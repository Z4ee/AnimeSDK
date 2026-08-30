#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_FA3DB7B30E78C0CA_18;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_26_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18A6B350)
#define CLASS_3_27518451A20BB161_26__CTOR_OFFSET UNITYSDK_OFFSET(0x18A6B320)
#define CLASS_3_27518451A20BB161_26__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x18A6B630)

inline static constexpr unsigned int Class_3_27518451A20BB161_26_TypeDefinitionIndex = 53078;

class Class_3_27518451A20BB161_26 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FA3DB7B30E78C0CA_18*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_18* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_18*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_26__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_26_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_26__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}
};
