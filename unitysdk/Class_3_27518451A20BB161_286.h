#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_D3956C55B38575F9;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_286_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCCB5D0)
#define CLASS_3_27518451A20BB161_286__CTOR_OFFSET UNITYSDK_OFFSET(0xBCCB5A0)

inline static constexpr unsigned int Class_3_27518451A20BB161_286_TypeDefinitionIndex = 58584;

class Class_3_27518451A20BB161_286 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_D3956C55B38575F9*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D3956C55B38575F9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D3956C55B38575F9*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_286__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_286_ONTASKBEGIN_OFFSET))(this);
	}
};
