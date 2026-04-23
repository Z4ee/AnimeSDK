#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerSoundHit; }

#define CLASS_3_7AB146200313011C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x119E1EE0)
#define CLASS_3_7AB146200313011C__CTOR_OFFSET UNITYSDK_OFFSET(0x119E1EB0)

inline static constexpr unsigned int Class_3_7AB146200313011C_TypeDefinitionIndex = 52049;

class Class_3_7AB146200313011C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerSoundHit*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerSoundHit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerSoundHit*))((::PBYTE)hIl2Cpp + CLASS_3_7AB146200313011C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7AB146200313011C_ONTASKBEGIN_OFFSET))(this);
	}
};
