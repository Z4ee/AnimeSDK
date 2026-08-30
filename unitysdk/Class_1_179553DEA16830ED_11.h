#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_179553DEA16830ED_11_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x189587C0)
#define CLASS_1_179553DEA16830ED_11_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x18958770)
#define CLASS_1_179553DEA16830ED_11__CTOR_OFFSET UNITYSDK_OFFSET(0x18958760)

inline static constexpr unsigned int Class_1_179553DEA16830ED_11_TypeDefinitionIndex = 56845;

class Class_1_179553DEA16830ED_11 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* HACANPHIJGN; // 0x10

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_179553DEA16830ED_11__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_179553DEA16830ED_11_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_179553DEA16830ED_11_GETEVENTTYPE_OFFSET))(this);
	}
};
