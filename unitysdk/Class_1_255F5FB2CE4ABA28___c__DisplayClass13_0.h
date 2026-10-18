#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1294FEF8E985635C;
class Class_1_255F5FB2CE4ABA28;
class Class_1_A3520E3BCB4F735C;
namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_255F5FB2CE4ABA28___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1586B5C0)
#define CLASS_1_255F5FB2CE4ABA28___C__DISPLAYCLASS13_0__SHOWWEEKSETTLE_OFFLINE_B__0_OFFSET UNITYSDK_OFFSET(0x1586BE00)

inline static constexpr unsigned int Class_1_255F5FB2CE4ABA28___c__DisplayClass13_0_TypeDefinitionIndex = 81293;

class Class_1_255F5FB2CE4ABA28___c__DisplayClass13_0 : public ::System::Object
{
public:
	::Class_1_1294FEF8E985635C* messenger; // 0x10
	::RPG::Client::Promises::Promise* promise; // 0x18
	::Class_1_255F5FB2CE4ABA28* __4__this; // 0x20
	::Class_1_A3520E3BCB4F735C* week; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_255F5FB2CE4ABA28___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Void _ShowWeekSettle_Offline_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_255F5FB2CE4ABA28___C__DISPLAYCLASS13_0__SHOWWEEKSETTLE_OFFLINE_B__0_OFFSET))(this);
	}
};
