#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A406659BC3B2A585_9;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_261_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF3C1C70)
#define CLASS_3_27518451A20BB161_261__CTOR_OFFSET UNITYSDK_OFFSET(0xF3C1C40)

inline static constexpr unsigned int Class_3_27518451A20BB161_261_TypeDefinitionIndex = 56082;

class Class_3_27518451A20BB161_261 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A406659BC3B2A585_9*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A406659BC3B2A585_9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A406659BC3B2A585_9*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_261__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_261_ONTASKBEGIN_OFFSET))(this);
	}
};
