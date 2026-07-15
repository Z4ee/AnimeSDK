#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_CA1429BC44D2F90F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_218_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1425A2D0)
#define CLASS_3_27518451A20BB161_218__CTOR_OFFSET UNITYSDK_OFFSET(0x1425A2A0)

inline static constexpr unsigned int Class_3_27518451A20BB161_218_TypeDefinitionIndex = 53052;

class Class_3_27518451A20BB161_218 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CA1429BC44D2F90F*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CA1429BC44D2F90F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CA1429BC44D2F90F*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_218__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_218_ONTASKBEGIN_OFFSET))(this);
	}
};
