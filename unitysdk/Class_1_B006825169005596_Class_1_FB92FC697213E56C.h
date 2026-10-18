#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPet; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_B006825169005596_CLASS_1_FB92FC697213E56C__CTOR_OFFSET UNITYSDK_OFFSET(0xC290270)

inline static constexpr unsigned int Class_1_B006825169005596_Class_1_FB92FC697213E56C_TypeDefinitionIndex = 75634;

class Class_1_B006825169005596_Class_1_FB92FC697213E56C : public ::System::Object
{
public:
	::System::String* BFJKBHLFLAB; // 0x10
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
	::RPG::Client::Pet::IPet* CJPPJEHJBEG; // 0x20
	::System::UInt32 JBIJAMBKGMA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B006825169005596_CLASS_1_FB92FC697213E56C__CTOR_OFFSET))(this);
	}
};
