#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A406659BC3B2A585_26;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_142_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC26460)
#define CLASS_3_27518451A20BB161_142_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC264A0)
#define CLASS_3_27518451A20BB161_142__CTOR_OFFSET UNITYSDK_OFFSET(0xBC26430)

inline static constexpr unsigned int Class_3_27518451A20BB161_142_TypeDefinitionIndex = 53895;

class Class_3_27518451A20BB161_142 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A406659BC3B2A585_26*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A406659BC3B2A585_26* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A406659BC3B2A585_26*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_142__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_142_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_142_ONTASKBEGIN_OFFSET))(this);
	}
};
