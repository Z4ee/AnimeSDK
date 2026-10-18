#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_193630737016C200;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_176_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164B4720)
#define CLASS_3_27518451A20BB161_176__CTOR_OFFSET UNITYSDK_OFFSET(0x164B46F0)

inline static constexpr unsigned int Class_3_27518451A20BB161_176_TypeDefinitionIndex = 54953;

class Class_3_27518451A20BB161_176 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_193630737016C200*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_193630737016C200* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_193630737016C200*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_176__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_176_ONTASKBEGIN_OFFSET))(this);
	}
};
