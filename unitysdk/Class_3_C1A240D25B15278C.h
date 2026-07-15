#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetDynamicValueBySkillStanceValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C1A240D25B15278C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18C89130)
#define CLASS_3_C1A240D25B15278C__CTOR_OFFSET UNITYSDK_OFFSET(0x18C89100)

inline static constexpr unsigned int Class_3_C1A240D25B15278C_TypeDefinitionIndex = 52955;

class Class_3_C1A240D25B15278C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueBySkillStanceValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueBySkillStanceValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueBySkillStanceValue*))((::PBYTE)hIl2Cpp + CLASS_3_C1A240D25B15278C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C1A240D25B15278C_ONTASKBEGIN_OFFSET))(this);
	}
};
