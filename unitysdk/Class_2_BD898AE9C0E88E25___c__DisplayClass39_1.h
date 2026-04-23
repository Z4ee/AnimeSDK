#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapNpcDef; }

#define CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS39_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11900DE0)
#define CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS39_1___INITSERVERHOYOGROUPCLIENTENTITYDEF_B__1_OFFSET UNITYSDK_OFFSET(0x11902F00)

inline static constexpr unsigned int Class_2_BD898AE9C0E88E25___c__DisplayClass39_1_TypeDefinitionIndex = 57306;

class Class_2_BD898AE9C0E88E25___c__DisplayClass39_1 : public ::System::Object
{
public:
	::RPG::Client::MapNpcDef* mapNpcMonsterDef; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS39_1__CTOR_OFFSET))(this);
	}

	::System::Boolean __InitServerHoyoGroupClientEntityDef_b__1(::RPG::Client::MapNpcDef* elem)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS39_1___INITSERVERHOYOGROUPCLIENTENTITYDEF_B__1_OFFSET))(this, elem);
	}
};
