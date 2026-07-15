#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ResetMissionAudioState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7F71B47B3D7A195D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A9FA10)
#define CLASS_3_7F71B47B3D7A195D__CTOR_OFFSET UNITYSDK_OFFSET(0x17A9F9E0)

inline static constexpr unsigned int Class_3_7F71B47B3D7A195D_TypeDefinitionIndex = 55815;

class Class_3_7F71B47B3D7A195D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ResetMissionAudioState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetMissionAudioState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetMissionAudioState*))((::PBYTE)hIl2Cpp + CLASS_3_7F71B47B3D7A195D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7F71B47B3D7A195D_ONTASKBEGIN_OFFSET))(this);
	}
};
