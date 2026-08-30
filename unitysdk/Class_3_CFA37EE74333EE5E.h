#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetMonsterPhasePointPrefab; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CFA37EE74333EE5E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFD6F50)
#define CLASS_3_CFA37EE74333EE5E__CTOR_OFFSET UNITYSDK_OFFSET(0xBFD6F20)

inline static constexpr unsigned int Class_3_CFA37EE74333EE5E_TypeDefinitionIndex = 48070;

class Class_3_CFA37EE74333EE5E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetMonsterPhasePointPrefab*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMonsterPhasePointPrefab* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMonsterPhasePointPrefab*))((::PBYTE)hIl2Cpp + CLASS_3_CFA37EE74333EE5E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CFA37EE74333EE5E_ONTASKBEGIN_OFFSET))(this);
	}
};
