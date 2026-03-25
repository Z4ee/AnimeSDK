#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87854DF4F09D42E1.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNPCNearbyAnimConfig; }

#define CLASS_2_B52FE6751DC92795_DOONENTER_OFFSET UNITYSDK_OFFSET(0x10B239C0)
#define CLASS_2_B52FE6751DC92795_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x10B23D30)
#define CLASS_2_B52FE6751DC92795__CTOR_OFFSET UNITYSDK_OFFSET(0x10B23970)
#define CLASS_2_B52FE6751DC92795___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0x10B240A0)
#define CLASS_2_B52FE6751DC92795___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x10B240B0)

inline static constexpr unsigned int Class_2_B52FE6751DC92795_TypeDefinitionIndex = 46343;

class Class_2_B52FE6751DC92795 : public ::Class_1_87854DF4F09D42E1
{
public:
	::RPG::GameCore::LevelNPCNearbyAnimConfig* Field_2_0; // 0x98

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::LevelNPCNearbyAnimConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LevelNPCNearbyAnimConfig*))((::PBYTE)hIl2Cpp + CLASS_2_B52FE6751DC92795__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B52FE6751DC92795_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_B52FE6751DC92795_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B52FE6751DC92795___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_B52FE6751DC92795___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
	}
};
