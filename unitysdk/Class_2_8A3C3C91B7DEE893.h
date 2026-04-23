#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_59305B446B42427E.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNPCNearbyEventConfig; }

#define CLASS_2_8A3C3C91B7DEE893_DOONENTER_OFFSET UNITYSDK_OFFSET(0xA527D40)
#define CLASS_2_8A3C3C91B7DEE893_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xA5280F0)
#define CLASS_2_8A3C3C91B7DEE893__CTOR_OFFSET UNITYSDK_OFFSET(0xA527CF0)
#define CLASS_2_8A3C3C91B7DEE893___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0xA5284B0)
#define CLASS_2_8A3C3C91B7DEE893___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xA5284C0)

inline static constexpr unsigned int Class_2_8A3C3C91B7DEE893_TypeDefinitionIndex = 53019;

class Class_2_8A3C3C91B7DEE893 : public ::Class_1_59305B446B42427E
{
public:
	::RPG::GameCore::LevelNPCNearbyEventConfig* Field_2_0; // 0x98

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::LevelNPCNearbyEventConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LevelNPCNearbyEventConfig*))((::PBYTE)hIl2Cpp + CLASS_2_8A3C3C91B7DEE893__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8A3C3C91B7DEE893_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_8A3C3C91B7DEE893_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8A3C3C91B7DEE893___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_8A3C3C91B7DEE893___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
	}
};
