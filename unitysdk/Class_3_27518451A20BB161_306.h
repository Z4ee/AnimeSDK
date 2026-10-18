#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_D3956C55B38575F9;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_306_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB9E630)
#define CLASS_3_27518451A20BB161_306__CTOR_OFFSET UNITYSDK_OFFSET(0xBB9E600)

inline static constexpr unsigned int Class_3_27518451A20BB161_306_TypeDefinitionIndex = 58435;

class Class_3_27518451A20BB161_306 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_D3956C55B38575F9*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D3956C55B38575F9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D3956C55B38575F9*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_306__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_306_ONTASKBEGIN_OFFSET))(this);
	}
};
