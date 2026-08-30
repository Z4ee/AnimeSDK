#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_D36839C61E9EA81F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_61_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163A12C0)
#define CLASS_3_27518451A20BB161_61__CTOR_OFFSET UNITYSDK_OFFSET(0x163A1290)

inline static constexpr unsigned int Class_3_27518451A20BB161_61_TypeDefinitionIndex = 53140;

class Class_3_27518451A20BB161_61 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_D36839C61E9EA81F*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D36839C61E9EA81F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D36839C61E9EA81F*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_61__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_61_ONTASKBEGIN_OFFSET))(this);
	}
};
