#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_B55657B4A455121A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_17_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAAD25C0)
#define CLASS_3_27518451A20BB161_17__CTOR_OFFSET UNITYSDK_OFFSET(0xAAD2590)

inline static constexpr unsigned int Class_3_27518451A20BB161_17_TypeDefinitionIndex = 49399;

class Class_3_27518451A20BB161_17 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_B55657B4A455121A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B55657B4A455121A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B55657B4A455121A*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_17__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_17_ONTASKBEGIN_OFFSET))(this);
	}
};
