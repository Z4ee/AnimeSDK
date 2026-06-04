#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StartAdvSkillCombo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9A9668D5AE8C95DB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC467CA0)
#define CLASS_3_9A9668D5AE8C95DB__CTOR_OFFSET UNITYSDK_OFFSET(0xC467C70)

inline static constexpr unsigned int Class_3_9A9668D5AE8C95DB_TypeDefinitionIndex = 54856;

class Class_3_9A9668D5AE8C95DB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StartAdvSkillCombo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartAdvSkillCombo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartAdvSkillCombo*))((::PBYTE)hIl2Cpp + CLASS_3_9A9668D5AE8C95DB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9A9668D5AE8C95DB_ONTASKBEGIN_OFFSET))(this);
	}
};
