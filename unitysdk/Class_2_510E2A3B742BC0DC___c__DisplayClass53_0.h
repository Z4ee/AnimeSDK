#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapPropDef; }

#define CLASS_2_510E2A3B742BC0DC___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA40EAE0)
#define CLASS_2_510E2A3B742BC0DC___C__DISPLAYCLASS53_0__HASLOCALPROP_B__0_OFFSET UNITYSDK_OFFSET(0xA40F960)

inline static constexpr unsigned int Class_2_510E2A3B742BC0DC___c__DisplayClass53_0_TypeDefinitionIndex = 58106;

class Class_2_510E2A3B742BC0DC___c__DisplayClass53_0 : public ::System::Object
{
public:
	::System::UInt32 instanceID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510E2A3B742BC0DC___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _HasLocalProp_b__0(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_2_510E2A3B742BC0DC___C__DISPLAYCLASS53_0__HASLOCALPROP_B__0_OFFSET))(this, a1);
	}
};
