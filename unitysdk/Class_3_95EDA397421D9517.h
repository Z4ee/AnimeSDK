#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerRogueEnterNextRoom; }

#define CLASS_3_95EDA397421D9517_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11050790)
#define CLASS_3_95EDA397421D9517__CTOR_OFFSET UNITYSDK_OFFSET(0x11050760)

inline static constexpr unsigned int Class_3_95EDA397421D9517_TypeDefinitionIndex = 47473;

class Class_3_95EDA397421D9517 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerRogueEnterNextRoom*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerRogueEnterNextRoom* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerRogueEnterNextRoom*))((::PBYTE)hIl2Cpp + CLASS_3_95EDA397421D9517__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95EDA397421D9517_ONTASKBEGIN_OFFSET))(this);
	}
};
