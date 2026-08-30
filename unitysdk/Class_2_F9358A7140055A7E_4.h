#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_179553DEA16830ED_1.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_F9358A7140055A7E_4_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x18CA5D50)
#define CLASS_2_F9358A7140055A7E_4__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA5D40)

inline static constexpr unsigned int Class_2_F9358A7140055A7E_4_TypeDefinitionIndex = 56819;

class Class_2_F9358A7140055A7E_4 : public ::Class_1_179553DEA16830ED_1
{
public:
	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F9358A7140055A7E_4__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9358A7140055A7E_4_GETEVENTTYPE_OFFSET))(this);
	}
};
