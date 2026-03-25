#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

namespace RPG::GameCore { class ShowBattleSkillEnhanced; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_88852C2816BA88B3_METHOD_3_8AEED6B54BC041B9_OFFSET UNITYSDK_OFFSET(0x886EDF0)
#define CLASS_3_88852C2816BA88B3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x886EB70)
#define CLASS_3_88852C2816BA88B3__CTOR_OFFSET UNITYSDK_OFFSET(0x886EB40)

inline static constexpr unsigned int Class_3_88852C2816BA88B3_TypeDefinitionIndex = 45382;

class Class_3_88852C2816BA88B3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowBattleSkillEnhanced*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleSkillEnhanced* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleSkillEnhanced*))((::PBYTE)hIl2Cpp + CLASS_3_88852C2816BA88B3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_88852C2816BA88B3_ONTASKBEGIN_OFFSET))(this);
	}

	static ::RPG::GameCore::ControlSkillType Method_3_8AEED6B54BC041B9(::RPG::GameCore::SkillType a1)
	{
		return ((::RPG::GameCore::ControlSkillType(*)(::RPG::GameCore::SkillType))((::PBYTE)hIl2Cpp + CLASS_3_88852C2816BA88B3_METHOD_3_8AEED6B54BC041B9_OFFSET))(a1);
	}
};
