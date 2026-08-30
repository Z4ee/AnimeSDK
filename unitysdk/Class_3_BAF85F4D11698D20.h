#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetAbilityTagMapping; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BAF85F4D11698D20_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157509E0)
#define CLASS_3_BAF85F4D11698D20__CTOR_OFFSET UNITYSDK_OFFSET(0x157509B0)

inline static constexpr unsigned int Class_3_BAF85F4D11698D20_TypeDefinitionIndex = 55533;

class Class_3_BAF85F4D11698D20 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetAbilityTagMapping*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAbilityTagMapping* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAbilityTagMapping*))((::PBYTE)hIl2Cpp + CLASS_3_BAF85F4D11698D20__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BAF85F4D11698D20_ONTASKBEGIN_OFFSET))(this);
	}
};
