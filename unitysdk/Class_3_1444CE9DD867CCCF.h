#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DisableBattleTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1444CE9DD867CCCF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A1FE10)
#define CLASS_3_1444CE9DD867CCCF__CTOR_OFFSET UNITYSDK_OFFSET(0x17A1FDE0)

inline static constexpr unsigned int Class_3_1444CE9DD867CCCF_TypeDefinitionIndex = 55503;

class Class_3_1444CE9DD867CCCF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DisableBattleTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DisableBattleTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DisableBattleTarget*))((::PBYTE)hIl2Cpp + CLASS_3_1444CE9DD867CCCF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1444CE9DD867CCCF_ONTASKBEGIN_OFFSET))(this);
	}
};
