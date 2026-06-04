#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A696AB4980B3D7B5.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::Client { class MonoEffectPerspectiveWallControl; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_7B061B082FAFC43C_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1397A160)
#define CLASS_2_7B061B082FAFC43C_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x1397A1F0)
#define CLASS_2_7B061B082FAFC43C__CTOR_OFFSET UNITYSDK_OFFSET(0x1397A0D0)
#define CLASS_2_7B061B082FAFC43C___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1397A280)
#define CLASS_2_7B061B082FAFC43C___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x1397A290)

inline static constexpr unsigned int Class_2_7B061B082FAFC43C_TypeDefinitionIndex = 53739;

class Class_2_7B061B082FAFC43C : public ::Class_1_A696AB4980B3D7B5
{
public:
	::RPG::Client::MonoEffectPerspectiveWallControl* Field_2_0; // 0x98
	::RPG::GameCore::GameEntity* Field_2_1; // 0xA0

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::Client::MonoEffectPerspectiveWallControl* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::MonoEffectPerspectiveWallControl*))((::PBYTE)hIl2Cpp + CLASS_2_7B061B082FAFC43C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7B061B082FAFC43C_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_7B061B082FAFC43C_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7B061B082FAFC43C___IFIXBASEPROXY_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_7B061B082FAFC43C___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, a1, a2);
	}
};
