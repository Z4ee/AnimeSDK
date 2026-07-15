#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_FD604FD7432D4217;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_139_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16177970)
#define CLASS_3_27518451A20BB161_139__CTOR_OFFSET UNITYSDK_OFFSET(0x16177940)

inline static constexpr unsigned int Class_3_27518451A20BB161_139_TypeDefinitionIndex = 51694;

class Class_3_27518451A20BB161_139 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FD604FD7432D4217*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FD604FD7432D4217* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FD604FD7432D4217*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_139__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_139_ONTASKBEGIN_OFFSET))(this);
	}
};
