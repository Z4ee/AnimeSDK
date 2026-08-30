#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapNpcDef; }

#define CLASS_2_0748E0E1B406181B___C__DISPLAYCLASS39_1__CTOR_OFFSET UNITYSDK_OFFSET(0x198A4990)
#define CLASS_2_0748E0E1B406181B___C__DISPLAYCLASS39_1___INITSERVERHOYOGROUPCLIENTENTITYDEF_B__1_OFFSET UNITYSDK_OFFSET(0x198A6D80)

inline static constexpr unsigned int Class_2_0748E0E1B406181B___c__DisplayClass39_1_TypeDefinitionIndex = 62197;

class Class_2_0748E0E1B406181B___c__DisplayClass39_1 : public ::System::Object
{
public:
	::RPG::Client::MapNpcDef* mapNpcMonsterDef; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0748E0E1B406181B___C__DISPLAYCLASS39_1__CTOR_OFFSET))(this);
	}

	::System::Boolean __InitServerHoyoGroupClientEntityDef_b__1(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_0748E0E1B406181B___C__DISPLAYCLASS39_1___INITSERVERHOYOGROUPCLIENTENTITYDEF_B__1_OFFSET))(this, a1);
	}
};
