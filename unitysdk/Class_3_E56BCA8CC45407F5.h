#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ApplyMonsterPhaseOverrideConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E56BCA8CC45407F5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA3D0640)
#define CLASS_3_E56BCA8CC45407F5__CTOR_OFFSET UNITYSDK_OFFSET(0xA3D0610)

inline static constexpr unsigned int Class_3_E56BCA8CC45407F5_TypeDefinitionIndex = 51884;

class Class_3_E56BCA8CC45407F5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ApplyMonsterPhaseOverrideConfig*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ApplyMonsterPhaseOverrideConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ApplyMonsterPhaseOverrideConfig*))((::PBYTE)hIl2Cpp + CLASS_3_E56BCA8CC45407F5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E56BCA8CC45407F5_ONTASKBEGIN_OFFSET))(this);
	}
};
