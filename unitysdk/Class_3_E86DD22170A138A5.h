#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetDeathDragonLinjian; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E86DD22170A138A5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB455650)
#define CLASS_3_E86DD22170A138A5__CTOR_OFFSET UNITYSDK_OFFSET(0xB455620)

inline static constexpr unsigned int Class_3_E86DD22170A138A5_TypeDefinitionIndex = 55589;

class Class_3_E86DD22170A138A5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDeathDragonLinjian*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDeathDragonLinjian* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDeathDragonLinjian*))((::PBYTE)hIl2Cpp + CLASS_3_E86DD22170A138A5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E86DD22170A138A5_ONTASKBEGIN_OFFSET))(this);
	}
};
