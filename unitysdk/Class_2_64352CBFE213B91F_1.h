#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2231FD56C070349F.h"

class Class_3_6B9658F527402856;
namespace RPG::Client::DiceCombat { class DiceCombatBattleContext; }

#define CLASS_2_64352CBFE213B91F_1_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x11368CE0)
#define CLASS_2_64352CBFE213B91F_1_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x11368D20)
#define CLASS_2_64352CBFE213B91F_1_METHOD_2_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x11368C90)
#define CLASS_2_64352CBFE213B91F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11368C80)

inline static constexpr unsigned int Class_2_64352CBFE213B91F_1_TypeDefinitionIndex = 48880;

class Class_2_64352CBFE213B91F_1 : public ::Class_1_2231FD56C070349F
{
public:
	::RPG::Client::DiceCombat::DiceCombatBattleContext* Field_2_0; // 0x18

	::System::Void _ctor(::Class_3_6B9658F527402856* a1, ::RPG::Client::DiceCombat::DiceCombatBattleContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6B9658F527402856*, ::RPG::Client::DiceCombat::DiceCombatBattleContext*))((::PBYTE)hIl2Cpp + CLASS_2_64352CBFE213B91F_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64352CBFE213B91F_1_METHOD_2_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64352CBFE213B91F_1_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64352CBFE213B91F_1_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}
};
