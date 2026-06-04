#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdventureSetAttackTargetWithoutBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FE3224095669DAFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12ABE6E0)
#define CLASS_3_FE3224095669DAFD__CTOR_OFFSET UNITYSDK_OFFSET(0x12ABE6B0)

inline static constexpr unsigned int Class_3_FE3224095669DAFD_TypeDefinitionIndex = 49129;

class Class_3_FE3224095669DAFD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureSetAttackTargetWithoutBattle*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureSetAttackTargetWithoutBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureSetAttackTargetWithoutBattle*))((::PBYTE)hIl2Cpp + CLASS_3_FE3224095669DAFD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3224095669DAFD_ONTASKBEGIN_OFFSET))(this);
	}
};
