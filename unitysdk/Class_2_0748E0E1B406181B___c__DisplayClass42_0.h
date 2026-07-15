#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapPropDef; }

#define CLASS_2_0748E0E1B406181B___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1859E2B0)
#define CLASS_2_0748E0E1B406181B___C__DISPLAYCLASS42_0___UPDATEPROP_B__0_OFFSET UNITYSDK_OFFSET(0x185A0620)

inline static constexpr unsigned int Class_2_0748E0E1B406181B___c__DisplayClass42_0_TypeDefinitionIndex = 59366;

class Class_2_0748E0E1B406181B___c__DisplayClass42_0 : public ::System::Object
{
public:
	::System::UInt32 serverEntityID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0748E0E1B406181B___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __UpdateProp_b__0(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_2_0748E0E1B406181B___C__DISPLAYCLASS42_0___UPDATEPROP_B__0_OFFSET))(this, a1);
	}
};
