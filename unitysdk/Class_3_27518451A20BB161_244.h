#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_DD9806A245CB05B4;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_244_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155866C0)
#define CLASS_3_27518451A20BB161_244__CTOR_OFFSET UNITYSDK_OFFSET(0x15586690)

inline static constexpr unsigned int Class_3_27518451A20BB161_244_TypeDefinitionIndex = 55553;

class Class_3_27518451A20BB161_244 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DD9806A245CB05B4*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DD9806A245CB05B4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DD9806A245CB05B4*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_244__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_244_ONTASKBEGIN_OFFSET))(this);
	}
};
