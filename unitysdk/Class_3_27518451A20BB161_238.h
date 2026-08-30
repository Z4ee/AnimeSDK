#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_0062005ACF71ED36;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_238_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A814990)
#define CLASS_3_27518451A20BB161_238__CTOR_OFFSET UNITYSDK_OFFSET(0x1A814960)

inline static constexpr unsigned int Class_3_27518451A20BB161_238_TypeDefinitionIndex = 55804;

class Class_3_27518451A20BB161_238 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_0062005ACF71ED36*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_0062005ACF71ED36* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_0062005ACF71ED36*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_238__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_238_ONTASKBEGIN_OFFSET))(this);
	}
};
