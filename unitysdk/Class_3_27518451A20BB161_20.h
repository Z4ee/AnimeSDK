#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A33B829C07C46E7D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_20_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12A4FEB0)
#define CLASS_3_27518451A20BB161_20__CTOR_OFFSET UNITYSDK_OFFSET(0x12A4FE80)

inline static constexpr unsigned int Class_3_27518451A20BB161_20_TypeDefinitionIndex = 48738;

class Class_3_27518451A20BB161_20 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A33B829C07C46E7D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A33B829C07C46E7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A33B829C07C46E7D*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_20__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_20_ONTASKBEGIN_OFFSET))(this);
	}
};
