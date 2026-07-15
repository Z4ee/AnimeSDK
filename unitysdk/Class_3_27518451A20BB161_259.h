#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A406659BC3B2A585_26;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_259_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14E4CBE0)
#define CLASS_3_27518451A20BB161_259__CTOR_OFFSET UNITYSDK_OFFSET(0x14E4CBB0)

inline static constexpr unsigned int Class_3_27518451A20BB161_259_TypeDefinitionIndex = 55586;

class Class_3_27518451A20BB161_259 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A406659BC3B2A585_26*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A406659BC3B2A585_26* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A406659BC3B2A585_26*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_259__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_259_ONTASKBEGIN_OFFSET))(this);
	}
};
