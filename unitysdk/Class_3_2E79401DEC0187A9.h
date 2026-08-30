#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DeployPuzzleChangeBoardState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2E79401DEC0187A9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6D83A0)
#define CLASS_3_2E79401DEC0187A9__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D8370)

inline static constexpr unsigned int Class_3_2E79401DEC0187A9_TypeDefinitionIndex = 58220;

class Class_3_2E79401DEC0187A9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DeployPuzzleChangeBoardState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DeployPuzzleChangeBoardState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DeployPuzzleChangeBoardState*))((::PBYTE)hIl2Cpp + CLASS_3_2E79401DEC0187A9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E79401DEC0187A9_ONTASKBEGIN_OFFSET))(this);
	}
};
