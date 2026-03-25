#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6FCED0DC6A3564B4_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_45_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDE3F6B0)
#define CLASS_3_27518451A20BB161_45__CTOR_OFFSET UNITYSDK_OFFSET(0xDE3F680)
#define CLASS_3_27518451A20BB161_45__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xDE3F8A0)

inline static constexpr unsigned int Class_3_27518451A20BB161_45_TypeDefinitionIndex = 42844;

class Class_3_27518451A20BB161_45 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6FCED0DC6A3564B4_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6FCED0DC6A3564B4_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6FCED0DC6A3564B4_1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_45__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_45_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_45__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}
};
