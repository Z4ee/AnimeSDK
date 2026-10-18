#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A406659BC3B2A585_15;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_69_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EF9CA0)
#define CLASS_3_27518451A20BB161_69__CTOR_OFFSET UNITYSDK_OFFSET(0x15EF9C70)

inline static constexpr unsigned int Class_3_27518451A20BB161_69_TypeDefinitionIndex = 52869;

class Class_3_27518451A20BB161_69 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A406659BC3B2A585_15*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A406659BC3B2A585_15* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A406659BC3B2A585_15*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_69__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_69_ONTASKBEGIN_OFFSET))(this);
	}
};
