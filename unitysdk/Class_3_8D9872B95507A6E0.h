#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueBySkillProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8D9872B95507A6E0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9083CC0)
#define CLASS_3_8D9872B95507A6E0__CTOR_OFFSET UNITYSDK_OFFSET(0x9083BE0)

inline static constexpr unsigned int Class_3_8D9872B95507A6E0_TypeDefinitionIndex = 51138;

class Class_3_8D9872B95507A6E0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueBySkillProperty*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueBySkillProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueBySkillProperty*))((::PBYTE)hIl2Cpp + CLASS_3_8D9872B95507A6E0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8D9872B95507A6E0_ONTASKBEGIN_OFFSET))(this);
	}
};
