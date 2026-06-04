#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapPropDef; }

#define CLASS_2_510E2A3B742BC0DC___C__DISPLAYCLASS48_0__ADDLOCALPROPDEF_B__0_OFFSET UNITYSDK_OFFSET(0xA40F8F0)
#define CLASS_2_510E2A3B742BC0DC___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA40E2A0)

inline static constexpr unsigned int Class_2_510E2A3B742BC0DC___c__DisplayClass48_0_TypeDefinitionIndex = 58103;

class Class_2_510E2A3B742BC0DC___c__DisplayClass48_0 : public ::System::Object
{
public:
	::RPG::Client::MapPropDef* mapPropDef; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510E2A3B742BC0DC___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AddLocalPropDef_b__0(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_2_510E2A3B742BC0DC___C__DISPLAYCLASS48_0__ADDLOCALPROPDEF_B__0_OFFSET))(this, a1);
	}
};
