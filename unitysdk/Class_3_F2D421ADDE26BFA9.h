#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TargetUnMuteModifierEventSource; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F2D421ADDE26BFA9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x95CE180)
#define CLASS_3_F2D421ADDE26BFA9__CTOR_OFFSET UNITYSDK_OFFSET(0x95CE150)

inline static constexpr unsigned int Class_3_F2D421ADDE26BFA9_TypeDefinitionIndex = 50874;

class Class_3_F2D421ADDE26BFA9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TargetUnMuteModifierEventSource*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TargetUnMuteModifierEventSource* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TargetUnMuteModifierEventSource*))((::PBYTE)hIl2Cpp + CLASS_3_F2D421ADDE26BFA9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2D421ADDE26BFA9_ONTASKBEGIN_OFFSET))(this);
	}
};
