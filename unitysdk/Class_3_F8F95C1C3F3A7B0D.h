#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CreateTeamFormationSnapshot; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F8F95C1C3F3A7B0D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9A1930)
#define CLASS_3_F8F95C1C3F3A7B0D__CTOR_OFFSET UNITYSDK_OFFSET(0xB9A1900)

inline static constexpr unsigned int Class_3_F8F95C1C3F3A7B0D_TypeDefinitionIndex = 56541;

class Class_3_F8F95C1C3F3A7B0D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateTeamFormationSnapshot*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateTeamFormationSnapshot* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateTeamFormationSnapshot*))((::PBYTE)hIl2Cpp + CLASS_3_F8F95C1C3F3A7B0D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8F95C1C3F3A7B0D_ONTASKBEGIN_OFFSET))(this);
	}
};
