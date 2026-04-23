#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetMissionAudioState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7E4B0198A7A81F1D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1239B4E0)
#define CLASS_3_7E4B0198A7A81F1D__CTOR_OFFSET UNITYSDK_OFFSET(0x1239B4B0)

inline static constexpr unsigned int Class_3_7E4B0198A7A81F1D_TypeDefinitionIndex = 53984;

class Class_3_7E4B0198A7A81F1D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetMissionAudioState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMissionAudioState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMissionAudioState*))((::PBYTE)hIl2Cpp + CLASS_3_7E4B0198A7A81F1D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7E4B0198A7A81F1D_ONTASKBEGIN_OFFSET))(this);
	}
};
