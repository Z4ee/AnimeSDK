#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapPropDef; }

#define CLASS_2_D8257A310CAD757C___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x113CFFA0)
#define CLASS_2_D8257A310CAD757C___C__DISPLAYCLASS42_0___UPDATEPROP_B__0_OFFSET UNITYSDK_OFFSET(0x113D2120)

inline static constexpr unsigned int Class_2_D8257A310CAD757C___c__DisplayClass42_0_TypeDefinitionIndex = 50451;

class Class_2_D8257A310CAD757C___c__DisplayClass42_0 : public ::System::Object
{
public:
	::System::UInt32 serverEntityID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8257A310CAD757C___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __UpdateProp_b__0(::RPG::Client::MapPropDef* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_2_D8257A310CAD757C___C__DISPLAYCLASS42_0___UPDATEPROP_B__0_OFFSET))(this, x);
	}
};
