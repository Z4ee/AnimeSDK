#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class HideMonsterSkillInViewMode; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B9125DBAB7E8FDD2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x143ADB00)
#define CLASS_3_B9125DBAB7E8FDD2__CTOR_OFFSET UNITYSDK_OFFSET(0x143ADAD0)

inline static constexpr unsigned int Class_3_B9125DBAB7E8FDD2_TypeDefinitionIndex = 54348;

class Class_3_B9125DBAB7E8FDD2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HideMonsterSkillInViewMode*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideMonsterSkillInViewMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideMonsterSkillInViewMode*))((::PBYTE)hIl2Cpp + CLASS_3_B9125DBAB7E8FDD2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9125DBAB7E8FDD2_ONTASKBEGIN_OFFSET))(this);
	}
};
