#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RestoreTeamFormationSnapshot; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DF1DABD0D1183CAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13912E40)
#define CLASS_3_DF1DABD0D1183CAA__CTOR_OFFSET UNITYSDK_OFFSET(0x13912E10)

inline static constexpr unsigned int Class_3_DF1DABD0D1183CAA_TypeDefinitionIndex = 52649;

class Class_3_DF1DABD0D1183CAA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RestoreTeamFormationSnapshot*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RestoreTeamFormationSnapshot* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RestoreTeamFormationSnapshot*))((::PBYTE)hIl2Cpp + CLASS_3_DF1DABD0D1183CAA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DF1DABD0D1183CAA_ONTASKBEGIN_OFFSET))(this);
	}
};
