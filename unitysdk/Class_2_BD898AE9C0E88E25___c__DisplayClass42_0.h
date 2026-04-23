#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapPropDef; }

#define CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11900E20)
#define CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS42_0___UPDATEPROP_B__0_OFFSET UNITYSDK_OFFSET(0x11902FA0)

inline static constexpr unsigned int Class_2_BD898AE9C0E88E25___c__DisplayClass42_0_TypeDefinitionIndex = 57310;

class Class_2_BD898AE9C0E88E25___c__DisplayClass42_0 : public ::System::Object
{
public:
	::System::UInt32 serverEntityID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __UpdateProp_b__0(::RPG::Client::MapPropDef* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS42_0___UPDATEPROP_B__0_OFFSET))(this, x);
	}
};
