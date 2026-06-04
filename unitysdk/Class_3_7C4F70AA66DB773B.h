#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvModifierOverrideFeatureFlagParam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7C4F70AA66DB773B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12AA2820)
#define CLASS_3_7C4F70AA66DB773B__CTOR_OFFSET UNITYSDK_OFFSET(0x12AA27F0)

inline static constexpr unsigned int Class_3_7C4F70AA66DB773B_TypeDefinitionIndex = 49000;

class Class_3_7C4F70AA66DB773B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvModifierOverrideFeatureFlagParam*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvModifierOverrideFeatureFlagParam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvModifierOverrideFeatureFlagParam*))((::PBYTE)hIl2Cpp + CLASS_3_7C4F70AA66DB773B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C4F70AA66DB773B_ONTASKBEGIN_OFFSET))(this);
	}
};
