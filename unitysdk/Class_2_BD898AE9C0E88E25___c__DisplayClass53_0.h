#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapPropDef; }

#define CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11902250)
#define CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS53_0__HASLOCALPROP_B__0_OFFSET UNITYSDK_OFFSET(0x11903090)

inline static constexpr unsigned int Class_2_BD898AE9C0E88E25___c__DisplayClass53_0_TypeDefinitionIndex = 57316;

class Class_2_BD898AE9C0E88E25___c__DisplayClass53_0 : public ::System::Object
{
public:
	::System::UInt32 instanceID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _HasLocalProp_b__0(::RPG::Client::MapPropDef* elem)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS53_0__HASLOCALPROP_B__0_OFFSET))(this, elem);
	}
};
