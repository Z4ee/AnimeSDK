#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnableRoleTrialChangeLineupLeader; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_95807BE11CF9A3E2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA196050)
#define CLASS_3_95807BE11CF9A3E2__CTOR_OFFSET UNITYSDK_OFFSET(0xA196020)

inline static constexpr unsigned int Class_3_95807BE11CF9A3E2_TypeDefinitionIndex = 46882;

class Class_3_95807BE11CF9A3E2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableRoleTrialChangeLineupLeader*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableRoleTrialChangeLineupLeader* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableRoleTrialChangeLineupLeader*))((::PBYTE)hIl2Cpp + CLASS_3_95807BE11CF9A3E2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95807BE11CF9A3E2_ONTASKBEGIN_OFFSET))(this);
	}
};
