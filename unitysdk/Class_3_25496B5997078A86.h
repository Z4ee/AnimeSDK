#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_TriggerCustomString; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_25496B5997078A86_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8828280)
#define CLASS_3_25496B5997078A86_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8828390)
#define CLASS_3_25496B5997078A86__CTOR_OFFSET UNITYSDK_OFFSET(0x8828250)

inline static constexpr unsigned int Class_3_25496B5997078A86_TypeDefinitionIndex = 42279;

class Class_3_25496B5997078A86 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_TriggerCustomString*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_TriggerCustomString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_TriggerCustomString*))((::PBYTE)hIl2Cpp + CLASS_3_25496B5997078A86__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25496B5997078A86_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25496B5997078A86_ONTASKRESET_OFFSET))(this);
	}
};
