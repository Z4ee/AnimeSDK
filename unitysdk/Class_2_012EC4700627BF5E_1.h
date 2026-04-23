#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_012EC4700627BF5E_1_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x907FF80)
#define CLASS_2_012EC4700627BF5E_1_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x907FF30)
#define CLASS_2_012EC4700627BF5E_1_METHOD_2_BAC7623E02B6BF7C_OFFSET UNITYSDK_OFFSET(0x907FEC0)
#define CLASS_2_012EC4700627BF5E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x907FFD0)

inline static constexpr unsigned int Class_2_012EC4700627BF5E_1_TypeDefinitionIndex = 49866;

class Class_2_012EC4700627BF5E_1 : public ::Class_1_9988289E7F8AA214
{
public:
	::RPG::GameCore::GameEntity* Field_2_1; // 0x18
	::RPG::GameCore::GameEntity* Field_2_0; // 0x20
	::System::Boolean Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_012EC4700627BF5E_1__CTOR_OFFSET))(this);
	}

	::Class_2_012EC4700627BF5E_1* Method_2_BAC7623E02B6BF7C(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
	{
		return ((::Class_2_012EC4700627BF5E_1*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_012EC4700627BF5E_1_METHOD_2_BAC7623E02B6BF7C_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_012EC4700627BF5E_1_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_012EC4700627BF5E_1_GETEVENTTYPE_OFFSET))(this);
	}
};
