#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_DD9806A245CB05B4;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_215_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x171E15B0)
#define CLASS_3_27518451A20BB161_215__CTOR_OFFSET UNITYSDK_OFFSET(0x171E1580)

inline static constexpr unsigned int Class_3_27518451A20BB161_215_TypeDefinitionIndex = 53039;

class Class_3_27518451A20BB161_215 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DD9806A245CB05B4*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DD9806A245CB05B4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DD9806A245CB05B4*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_215__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_215_ONTASKBEGIN_OFFSET))(this);
	}
};
