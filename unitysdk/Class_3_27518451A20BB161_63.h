#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_4D8178BD1AAA10FB;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_63_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9615AB0)
#define CLASS_3_27518451A20BB161_63__CTOR_OFFSET UNITYSDK_OFFSET(0x9615A80)

inline static constexpr unsigned int Class_3_27518451A20BB161_63_TypeDefinitionIndex = 49151;

class Class_3_27518451A20BB161_63 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_4D8178BD1AAA10FB*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_4D8178BD1AAA10FB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_4D8178BD1AAA10FB*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_63__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_63_ONTASKBEGIN_OFFSET))(this);
	}
};
