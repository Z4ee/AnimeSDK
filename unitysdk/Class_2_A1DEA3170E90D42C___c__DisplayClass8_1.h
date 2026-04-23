#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace XLua { class LuaTable; }

#define CLASS_2_A1DEA3170E90D42C___C__DISPLAYCLASS8_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBAD76F0)
#define CLASS_2_A1DEA3170E90D42C___C__DISPLAYCLASS8_1___SHOWROGUETOURNENTRANCEPAGE_B__2_OFFSET UNITYSDK_OFFSET(0xBAD7700)

inline static constexpr unsigned int Class_2_A1DEA3170E90D42C___c__DisplayClass8_1_TypeDefinitionIndex = 62523;

class Class_2_A1DEA3170E90D42C___c__DisplayClass8_1 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* promise; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C___C__DISPLAYCLASS8_1__CTOR_OFFSET))(this);
	}

	::System::Void __ShowRogueTournEntrancePage_b__2(::XLua::LuaTable* page)
	{
		return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C___C__DISPLAYCLASS8_1___SHOWROGUETOURNENTRANCEPAGE_B__2_OFFSET))(this, page);
	}
};
