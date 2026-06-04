#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3658EDFC90175F78;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_51_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAF68A70)
#define CLASS_3_27518451A20BB161_51__CTOR_OFFSET UNITYSDK_OFFSET(0xAF68A40)

inline static constexpr unsigned int Class_3_27518451A20BB161_51_TypeDefinitionIndex = 49493;

class Class_3_27518451A20BB161_51 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3658EDFC90175F78*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3658EDFC90175F78* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3658EDFC90175F78*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_51__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_51_ONTASKBEGIN_OFFSET))(this);
	}
};
