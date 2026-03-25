#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_24571A5169B3F40B;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1110BC60)
#define CLASS_3_27518451A20BB161_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1110BC30)

inline static constexpr unsigned int Class_3_27518451A20BB161_2_TypeDefinitionIndex = 42489;

class Class_3_27518451A20BB161_2 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_24571A5169B3F40B*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_24571A5169B3F40B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_24571A5169B3F40B*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_2_ONTASKBEGIN_OFFSET))(this);
	}
};
