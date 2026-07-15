#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_012EC4700627BF5E_1_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x18F8DE10)
#define CLASS_2_012EC4700627BF5E_1_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x18F8DDC0)
#define CLASS_2_012EC4700627BF5E_1_METHOD_2_BAC7623E02B6BF7C_OFFSET UNITYSDK_OFFSET(0x18F8DD50)
#define CLASS_2_012EC4700627BF5E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18F8DE60)

inline static constexpr unsigned int Class_2_012EC4700627BF5E_1_TypeDefinitionIndex = 51615;

class Class_2_012EC4700627BF5E_1 : public ::Class_1_BF7A075734D15E98
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x18
	::RPG::GameCore::GameEntity* Field_2_1; // 0x20
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
