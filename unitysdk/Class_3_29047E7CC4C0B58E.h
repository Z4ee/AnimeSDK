#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RtSkillAbort; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_29047E7CC4C0B58E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12944840)
#define CLASS_3_29047E7CC4C0B58E__CTOR_OFFSET UNITYSDK_OFFSET(0x12944810)

inline static constexpr unsigned int Class_3_29047E7CC4C0B58E_TypeDefinitionIndex = 49712;

class Class_3_29047E7CC4C0B58E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtSkillAbort*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtSkillAbort* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtSkillAbort*))((::PBYTE)hIl2Cpp + CLASS_3_29047E7CC4C0B58E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29047E7CC4C0B58E_ONTASKBEGIN_OFFSET))(this);
	}
};
