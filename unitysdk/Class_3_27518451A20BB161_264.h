#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6DC0AFBFF6AC378E;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_264_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16162360)
#define CLASS_3_27518451A20BB161_264__CTOR_OFFSET UNITYSDK_OFFSET(0x16162330)

inline static constexpr unsigned int Class_3_27518451A20BB161_264_TypeDefinitionIndex = 55970;

class Class_3_27518451A20BB161_264 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6DC0AFBFF6AC378E*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6DC0AFBFF6AC378E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6DC0AFBFF6AC378E*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_264__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_264_ONTASKBEGIN_OFFSET))(this);
	}
};
