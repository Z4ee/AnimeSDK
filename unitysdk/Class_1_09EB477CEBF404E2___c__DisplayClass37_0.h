#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_09EB477CEBF404E2;
namespace RPG::Client::DiceCombat { class DiceCombatPVPStartMatchParam; }
namespace System { class Exception; }

#define CLASS_1_09EB477CEBF404E2___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1283F320)
#define CLASS_1_09EB477CEBF404E2___C__DISPLAYCLASS37_0__STARTPVPMATCH_B__0_OFFSET UNITYSDK_OFFSET(0x1283F330)
#define CLASS_1_09EB477CEBF404E2___C__DISPLAYCLASS37_0__STARTPVPMATCH_B__1_OFFSET UNITYSDK_OFFSET(0x1283F450)

inline static constexpr unsigned int Class_1_09EB477CEBF404E2___c__DisplayClass37_0_TypeDefinitionIndex = 69875;

class Class_1_09EB477CEBF404E2___c__DisplayClass37_0 : public ::System::Object
{
public:
	::RPG::Client::DiceCombat::DiceCombatPVPStartMatchParam* param; // 0x10
	::Class_1_09EB477CEBF404E2* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09EB477CEBF404E2___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartPVPMatch_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09EB477CEBF404E2___C__DISPLAYCLASS37_0__STARTPVPMATCH_B__0_OFFSET))(this);
	}

	::System::Void _StartPVPMatch_b__1(::System::Exception* _)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_09EB477CEBF404E2___C__DISPLAYCLASS37_0__STARTPVPMATCH_B__1_OFFSET))(this, _);
	}
};
