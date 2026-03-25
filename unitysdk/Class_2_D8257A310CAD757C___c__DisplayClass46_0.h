#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapNpcDef; }

#define CLASS_2_D8257A310CAD757C___C__DISPLAYCLASS46_0__ADDLOCALNPCDEF_B__0_OFFSET UNITYSDK_OFFSET(0x113D2140)
#define CLASS_2_D8257A310CAD757C___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0x113D0770)

inline static constexpr unsigned int Class_2_D8257A310CAD757C___c__DisplayClass46_0_TypeDefinitionIndex = 50452;

class Class_2_D8257A310CAD757C___c__DisplayClass46_0 : public ::System::Object
{
public:
	::RPG::Client::MapNpcDef* npcDef; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8257A310CAD757C___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AddLocalNpcDef_b__0(::RPG::Client::MapNpcDef* elem)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_D8257A310CAD757C___C__DISPLAYCLASS46_0__ADDLOCALNPCDEF_B__0_OFFSET))(this, elem);
	}
};
