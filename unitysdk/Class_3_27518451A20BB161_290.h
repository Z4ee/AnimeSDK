#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A406659BC3B2A585_18;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_290_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB596E40)
#define CLASS_3_27518451A20BB161_290__CTOR_OFFSET UNITYSDK_OFFSET(0xB596E10)

inline static constexpr unsigned int Class_3_27518451A20BB161_290_TypeDefinitionIndex = 57881;

class Class_3_27518451A20BB161_290 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A406659BC3B2A585_18*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A406659BC3B2A585_18* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A406659BC3B2A585_18*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_290__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_290_ONTASKBEGIN_OFFSET))(this);
	}
};
