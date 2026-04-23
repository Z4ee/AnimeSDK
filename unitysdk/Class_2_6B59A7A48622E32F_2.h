#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_59305B446B42427E.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_6B59A7A48622E32F_2_DOONENTER_OFFSET UNITYSDK_OFFSET(0x9769C50)
#define CLASS_2_6B59A7A48622E32F_2_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x9769CC0)
#define CLASS_2_6B59A7A48622E32F_2__CTOR_OFFSET UNITYSDK_OFFSET(0x9769C10)
#define CLASS_2_6B59A7A48622E32F_2___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0x9769D70)
#define CLASS_2_6B59A7A48622E32F_2___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x9769D80)

inline static constexpr unsigned int Class_2_6B59A7A48622E32F_2_TypeDefinitionIndex = 53017;

class Class_2_6B59A7A48622E32F_2 : public ::Class_1_59305B446B42427E
{
public:
	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6B59A7A48622E32F_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6B59A7A48622E32F_2_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_6B59A7A48622E32F_2_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6B59A7A48622E32F_2___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_6B59A7A48622E32F_2___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
	}
};
