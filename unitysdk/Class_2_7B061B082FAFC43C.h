#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87854DF4F09D42E1.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::Client { class MonoEffectPerspectiveWallControl; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_7B061B082FAFC43C_DOONENTER_OFFSET UNITYSDK_OFFSET(0x114BC470)
#define CLASS_2_7B061B082FAFC43C_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x114BC500)
#define CLASS_2_7B061B082FAFC43C__CTOR_OFFSET UNITYSDK_OFFSET(0x114BC3D0)
#define CLASS_2_7B061B082FAFC43C___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0x114BC590)
#define CLASS_2_7B061B082FAFC43C___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x114BC5A0)

inline static constexpr unsigned int Class_2_7B061B082FAFC43C_TypeDefinitionIndex = 46354;

class Class_2_7B061B082FAFC43C : public ::Class_1_87854DF4F09D42E1
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x98
	::RPG::Client::MonoEffectPerspectiveWallControl* Field_2_1; // 0xA0

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

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7B061B082FAFC43C___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_7B061B082FAFC43C___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
	}
};
