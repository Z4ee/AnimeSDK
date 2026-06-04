#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapPropDef; }

#define CLASS_2_510E2A3B742BC0DC___C__DISPLAYCLASS39_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA40D4B0)
#define CLASS_2_510E2A3B742BC0DC___C__DISPLAYCLASS39_2___INITSERVERHOYOGROUPCLIENTENTITYDEF_B__2_OFFSET UNITYSDK_OFFSET(0xA40F800)

inline static constexpr unsigned int Class_2_510E2A3B742BC0DC___c__DisplayClass39_2_TypeDefinitionIndex = 58097;

class Class_2_510E2A3B742BC0DC___c__DisplayClass39_2 : public ::System::Object
{
public:
	::RPG::Client::MapPropDef* mapPropDef; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510E2A3B742BC0DC___C__DISPLAYCLASS39_2__CTOR_OFFSET))(this);
	}

	::System::Boolean __InitServerHoyoGroupClientEntityDef_b__2(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_2_510E2A3B742BC0DC___C__DISPLAYCLASS39_2___INITSERVERHOYOGROUPCLIENTENTITYDEF_B__2_OFFSET))(this, a1);
	}
};
