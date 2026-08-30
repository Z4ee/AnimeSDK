#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_9DE74F67AFB5CC0C;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_178_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16925410)
#define CLASS_3_27518451A20BB161_178__CTOR_OFFSET UNITYSDK_OFFSET(0x169253E0)

inline static constexpr unsigned int Class_3_27518451A20BB161_178_TypeDefinitionIndex = 55245;

class Class_3_27518451A20BB161_178 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_9DE74F67AFB5CC0C*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_9DE74F67AFB5CC0C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_9DE74F67AFB5CC0C*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_178__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_178_ONTASKBEGIN_OFFSET))(this);
	}
};
