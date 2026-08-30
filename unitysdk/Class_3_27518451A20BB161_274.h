#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7AA0663B46C8586F_18;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_274_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x154A6030)
#define CLASS_3_27518451A20BB161_274_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154A5FA0)
#define CLASS_3_27518451A20BB161_274__CTOR_OFFSET UNITYSDK_OFFSET(0x154A5F70)

inline static constexpr unsigned int Class_3_27518451A20BB161_274_TypeDefinitionIndex = 58043;

class Class_3_27518451A20BB161_274 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7AA0663B46C8586F_18*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7AA0663B46C8586F_18* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7AA0663B46C8586F_18*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_274__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_274_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_274_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}
};
