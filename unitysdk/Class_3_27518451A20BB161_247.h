#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A406659BC3B2A585_24;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_247_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6365F0)
#define CLASS_3_27518451A20BB161_247__CTOR_OFFSET UNITYSDK_OFFSET(0xB6365C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_247_TypeDefinitionIndex = 55874;

class Class_3_27518451A20BB161_247 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A406659BC3B2A585_24*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A406659BC3B2A585_24* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A406659BC3B2A585_24*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_247__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_247_ONTASKBEGIN_OFFSET))(this);
	}
};
