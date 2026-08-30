#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapEntityDef; }

#define CLASS_2_7B875DB8377B17FA___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18A8C950)
#define CLASS_2_7B875DB8377B17FA___C__DISPLAYCLASS5_0__REMOVESERVERENTITYDEF_B__0_OFFSET UNITYSDK_OFFSET(0x18A8D160)

inline static constexpr unsigned int Class_2_7B875DB8377B17FA___c__DisplayClass5_0_TypeDefinitionIndex = 62215;

class Class_2_7B875DB8377B17FA___c__DisplayClass5_0 : public ::System::Object
{
public:
	::RPG::Client::MapEntityDef* entityDef; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B875DB8377B17FA___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RemoveServerEntityDef_b__0(::RPG::Client::MapEntityDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + CLASS_2_7B875DB8377B17FA___C__DISPLAYCLASS5_0__REMOVESERVERENTITYDEF_B__0_OFFSET))(this, a1);
	}
};
