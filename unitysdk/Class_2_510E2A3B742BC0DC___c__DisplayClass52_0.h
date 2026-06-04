#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapNpcDef; }

#define CLASS_2_510E2A3B742BC0DC___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA40E9C0)
#define CLASS_2_510E2A3B742BC0DC___C__DISPLAYCLASS52_0__HASLOCALMONSTER_B__0_OFFSET UNITYSDK_OFFSET(0xA40F940)

inline static constexpr unsigned int Class_2_510E2A3B742BC0DC___c__DisplayClass52_0_TypeDefinitionIndex = 58105;

class Class_2_510E2A3B742BC0DC___c__DisplayClass52_0 : public ::System::Object
{
public:
	::System::UInt32 instanceID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510E2A3B742BC0DC___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _HasLocalMonster_b__0(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_510E2A3B742BC0DC___C__DISPLAYCLASS52_0__HASLOCALMONSTER_B__0_OFFSET))(this, a1);
	}
};
