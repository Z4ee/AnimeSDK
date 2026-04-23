#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapEntityDef; }

#define CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x118FE300)
#define CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS33_0__REMOVESERVERENTITYDEF_B__0_OFFSET UNITYSDK_OFFSET(0x11902EA0)

inline static constexpr unsigned int Class_2_BD898AE9C0E88E25___c__DisplayClass33_0_TypeDefinitionIndex = 57304;

class Class_2_BD898AE9C0E88E25___c__DisplayClass33_0 : public ::System::Object
{
public:
	::RPG::Client::MapEntityDef* entityDef; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RemoveServerEntityDef_b__0(::RPG::Client::MapEntityDef* elem)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS33_0__REMOVESERVERENTITYDEF_B__0_OFFSET))(this, elem);
	}
};
