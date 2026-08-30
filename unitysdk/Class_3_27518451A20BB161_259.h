#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3A4F1B9D1A7680C2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_259_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18A2ABD0)
#define CLASS_3_27518451A20BB161_259__CTOR_OFFSET UNITYSDK_OFFSET(0x18A2ABA0)

inline static constexpr unsigned int Class_3_27518451A20BB161_259_TypeDefinitionIndex = 56068;

class Class_3_27518451A20BB161_259 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3A4F1B9D1A7680C2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3A4F1B9D1A7680C2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3A4F1B9D1A7680C2*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_259__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_259_ONTASKBEGIN_OFFSET))(this);
	}
};
