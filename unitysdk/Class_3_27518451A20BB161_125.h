#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BF0209E2F29D1F5A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_125_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A56B90)
#define CLASS_3_27518451A20BB161_125_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16A56BD0)
#define CLASS_3_27518451A20BB161_125__CTOR_OFFSET UNITYSDK_OFFSET(0x16A56B60)

inline static constexpr unsigned int Class_3_27518451A20BB161_125_TypeDefinitionIndex = 51406;

class Class_3_27518451A20BB161_125 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_BF0209E2F29D1F5A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BF0209E2F29D1F5A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BF0209E2F29D1F5A*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_125__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_125_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_125_ONTASKBEGIN_OFFSET))(this);
	}
};
