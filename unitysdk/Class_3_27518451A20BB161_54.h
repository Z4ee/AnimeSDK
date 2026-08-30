#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_9481342303901AA1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_54_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159311C0)
#define CLASS_3_27518451A20BB161_54__CTOR_OFFSET UNITYSDK_OFFSET(0x15931190)

inline static constexpr unsigned int Class_3_27518451A20BB161_54_TypeDefinitionIndex = 53133;

class Class_3_27518451A20BB161_54 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_9481342303901AA1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_9481342303901AA1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_9481342303901AA1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_54__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_54_ONTASKBEGIN_OFFSET))(this);
	}
};
