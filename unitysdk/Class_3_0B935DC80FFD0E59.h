#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowChallegeStoryWavePanel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0B935DC80FFD0E59_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B46EA0)
#define CLASS_3_0B935DC80FFD0E59__CTOR_OFFSET UNITYSDK_OFFSET(0x15B46E70)

inline static constexpr unsigned int Class_3_0B935DC80FFD0E59_TypeDefinitionIndex = 58772;

class Class_3_0B935DC80FFD0E59 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowChallegeStoryWavePanel*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowChallegeStoryWavePanel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowChallegeStoryWavePanel*))((::PBYTE)hIl2Cpp + CLASS_3_0B935DC80FFD0E59__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B935DC80FFD0E59_ONTASKBEGIN_OFFSET))(this);
	}
};
