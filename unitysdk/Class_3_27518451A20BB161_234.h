#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_0DDE289110424927;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_234_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x187252C0)
#define CLASS_3_27518451A20BB161_234__CTOR_OFFSET UNITYSDK_OFFSET(0x18725290)

inline static constexpr unsigned int Class_3_27518451A20BB161_234_TypeDefinitionIndex = 53170;

class Class_3_27518451A20BB161_234 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_0DDE289110424927*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_0DDE289110424927* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_0DDE289110424927*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_234__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_234_ONTASKBEGIN_OFFSET))(this);
	}
};
