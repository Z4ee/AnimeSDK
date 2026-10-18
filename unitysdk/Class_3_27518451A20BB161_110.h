#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7AA0663B46C8586F_19;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_110_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D8E110)
#define CLASS_3_27518451A20BB161_110_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D8E150)
#define CLASS_3_27518451A20BB161_110_TICK_OFFSET UNITYSDK_OFFSET(0x15D8E250)
#define CLASS_3_27518451A20BB161_110__CTOR_OFFSET UNITYSDK_OFFSET(0x15D8E0E0)

inline static constexpr unsigned int Class_3_27518451A20BB161_110_TypeDefinitionIndex = 53333;

class Class_3_27518451A20BB161_110 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7AA0663B46C8586F_19*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7AA0663B46C8586F_19* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7AA0663B46C8586F_19*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_110__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_110_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_110_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_110_TICK_OFFSET))(this, a1);
	}
};
