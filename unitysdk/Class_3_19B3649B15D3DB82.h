#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StackAIUpperGroup; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_19B3649B15D3DB82_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A40330)
#define CLASS_3_19B3649B15D3DB82__CTOR_OFFSET UNITYSDK_OFFSET(0x17A40300)

inline static constexpr unsigned int Class_3_19B3649B15D3DB82_TypeDefinitionIndex = 48073;

class Class_3_19B3649B15D3DB82 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StackAIUpperGroup*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackAIUpperGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackAIUpperGroup*))((::PBYTE)hIl2Cpp + CLASS_3_19B3649B15D3DB82__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_19B3649B15D3DB82_ONTASKBEGIN_OFFSET))(this);
	}
};
