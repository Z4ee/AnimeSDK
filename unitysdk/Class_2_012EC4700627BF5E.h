#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_012EC4700627BF5E_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xBE1C530)
#define CLASS_2_012EC4700627BF5E_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBE1C4E0)
#define CLASS_2_012EC4700627BF5E_METHOD_2_BAC7623E02B6BF7C_OFFSET UNITYSDK_OFFSET(0xBE1C470)
#define CLASS_2_012EC4700627BF5E__CTOR_OFFSET UNITYSDK_OFFSET(0xBE1C580)

inline static constexpr unsigned int Class_2_012EC4700627BF5E_TypeDefinitionIndex = 54289;

class Class_2_012EC4700627BF5E : public ::Class_1_BF7A075734D15E98
{
public:
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x18
	::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x20
	::System::Boolean BPBNAOEHNFP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_012EC4700627BF5E__CTOR_OFFSET))(this);
	}

	::Class_2_012EC4700627BF5E* Method_2_BAC7623E02B6BF7C(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
	{
		return ((::Class_2_012EC4700627BF5E*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_012EC4700627BF5E_METHOD_2_BAC7623E02B6BF7C_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_012EC4700627BF5E_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_012EC4700627BF5E_GETEVENTTYPE_OFFSET))(this);
	}
};
