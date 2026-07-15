#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_DB032533D26531DD;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_238_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x177C9960)
#define CLASS_3_27518451A20BB161_238__CTOR_OFFSET UNITYSDK_OFFSET(0x177C9930)

inline static constexpr unsigned int Class_3_27518451A20BB161_238_TypeDefinitionIndex = 53214;

class Class_3_27518451A20BB161_238 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DB032533D26531DD*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DB032533D26531DD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DB032533D26531DD*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_238__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_238_ONTASKBEGIN_OFFSET))(this);
	}
};
