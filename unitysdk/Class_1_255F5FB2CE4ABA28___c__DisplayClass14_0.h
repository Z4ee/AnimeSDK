#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_255F5FB2CE4ABA28;
class Class_1_9ADA4A255864E373;
class Class_1_D501FC103C8A2714;
namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_255F5FB2CE4ABA28___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x158774E0)
#define CLASS_1_255F5FB2CE4ABA28___C__DISPLAYCLASS14_0__SHOWGAMESETTLE_OFFLINE_B__0_OFFSET UNITYSDK_OFFSET(0x15877D50)

inline static constexpr unsigned int Class_1_255F5FB2CE4ABA28___c__DisplayClass14_0_TypeDefinitionIndex = 81295;

class Class_1_255F5FB2CE4ABA28___c__DisplayClass14_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* promise; // 0x10
	::Class_1_9ADA4A255864E373* gameLoopInstance; // 0x18
	::Class_1_255F5FB2CE4ABA28* __4__this; // 0x20
	::Class_1_D501FC103C8A2714* messenger; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_255F5FB2CE4ABA28___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
	}

	::System::Void _ShowGameSettle_Offline_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_255F5FB2CE4ABA28___C__DISPLAYCLASS14_0__SHOWGAMESETTLE_OFFLINE_B__0_OFFSET))(this);
	}
};
