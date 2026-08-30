#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_179553DEA16830ED_2_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AF1ADD0)
#define CLASS_1_179553DEA16830ED_2_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1AF1AD80)
#define CLASS_1_179553DEA16830ED_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF1AD70)

inline static constexpr unsigned int Class_1_179553DEA16830ED_2_TypeDefinitionIndex = 56823;

class Class_1_179553DEA16830ED_2 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_179553DEA16830ED_2__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_179553DEA16830ED_2_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_179553DEA16830ED_2_GETEVENTTYPE_OFFSET))(this);
	}
};
