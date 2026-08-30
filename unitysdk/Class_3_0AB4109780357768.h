#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DeployPuzzleBasePointAction; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0AB4109780357768_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x176F4180)
#define CLASS_3_0AB4109780357768__CTOR_OFFSET UNITYSDK_OFFSET(0x176F4150)

inline static constexpr unsigned int Class_3_0AB4109780357768_TypeDefinitionIndex = 58218;

class Class_3_0AB4109780357768 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DeployPuzzleBasePointAction*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DeployPuzzleBasePointAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DeployPuzzleBasePointAction*))((::PBYTE)hIl2Cpp + CLASS_3_0AB4109780357768__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AB4109780357768_ONTASKBEGIN_OFFSET))(this);
	}
};
