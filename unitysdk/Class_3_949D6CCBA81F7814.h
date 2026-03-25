#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RA_SetStimulusInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_949D6CCBA81F7814_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x89EAF40)
#define CLASS_3_949D6CCBA81F7814__CTOR_OFFSET UNITYSDK_OFFSET(0x89EAF10)

inline static constexpr unsigned int Class_3_949D6CCBA81F7814_TypeDefinitionIndex = 42126;

class Class_3_949D6CCBA81F7814 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RA_SetStimulusInfo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RA_SetStimulusInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RA_SetStimulusInfo*))((::PBYTE)hIl2Cpp + CLASS_3_949D6CCBA81F7814__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_949D6CCBA81F7814_ONTASKBEGIN_OFFSET))(this);
	}
};
