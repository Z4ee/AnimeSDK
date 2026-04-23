#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_95E2E9E62D670910;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_115_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x117B7E10)
#define CLASS_3_27518451A20BB161_115__CTOR_OFFSET UNITYSDK_OFFSET(0x117B7DE0)

inline static constexpr unsigned int Class_3_27518451A20BB161_115_TypeDefinitionIndex = 50688;

class Class_3_27518451A20BB161_115 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_95E2E9E62D670910*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_95E2E9E62D670910* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_95E2E9E62D670910*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_115__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_115_ONTASKBEGIN_OFFSET))(this);
	}
};
