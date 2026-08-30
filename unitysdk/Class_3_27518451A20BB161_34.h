#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_393193F449A4766C;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_34_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB86100)
#define CLASS_3_27518451A20BB161_34__CTOR_OFFSET UNITYSDK_OFFSET(0xBB860D0)

inline static constexpr unsigned int Class_3_27518451A20BB161_34_TypeDefinitionIndex = 53101;

class Class_3_27518451A20BB161_34 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_393193F449A4766C*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_393193F449A4766C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_393193F449A4766C*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_34__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_34_ONTASKBEGIN_OFFSET))(this);
	}
};
