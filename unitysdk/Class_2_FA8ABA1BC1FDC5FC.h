#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A696AB4980B3D7B5.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_FA8ABA1BC1FDC5FC_DOONENTER_OFFSET UNITYSDK_OFFSET(0x14405460)
#define CLASS_2_FA8ABA1BC1FDC5FC_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x144054D0)
#define CLASS_2_FA8ABA1BC1FDC5FC__CTOR_OFFSET UNITYSDK_OFFSET(0x14405420)
#define CLASS_2_FA8ABA1BC1FDC5FC___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0x14405550)
#define CLASS_2_FA8ABA1BC1FDC5FC___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x14405560)

inline static constexpr unsigned int Class_2_FA8ABA1BC1FDC5FC_TypeDefinitionIndex = 53731;

class Class_2_FA8ABA1BC1FDC5FC : public ::Class_1_A696AB4980B3D7B5
{
public:
	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FA8ABA1BC1FDC5FC__CTOR_OFFSET))(this, a1);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FA8ABA1BC1FDC5FC_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_FA8ABA1BC1FDC5FC_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FA8ABA1BC1FDC5FC___IFIXBASEPROXY_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_FA8ABA1BC1FDC5FC___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, a1, a2);
	}
};
