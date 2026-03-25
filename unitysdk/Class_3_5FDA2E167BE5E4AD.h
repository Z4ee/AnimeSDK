#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvCharacterLerpAnimRunPoseParam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5FDA2E167BE5E4AD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x104A60F0)
#define CLASS_3_5FDA2E167BE5E4AD__CTOR_OFFSET UNITYSDK_OFFSET(0x104A60C0)

inline static constexpr unsigned int Class_3_5FDA2E167BE5E4AD_TypeDefinitionIndex = 42353;

class Class_3_5FDA2E167BE5E4AD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvCharacterLerpAnimRunPoseParam*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvCharacterLerpAnimRunPoseParam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvCharacterLerpAnimRunPoseParam*))((::PBYTE)hIl2Cpp + CLASS_3_5FDA2E167BE5E4AD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5FDA2E167BE5E4AD_ONTASKBEGIN_OFFSET))(this);
	}
};
