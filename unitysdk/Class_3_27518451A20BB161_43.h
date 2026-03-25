#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_2D512E916C716041;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_43_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x89250A0)
#define CLASS_3_27518451A20BB161_43__CTOR_OFFSET UNITYSDK_OFFSET(0x8925070)

inline static constexpr unsigned int Class_3_27518451A20BB161_43_TypeDefinitionIndex = 42814;

class Class_3_27518451A20BB161_43 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_2D512E916C716041*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2D512E916C716041* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2D512E916C716041*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_43__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_43_ONTASKBEGIN_OFFSET))(this);
	}
};
