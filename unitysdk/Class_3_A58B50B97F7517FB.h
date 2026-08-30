#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetAttachEffectTimeSlow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A58B50B97F7517FB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4CC6D0)
#define CLASS_3_A58B50B97F7517FB__CTOR_OFFSET UNITYSDK_OFFSET(0xB4CC6A0)

inline static constexpr unsigned int Class_3_A58B50B97F7517FB_TypeDefinitionIndex = 55546;

class Class_3_A58B50B97F7517FB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetAttachEffectTimeSlow*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAttachEffectTimeSlow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAttachEffectTimeSlow*))((::PBYTE)hIl2Cpp + CLASS_3_A58B50B97F7517FB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A58B50B97F7517FB_ONTASKBEGIN_OFFSET))(this);
	}
};
