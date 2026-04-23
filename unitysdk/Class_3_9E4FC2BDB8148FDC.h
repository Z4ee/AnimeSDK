#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PumanHuntTriggerEscapeEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9E4FC2BDB8148FDC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x92264C0)
#define CLASS_3_9E4FC2BDB8148FDC__CTOR_OFFSET UNITYSDK_OFFSET(0x9226490)

inline static constexpr unsigned int Class_3_9E4FC2BDB8148FDC_TypeDefinitionIndex = 49043;

class Class_3_9E4FC2BDB8148FDC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PumanHuntTriggerEscapeEvent*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PumanHuntTriggerEscapeEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PumanHuntTriggerEscapeEvent*))((::PBYTE)hIl2Cpp + CLASS_3_9E4FC2BDB8148FDC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E4FC2BDB8148FDC_ONTASKBEGIN_OFFSET))(this);
	}
};
