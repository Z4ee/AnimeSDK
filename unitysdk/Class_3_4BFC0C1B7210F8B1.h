#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ClearDynamicSkillButtonInput; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4BFC0C1B7210F8B1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1937B920)
#define CLASS_3_4BFC0C1B7210F8B1__CTOR_OFFSET UNITYSDK_OFFSET(0x1937B8F0)

inline static constexpr unsigned int Class_3_4BFC0C1B7210F8B1_TypeDefinitionIndex = 52469;

class Class_3_4BFC0C1B7210F8B1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ClearDynamicSkillButtonInput*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearDynamicSkillButtonInput* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearDynamicSkillButtonInput*))((::PBYTE)hIl2Cpp + CLASS_3_4BFC0C1B7210F8B1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4BFC0C1B7210F8B1_ONTASKBEGIN_OFFSET))(this);
	}
};
