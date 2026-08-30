#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetEntityForbidCameraDither; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FAAEF21A8B1419A6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16CBE370)
#define CLASS_3_FAAEF21A8B1419A6__CTOR_OFFSET UNITYSDK_OFFSET(0x16CBE340)

inline static constexpr unsigned int Class_3_FAAEF21A8B1419A6_TypeDefinitionIndex = 56595;

class Class_3_FAAEF21A8B1419A6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetEntityForbidCameraDither*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEntityForbidCameraDither* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEntityForbidCameraDither*))((::PBYTE)hIl2Cpp + CLASS_3_FAAEF21A8B1419A6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FAAEF21A8B1419A6_ONTASKBEGIN_OFFSET))(this);
	}
};
