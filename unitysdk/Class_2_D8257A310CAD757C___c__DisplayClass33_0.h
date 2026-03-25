#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapEntityDef; }

#define CLASS_2_D8257A310CAD757C___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x113CD410)
#define CLASS_2_D8257A310CAD757C___C__DISPLAYCLASS33_0__REMOVESERVERENTITYDEF_B__0_OFFSET UNITYSDK_OFFSET(0x113D2020)

inline static constexpr unsigned int Class_2_D8257A310CAD757C___c__DisplayClass33_0_TypeDefinitionIndex = 50445;

class Class_2_D8257A310CAD757C___c__DisplayClass33_0 : public ::System::Object
{
public:
	::RPG::Client::MapEntityDef* entityDef; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8257A310CAD757C___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RemoveServerEntityDef_b__0(::RPG::Client::MapEntityDef* elem)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + CLASS_2_D8257A310CAD757C___C__DISPLAYCLASS33_0__REMOVESERVERENTITYDEF_B__0_OFFSET))(this, elem);
	}
};
