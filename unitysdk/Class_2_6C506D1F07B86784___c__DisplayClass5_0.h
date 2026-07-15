#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapEntityDef; }

#define CLASS_2_6C506D1F07B86784___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16EFA460)
#define CLASS_2_6C506D1F07B86784___C__DISPLAYCLASS5_0__REMOVESERVERENTITYDEF_B__0_OFFSET UNITYSDK_OFFSET(0x16EFAC70)

inline static constexpr unsigned int Class_2_6C506D1F07B86784___c__DisplayClass5_0_TypeDefinitionIndex = 59380;

class Class_2_6C506D1F07B86784___c__DisplayClass5_0 : public ::System::Object
{
public:
	::RPG::Client::MapEntityDef* entityDef; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C506D1F07B86784___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RemoveServerEntityDef_b__0(::RPG::Client::MapEntityDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + CLASS_2_6C506D1F07B86784___C__DISPLAYCLASS5_0__REMOVESERVERENTITYDEF_B__0_OFFSET))(this, a1);
	}
};
