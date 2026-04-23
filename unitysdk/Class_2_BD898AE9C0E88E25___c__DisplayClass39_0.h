#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapNpcDef; }

#define CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11900DD0)
#define CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS39_0___INITSERVERHOYOGROUPCLIENTENTITYDEF_B__0_OFFSET UNITYSDK_OFFSET(0x11902ED0)

inline static constexpr unsigned int Class_2_BD898AE9C0E88E25___c__DisplayClass39_0_TypeDefinitionIndex = 57305;

class Class_2_BD898AE9C0E88E25___c__DisplayClass39_0 : public ::System::Object
{
public:
	::RPG::Client::MapNpcDef* mapNpcDef; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __InitServerHoyoGroupClientEntityDef_b__0(::RPG::Client::MapNpcDef* elem)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS39_0___INITSERVERHOYOGROUPCLIENTENTITYDEF_B__0_OFFSET))(this, elem);
	}
};
