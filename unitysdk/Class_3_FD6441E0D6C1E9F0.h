#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DeployPuzzleChangeLineIntensity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FD6441E0D6C1E9F0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14FC2990)
#define CLASS_3_FD6441E0D6C1E9F0__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC2960)

inline static constexpr unsigned int Class_3_FD6441E0D6C1E9F0_TypeDefinitionIndex = 55488;

class Class_3_FD6441E0D6C1E9F0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DeployPuzzleChangeLineIntensity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DeployPuzzleChangeLineIntensity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DeployPuzzleChangeLineIntensity*))((::PBYTE)hIl2Cpp + CLASS_3_FD6441E0D6C1E9F0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FD6441E0D6C1E9F0_ONTASKBEGIN_OFFSET))(this);
	}
};
