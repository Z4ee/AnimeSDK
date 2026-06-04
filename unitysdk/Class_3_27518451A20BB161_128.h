#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BE08264F8CDC94EB_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_128_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x139D1C40)
#define CLASS_3_27518451A20BB161_128__CTOR_OFFSET UNITYSDK_OFFSET(0x139D1C10)

inline static constexpr unsigned int Class_3_27518451A20BB161_128_TypeDefinitionIndex = 51556;

class Class_3_27518451A20BB161_128 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_BE08264F8CDC94EB_2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BE08264F8CDC94EB_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BE08264F8CDC94EB_2*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_128__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_128_ONTASKBEGIN_OFFSET))(this);
	}
};
