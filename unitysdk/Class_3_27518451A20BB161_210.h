#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6CFD1ACC077590D5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_210_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A833B0)
#define CLASS_3_27518451A20BB161_210_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16A833F0)
#define CLASS_3_27518451A20BB161_210__CTOR_OFFSET UNITYSDK_OFFSET(0x16A83380)

inline static constexpr unsigned int Class_3_27518451A20BB161_210_TypeDefinitionIndex = 52991;

class Class_3_27518451A20BB161_210 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6CFD1ACC077590D5*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6CFD1ACC077590D5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6CFD1ACC077590D5*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_210__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_210_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_210_ONTASKBEGIN_OFFSET))(this);
	}
};
