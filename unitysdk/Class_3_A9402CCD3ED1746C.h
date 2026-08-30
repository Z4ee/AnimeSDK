#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetBattleTargetProgress; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A9402CCD3ED1746C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBBB590)
#define CLASS_3_A9402CCD3ED1746C__CTOR_OFFSET UNITYSDK_OFFSET(0xBBBB560)

inline static constexpr unsigned int Class_3_A9402CCD3ED1746C_TypeDefinitionIndex = 58676;

class Class_3_A9402CCD3ED1746C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetBattleTargetProgress*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleTargetProgress* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleTargetProgress*))((::PBYTE)hIl2Cpp + CLASS_3_A9402CCD3ED1746C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A9402CCD3ED1746C_ONTASKBEGIN_OFFSET))(this);
	}
};
