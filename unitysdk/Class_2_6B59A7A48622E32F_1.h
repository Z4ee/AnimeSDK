#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87854DF4F09D42E1.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_6B59A7A48622E32F_1_DOONENTER_OFFSET UNITYSDK_OFFSET(0x8CAB490)
#define CLASS_2_6B59A7A48622E32F_1_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x8CAB620)
#define CLASS_2_6B59A7A48622E32F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8CAB450)
#define CLASS_2_6B59A7A48622E32F_1___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0x8CAB880)
#define CLASS_2_6B59A7A48622E32F_1___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x8CAB890)

inline static constexpr unsigned int Class_2_6B59A7A48622E32F_1_TypeDefinitionIndex = 46341;

class Class_2_6B59A7A48622E32F_1 : public ::Class_1_87854DF4F09D42E1
{
public:
	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6B59A7A48622E32F_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6B59A7A48622E32F_1_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_6B59A7A48622E32F_1_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6B59A7A48622E32F_1___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_6B59A7A48622E32F_1___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
	}
};
