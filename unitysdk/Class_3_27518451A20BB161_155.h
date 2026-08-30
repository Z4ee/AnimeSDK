#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_2D7DFAB849E602CE;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_155_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1579DFA0)
#define CLASS_3_27518451A20BB161_155__CTOR_OFFSET UNITYSDK_OFFSET(0x1579DF70)

inline static constexpr unsigned int Class_3_27518451A20BB161_155_TypeDefinitionIndex = 55001;

class Class_3_27518451A20BB161_155 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_2D7DFAB849E602CE*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2D7DFAB849E602CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2D7DFAB849E602CE*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_155__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_155_ONTASKBEGIN_OFFSET))(this);
	}
};
