#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class RtSetDynamicValueByHealDataProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_13D9D3A3759AC80D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152DFC50)
#define CLASS_3_13D9D3A3759AC80D__CTOR_OFFSET UNITYSDK_OFFSET(0x152DFB70)

inline static constexpr unsigned int Class_3_13D9D3A3759AC80D_TypeDefinitionIndex = 54080;

class Class_3_13D9D3A3759AC80D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtSetDynamicValueByHealDataProperty*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtSetDynamicValueByHealDataProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtSetDynamicValueByHealDataProperty*))((::PBYTE)hIl2Cpp + CLASS_3_13D9D3A3759AC80D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_13D9D3A3759AC80D_ONTASKBEGIN_OFFSET))(this);
	}
};
