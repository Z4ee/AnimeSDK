#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapPropDef; }

#define CLASS_2_0748E0E1B406181B___C__DISPLAYCLASS39_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1859E280)
#define CLASS_2_0748E0E1B406181B___C__DISPLAYCLASS39_2___INITSERVERHOYOGROUPCLIENTENTITYDEF_B__2_OFFSET UNITYSDK_OFFSET(0x185A05B0)

inline static constexpr unsigned int Class_2_0748E0E1B406181B___c__DisplayClass39_2_TypeDefinitionIndex = 59363;

class Class_2_0748E0E1B406181B___c__DisplayClass39_2 : public ::System::Object
{
public:
	::RPG::Client::MapPropDef* mapPropDef; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0748E0E1B406181B___C__DISPLAYCLASS39_2__CTOR_OFFSET))(this);
	}

	::System::Boolean __InitServerHoyoGroupClientEntityDef_b__2(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_2_0748E0E1B406181B___C__DISPLAYCLASS39_2___INITSERVERHOYOGROUPCLIENTENTITYDEF_B__2_OFFSET))(this, a1);
	}
};
