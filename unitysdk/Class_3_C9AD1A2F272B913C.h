#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OverrideSkillReadyCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C9AD1A2F272B913C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17AB0DD0)
#define CLASS_3_C9AD1A2F272B913C__CTOR_OFFSET UNITYSDK_OFFSET(0x17AB0DA0)

inline static constexpr unsigned int Class_3_C9AD1A2F272B913C_TypeDefinitionIndex = 52745;

class Class_3_C9AD1A2F272B913C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OverrideSkillReadyCamera*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideSkillReadyCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideSkillReadyCamera*))((::PBYTE)hIl2Cpp + CLASS_3_C9AD1A2F272B913C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9AD1A2F272B913C_ONTASKBEGIN_OFFSET))(this);
	}
};
