#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1294FEF8E985635C;
class Class_1_255F5FB2CE4ABA28;
class Class_1_D55DA8BFAC94B3A4_2;
namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_255F5FB2CE4ABA28___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1586ACF0)
#define CLASS_1_255F5FB2CE4ABA28___C__DISPLAYCLASS10_0__SHOWGAMESETTLE_B__0_OFFSET UNITYSDK_OFFSET(0x1586BBF0)

inline static constexpr unsigned int Class_1_255F5FB2CE4ABA28___c__DisplayClass10_0_TypeDefinitionIndex = 81292;

class Class_1_255F5FB2CE4ABA28___c__DisplayClass10_0 : public ::System::Object
{
public:
	::Class_1_255F5FB2CE4ABA28* __4__this; // 0x10
	::Class_1_D55DA8BFAC94B3A4_2* levelData; // 0x18
	::RPG::Client::Promises::Promise* promise; // 0x20
	::Class_1_1294FEF8E985635C* messenger; // 0x28
	::System::UInt32 levelID; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_255F5FB2CE4ABA28___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Void _ShowGameSettle_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_255F5FB2CE4ABA28___C__DISPLAYCLASS10_0__SHOWGAMESETTLE_B__0_OFFSET))(this);
	}
};
