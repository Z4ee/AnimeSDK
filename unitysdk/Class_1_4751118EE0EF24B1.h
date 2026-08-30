#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_4751118EE0EF24B1_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x15224810)
#define CLASS_1_4751118EE0EF24B1_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x152247C0)
#define CLASS_1_4751118EE0EF24B1__CTOR_OFFSET UNITYSDK_OFFSET(0x152247B0)

inline static constexpr unsigned int Class_1_4751118EE0EF24B1_TypeDefinitionIndex = 57015;

class Class_1_4751118EE0EF24B1 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
	::System::UInt32 EAAAEJLJDDE; // 0x18
	::System::UInt32 CDOHKOFPDCG; // 0x1C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4751118EE0EF24B1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4751118EE0EF24B1_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4751118EE0EF24B1_GETEVENTTYPE_OFFSET))(this);
	}
};
