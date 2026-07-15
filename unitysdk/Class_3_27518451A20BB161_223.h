#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A406659BC3B2A585_19;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_223_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14ACA160)
#define CLASS_3_27518451A20BB161_223__CTOR_OFFSET UNITYSDK_OFFSET(0x14ACA130)

inline static constexpr unsigned int Class_3_27518451A20BB161_223_TypeDefinitionIndex = 53099;

class Class_3_27518451A20BB161_223 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A406659BC3B2A585_19*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A406659BC3B2A585_19* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A406659BC3B2A585_19*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_223__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_223_ONTASKBEGIN_OFFSET))(this);
	}
};
