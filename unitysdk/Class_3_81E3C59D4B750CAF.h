#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByHealDataProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_81E3C59D4B750CAF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x105CCFB0)
#define CLASS_3_81E3C59D4B750CAF__CTOR_OFFSET UNITYSDK_OFFSET(0x105CCED0)

inline static constexpr unsigned int Class_3_81E3C59D4B750CAF_TypeDefinitionIndex = 44402;

class Class_3_81E3C59D4B750CAF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByHealDataProperty*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByHealDataProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByHealDataProperty*))((::PBYTE)hIl2Cpp + CLASS_3_81E3C59D4B750CAF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_81E3C59D4B750CAF_ONTASKBEGIN_OFFSET))(this);
	}
};
