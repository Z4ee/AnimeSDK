#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DeployPuzzleGiveBackStone; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2C594978CB450F97_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x926E8B0)
#define CLASS_3_2C594978CB450F97__CTOR_OFFSET UNITYSDK_OFFSET(0x926E880)

inline static constexpr unsigned int Class_3_2C594978CB450F97_TypeDefinitionIndex = 53557;

class Class_3_2C594978CB450F97 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DeployPuzzleGiveBackStone*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DeployPuzzleGiveBackStone* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DeployPuzzleGiveBackStone*))((::PBYTE)hIl2Cpp + CLASS_3_2C594978CB450F97__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C594978CB450F97_ONTASKBEGIN_OFFSET))(this);
	}
};
