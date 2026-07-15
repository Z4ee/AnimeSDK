#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnableDynamicSkillTargetSelection; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C99B9CD41EC009B3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1518B060)
#define CLASS_3_C99B9CD41EC009B3__CTOR_OFFSET UNITYSDK_OFFSET(0x1518B030)

inline static constexpr unsigned int Class_3_C99B9CD41EC009B3_TypeDefinitionIndex = 52523;

class Class_3_C99B9CD41EC009B3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableDynamicSkillTargetSelection*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableDynamicSkillTargetSelection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableDynamicSkillTargetSelection*))((::PBYTE)hIl2Cpp + CLASS_3_C99B9CD41EC009B3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C99B9CD41EC009B3_ONTASKBEGIN_OFFSET))(this);
	}
};
