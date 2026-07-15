#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_A3E4E868B3548A09_1_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x16CFB090)
#define CLASS_1_A3E4E868B3548A09_1_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x16CFB040)
#define CLASS_1_A3E4E868B3548A09_1_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x16CFB0E0)
#define CLASS_1_A3E4E868B3548A09_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16CFB100)
#define CLASS_1_A3E4E868B3548A09_1_METHOD_1_F21D58B232868932_OFFSET UNITYSDK_OFFSET(0x16CFB0F0)
#define CLASS_1_A3E4E868B3548A09_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16CFB030)

inline static constexpr unsigned int Class_1_A3E4E868B3548A09_1_TypeDefinitionIndex = 54144;

class Class_1_A3E4E868B3548A09_1 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::TeamType Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TeamType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A3E4E868B3548A09_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E4E868B3548A09_1_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E4E868B3548A09_1_GETEVENTTYPE_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E4E868B3548A09_1_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::RPG::GameCore::TeamType Method_1_F21D58B232868932()
	{
		return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E4E868B3548A09_1_METHOD_1_F21D58B232868932_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E4E868B3548A09_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
