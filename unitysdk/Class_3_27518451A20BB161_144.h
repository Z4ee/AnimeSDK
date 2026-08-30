#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A406659BC3B2A585_26;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_144_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF3FE060)
#define CLASS_3_27518451A20BB161_144_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF3FE0A0)
#define CLASS_3_27518451A20BB161_144__CTOR_OFFSET UNITYSDK_OFFSET(0xF3FE030)

inline static constexpr unsigned int Class_3_27518451A20BB161_144_TypeDefinitionIndex = 54142;

class Class_3_27518451A20BB161_144 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A406659BC3B2A585_26*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A406659BC3B2A585_26* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A406659BC3B2A585_26*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_144__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_144_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_144_ONTASKBEGIN_OFFSET))(this);
	}
};
