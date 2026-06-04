#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0EC3EF876285D6F5;
class Class_1_5F4D64A4B97E38F9;
class Class_1_87955070687601ED;
namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_0EC3EF876285D6F5___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x137D54D0)
#define CLASS_1_0EC3EF876285D6F5___C__DISPLAYCLASS14_0__SHOWGAMESETTLE_OFFLINE_B__0_OFFSET UNITYSDK_OFFSET(0x137D5D20)

inline static constexpr unsigned int Class_1_0EC3EF876285D6F5___c__DisplayClass14_0_TypeDefinitionIndex = 73951;

class Class_1_0EC3EF876285D6F5___c__DisplayClass14_0 : public ::System::Object
{
public:
	::Class_1_5F4D64A4B97E38F9* messenger; // 0x10
	::Class_1_0EC3EF876285D6F5* __4__this; // 0x18
	::Class_1_87955070687601ED* gameLoopInstance; // 0x20
	::RPG::Client::Promises::Promise* promise; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EC3EF876285D6F5___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
	}

	::System::Void _ShowGameSettle_Offline_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EC3EF876285D6F5___C__DISPLAYCLASS14_0__SHOWGAMESETTLE_OFFLINE_B__0_OFFSET))(this);
	}
};
