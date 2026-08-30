#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_854B63A26E8640A7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_243_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5A9B60)
#define CLASS_3_27518451A20BB161_243__CTOR_OFFSET UNITYSDK_OFFSET(0xB5A9B30)

inline static constexpr unsigned int Class_3_27518451A20BB161_243_TypeDefinitionIndex = 55854;

class Class_3_27518451A20BB161_243 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_854B63A26E8640A7*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_854B63A26E8640A7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_854B63A26E8640A7*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_243__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_243_ONTASKBEGIN_OFFSET))(this);
	}
};
