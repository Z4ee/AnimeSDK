#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_4B9394F51FF97FDB_1_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xBE9A280)
#define CLASS_2_4B9394F51FF97FDB_1_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBE9A230)
#define CLASS_2_4B9394F51FF97FDB_1_METHOD_2_21CECAB6CDDF8286_OFFSET UNITYSDK_OFFSET(0xBE9A1C0)
#define CLASS_2_4B9394F51FF97FDB_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBE9A2D0)

inline static constexpr unsigned int Class_2_4B9394F51FF97FDB_1_TypeDefinitionIndex = 56165;

class Class_2_4B9394F51FF97FDB_1 : public ::Class_1_BF7A075734D15E98
{
public:
	::RPG::GameCore::GameEntity* DOCIPOEABOM; // 0x18
	::RPG::GameCore::GameEntity* GNOCBLOMLAC; // 0x20
	::RPG::GameCore::FixPoint KEINOBNBHDO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9394F51FF97FDB_1__CTOR_OFFSET))(this);
	}

	::Class_2_4B9394F51FF97FDB_1* Method_2_21CECAB6CDDF8286(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::Class_2_4B9394F51FF97FDB_1*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_4B9394F51FF97FDB_1_METHOD_2_21CECAB6CDDF8286_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9394F51FF97FDB_1_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9394F51FF97FDB_1_GETEVENTTYPE_OFFSET))(this);
	}
};
