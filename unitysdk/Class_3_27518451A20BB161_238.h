#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6CFD1ACC077590D5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_238_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9D8860)
#define CLASS_3_27518451A20BB161_238_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9D88A0)
#define CLASS_3_27518451A20BB161_238__CTOR_OFFSET UNITYSDK_OFFSET(0xB9D8830)

inline static constexpr unsigned int Class_3_27518451A20BB161_238_TypeDefinitionIndex = 55504;

class Class_3_27518451A20BB161_238 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6CFD1ACC077590D5*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6CFD1ACC077590D5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6CFD1ACC077590D5*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_238__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_238_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_238_ONTASKBEGIN_OFFSET))(this);
	}
};
