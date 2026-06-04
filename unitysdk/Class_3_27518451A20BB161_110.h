#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BE08264F8CDC94EB_3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_110_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13B254C0)
#define CLASS_3_27518451A20BB161_110__CTOR_OFFSET UNITYSDK_OFFSET(0x13B25490)

inline static constexpr unsigned int Class_3_27518451A20BB161_110_TypeDefinitionIndex = 51240;

class Class_3_27518451A20BB161_110 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_BE08264F8CDC94EB_3*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BE08264F8CDC94EB_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BE08264F8CDC94EB_3*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_110__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_110_ONTASKBEGIN_OFFSET))(this);
	}
};
