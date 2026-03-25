#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_179553DEA16830ED_4_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1156F340)
#define CLASS_1_179553DEA16830ED_4_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1156F2F0)
#define CLASS_1_179553DEA16830ED_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1156F2E0)

inline static constexpr unsigned int Class_1_179553DEA16830ED_4_TypeDefinitionIndex = 45557;

class Class_1_179553DEA16830ED_4 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_179553DEA16830ED_4__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_179553DEA16830ED_4_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_179553DEA16830ED_4_GETEVENTTYPE_OFFSET))(this);
	}
};
