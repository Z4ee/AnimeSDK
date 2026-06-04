#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_179553DEA16830ED_1.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/QteCatchGhostNotify.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_86BC741E51F9C2D4_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x136F3C80)
#define CLASS_2_86BC741E51F9C2D4_GET_NOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x136F3CD0)
#define CLASS_2_86BC741E51F9C2D4_SET_NOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x136F3CE0)
#define CLASS_2_86BC741E51F9C2D4__CTOR_OFFSET UNITYSDK_OFFSET(0x136F3C70)
#define CLASS_2_86BC741E51F9C2D4___IFIXBASEPROXY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x136F3CF0)

inline static constexpr unsigned int Class_2_86BC741E51F9C2D4_TypeDefinitionIndex = 52889;

class Class_2_86BC741E51F9C2D4 : public ::Class_1_179553DEA16830ED_1
{
public:
	::RPG::GameCore::QteCatchGhostNotify _NotifyType_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::QteCatchGhostNotify a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::QteCatchGhostNotify))((::PBYTE)hIl2Cpp + CLASS_2_86BC741E51F9C2D4__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86BC741E51F9C2D4_GETEVENTTYPE_OFFSET))(this);
	}

	::RPG::GameCore::QteCatchGhostNotify get_NotifyType()
	{
		return ((::RPG::GameCore::QteCatchGhostNotify(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86BC741E51F9C2D4_GET_NOTIFYTYPE_OFFSET))(this);
	}

	::System::Void set_NotifyType(::RPG::GameCore::QteCatchGhostNotify a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::QteCatchGhostNotify))((::PBYTE)hIl2Cpp + CLASS_2_86BC741E51F9C2D4_SET_NOTIFYTYPE_OFFSET))(this, a1);
	}

	::RPG::GameCore::EventType __iFixBaseProxy_GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86BC741E51F9C2D4___IFIXBASEPROXY_GETEVENTTYPE_OFFSET))(this);
	}
};
