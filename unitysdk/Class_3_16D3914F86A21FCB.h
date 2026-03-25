#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRelayFlameSetSpecialFinalLevel; }

#define CLASS_3_16D3914F86A21FCB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD7B2160)
#define CLASS_3_16D3914F86A21FCB__CTOR_OFFSET UNITYSDK_OFFSET(0xD7B2130)

inline static constexpr unsigned int Class_3_16D3914F86A21FCB_TypeDefinitionIndex = 43191;

class Class_3_16D3914F86A21FCB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TimeRelayFlameSetSpecialFinalLevel*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TimeRelayFlameSetSpecialFinalLevel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TimeRelayFlameSetSpecialFinalLevel*))((::PBYTE)hIl2Cpp + CLASS_3_16D3914F86A21FCB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_16D3914F86A21FCB_ONTASKBEGIN_OFFSET))(this);
	}
};
