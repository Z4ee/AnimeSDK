#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87854DF4F09D42E1.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNPCNearbyEventConfig; }

#define CLASS_2_E811F83B73D7BAEB_DOONENTER_OFFSET UNITYSDK_OFFSET(0x116BE490)
#define CLASS_2_E811F83B73D7BAEB_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x116BE820)
#define CLASS_2_E811F83B73D7BAEB__CTOR_OFFSET UNITYSDK_OFFSET(0x116BE440)
#define CLASS_2_E811F83B73D7BAEB___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0x116BEBB0)
#define CLASS_2_E811F83B73D7BAEB___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x116BEBC0)

inline static constexpr unsigned int Class_2_E811F83B73D7BAEB_TypeDefinitionIndex = 46344;

class Class_2_E811F83B73D7BAEB : public ::Class_1_87854DF4F09D42E1
{
public:
	::RPG::GameCore::LevelNPCNearbyEventConfig* Field_2_0; // 0x98

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::LevelNPCNearbyEventConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LevelNPCNearbyEventConfig*))((::PBYTE)hIl2Cpp + CLASS_2_E811F83B73D7BAEB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E811F83B73D7BAEB_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_E811F83B73D7BAEB_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E811F83B73D7BAEB___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_E811F83B73D7BAEB___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
	}
};
