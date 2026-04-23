#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapNpcDef; }

#define CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS47_0__ADDLOCALNPCMONSTERDEF_B__0_OFFSET UNITYSDK_OFFSET(0x11902FF0)
#define CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11901840)

inline static constexpr unsigned int Class_2_BD898AE9C0E88E25___c__DisplayClass47_0_TypeDefinitionIndex = 57312;

class Class_2_BD898AE9C0E88E25___c__DisplayClass47_0 : public ::System::Object
{
public:
	::RPG::Client::MapNpcDef* npcMonsterDef; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AddLocalNpcMonsterDef_b__0(::RPG::Client::MapNpcDef* elem)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_BD898AE9C0E88E25___C__DISPLAYCLASS47_0__ADDLOCALNPCMONSTERDEF_B__0_OFFSET))(this, elem);
	}
};
