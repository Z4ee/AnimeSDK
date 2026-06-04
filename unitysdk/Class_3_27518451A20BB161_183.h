#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_2D512E916C716041_11;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_183_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x136E47A0)
#define CLASS_3_27518451A20BB161_183_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x136E4710)
#define CLASS_3_27518451A20BB161_183__CTOR_OFFSET UNITYSDK_OFFSET(0x136E46E0)

inline static constexpr unsigned int Class_3_27518451A20BB161_183_TypeDefinitionIndex = 54096;

class Class_3_27518451A20BB161_183 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_2D512E916C716041_11*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2D512E916C716041_11* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2D512E916C716041_11*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_183__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_183_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_183_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}
};
