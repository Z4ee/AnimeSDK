#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_59305B446B42427E.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_C5B0CDF390FE85FB_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9800860)
#define CLASS_2_C5B0CDF390FE85FB_1_DOONENTER_OFFSET UNITYSDK_OFFSET(0x98008B0)
#define CLASS_2_C5B0CDF390FE85FB_1_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x9800940)
#define CLASS_2_C5B0CDF390FE85FB_1_DOONTICK_OFFSET UNITYSDK_OFFSET(0x98009D0)
#define CLASS_2_C5B0CDF390FE85FB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9800820)
#define CLASS_2_C5B0CDF390FE85FB_1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9800A70)
#define CLASS_2_C5B0CDF390FE85FB_1___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0x9800A80)
#define CLASS_2_C5B0CDF390FE85FB_1___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x9800A90)

inline static constexpr unsigned int Class_2_C5B0CDF390FE85FB_1_TypeDefinitionIndex = 53030;

class Class_2_C5B0CDF390FE85FB_1 : public ::Class_1_59305B446B42427E
{
public:
	::System::Boolean Field_2_0; // 0x98

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB_1_DISPOSE_OFFSET))(this);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB_1_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB_1_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void DoOnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB_1_DOONTICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB_1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB_1___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB_1___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
	}
};
