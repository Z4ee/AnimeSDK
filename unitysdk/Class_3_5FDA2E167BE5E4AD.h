#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvCharacterLerpAnimRunPoseParam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5FDA2E167BE5E4AD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x175320A0)
#define CLASS_3_5FDA2E167BE5E4AD__CTOR_OFFSET UNITYSDK_OFFSET(0x17532070)

inline static constexpr unsigned int Class_3_5FDA2E167BE5E4AD_TypeDefinitionIndex = 49952;

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
