#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"

namespace RPG::GameCore { class SO_TriggerGroupEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5FE2C31549BFA10A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15713770)
#define CLASS_3_5FE2C31549BFA10A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157139B0)
#define CLASS_3_5FE2C31549BFA10A__CTOR_OFFSET UNITYSDK_OFFSET(0x15713720)

inline static constexpr unsigned int Class_3_5FE2C31549BFA10A_TypeDefinitionIndex = 52413;

class Class_3_5FE2C31549BFA10A : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_TriggerGroupEvent*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_TriggerGroupEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_TriggerGroupEvent*))((::PBYTE)hIl2Cpp + CLASS_3_5FE2C31549BFA10A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5FE2C31549BFA10A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5FE2C31549BFA10A_ONTASKRESET_OFFSET))(this);
	}
};
