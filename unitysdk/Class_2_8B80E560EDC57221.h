#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A696AB4980B3D7B5.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNPCNearbyEventConfig; }

#define CLASS_2_8B80E560EDC57221_DOONENTER_OFFSET UNITYSDK_OFFSET(0xA97F650)
#define CLASS_2_8B80E560EDC57221_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xA97FA20)
#define CLASS_2_8B80E560EDC57221__CTOR_OFFSET UNITYSDK_OFFSET(0xA97F600)
#define CLASS_2_8B80E560EDC57221___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0xA97FE00)
#define CLASS_2_8B80E560EDC57221___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xA97FE10)

inline static constexpr unsigned int Class_2_8B80E560EDC57221_TypeDefinitionIndex = 53729;

class Class_2_8B80E560EDC57221 : public ::Class_1_A696AB4980B3D7B5
{
public:
	::RPG::GameCore::LevelNPCNearbyEventConfig* Field_2_0; // 0x98

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::LevelNPCNearbyEventConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LevelNPCNearbyEventConfig*))((::PBYTE)hIl2Cpp + CLASS_2_8B80E560EDC57221__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8B80E560EDC57221_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_8B80E560EDC57221_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8B80E560EDC57221___IFIXBASEPROXY_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_8B80E560EDC57221___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, a1, a2);
	}
};
