#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetCharacterAlwaysIdleState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1DFEDC78E1D057EA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8D78DA0)
#define CLASS_3_1DFEDC78E1D057EA__CTOR_OFFSET UNITYSDK_OFFSET(0x8D78D70)

inline static constexpr unsigned int Class_3_1DFEDC78E1D057EA_TypeDefinitionIndex = 44331;

class Class_3_1DFEDC78E1D057EA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetCharacterAlwaysIdleState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterAlwaysIdleState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterAlwaysIdleState*))((::PBYTE)hIl2Cpp + CLASS_3_1DFEDC78E1D057EA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1DFEDC78E1D057EA_ONTASKBEGIN_OFFSET))(this);
	}
};
