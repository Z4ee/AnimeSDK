#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_8D0DE090C405AD34;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_245_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162F1630)
#define CLASS_3_27518451A20BB161_245__CTOR_OFFSET UNITYSDK_OFFSET(0x162F1600)

inline static constexpr unsigned int Class_3_27518451A20BB161_245_TypeDefinitionIndex = 55562;

class Class_3_27518451A20BB161_245 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_8D0DE090C405AD34*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8D0DE090C405AD34* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8D0DE090C405AD34*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_245__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_245_ONTASKBEGIN_OFFSET))(this);
	}
};
