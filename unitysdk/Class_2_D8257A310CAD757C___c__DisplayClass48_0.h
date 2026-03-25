#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapPropDef; }

#define CLASS_2_D8257A310CAD757C___C__DISPLAYCLASS48_0__ADDLOCALPROPDEF_B__0_OFFSET UNITYSDK_OFFSET(0x113D21A0)
#define CLASS_2_D8257A310CAD757C___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0x113D0C10)

inline static constexpr unsigned int Class_2_D8257A310CAD757C___c__DisplayClass48_0_TypeDefinitionIndex = 50454;

class Class_2_D8257A310CAD757C___c__DisplayClass48_0 : public ::System::Object
{
public:
	::RPG::Client::MapPropDef* mapPropDef; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8257A310CAD757C___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AddLocalPropDef_b__0(::RPG::Client::MapPropDef* elem)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_2_D8257A310CAD757C___C__DISPLAYCLASS48_0__ADDLOCALPROPDEF_B__0_OFFSET))(this, elem);
	}
};
