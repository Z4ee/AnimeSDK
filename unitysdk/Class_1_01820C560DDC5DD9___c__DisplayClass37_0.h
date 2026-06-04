#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_01820C560DDC5DD9;
namespace RPG::Client::DiceCombat { class DiceCombatPVPStartMatchParam; }
namespace System { class Exception; }

#define CLASS_1_01820C560DDC5DD9___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A6C60)
#define CLASS_1_01820C560DDC5DD9___C__DISPLAYCLASS37_0__STARTPVPMATCH_B__0_OFFSET UNITYSDK_OFFSET(0xA4A87C0)
#define CLASS_1_01820C560DDC5DD9___C__DISPLAYCLASS37_0__STARTPVPMATCH_B__1_OFFSET UNITYSDK_OFFSET(0xA4A88E0)

inline static constexpr unsigned int Class_1_01820C560DDC5DD9___c__DisplayClass37_0_TypeDefinitionIndex = 70687;

class Class_1_01820C560DDC5DD9___c__DisplayClass37_0 : public ::System::Object
{
public:
	::RPG::Client::DiceCombat::DiceCombatPVPStartMatchParam* param; // 0x10
	::Class_1_01820C560DDC5DD9* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartPVPMatch_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9___C__DISPLAYCLASS37_0__STARTPVPMATCH_B__0_OFFSET))(this);
	}

	::System::Void _StartPVPMatch_b__1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9___C__DISPLAYCLASS37_0__STARTPVPMATCH_B__1_OFFSET))(this, a1);
	}
};
