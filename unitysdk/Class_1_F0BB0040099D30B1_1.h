#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeData; }
namespace System { class Action; }

#define CLASS_1_F0BB0040099D30B1_1_METHOD_1_256B6E165124982E_1_OFFSET UNITYSDK_OFFSET(0x16EE2C00)
#define CLASS_1_F0BB0040099D30B1_1_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0x16EE2B60)
#define CLASS_1_F0BB0040099D30B1_1_METHOD_1_25F6F1B55C6B901F_OFFSET UNITYSDK_OFFSET(0x16EE2C60)
#define CLASS_1_F0BB0040099D30B1_1_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16EE28B0)
#define CLASS_1_F0BB0040099D30B1_1_METHOD_1_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0x16EE2A90)
#define CLASS_1_F0BB0040099D30B1_1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16EE2BC0)
#define CLASS_1_F0BB0040099D30B1_1_METHOD_1_E1B59F840D6D6F1F_OFFSET UNITYSDK_OFFSET(0x16EE28F0)
#define CLASS_1_F0BB0040099D30B1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16EE2CB0)

inline static constexpr unsigned int Class_1_F0BB0040099D30B1_1_TypeDefinitionIndex = 57752;

class Class_1_F0BB0040099D30B1_1 : public ::System::Object
{
public:
	::RPG::Client::ChallengeData* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0BB0040099D30B1_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0BB0040099D30B1_1_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_E1B59F840D6D6F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0BB0040099D30B1_1_METHOD_1_E1B59F840D6D6F1F_OFFSET))(this);
	}

	::System::Void Method_1_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0BB0040099D30B1_1_METHOD_1_A3C36642AA77866E_OFFSET))(this);
	}

	::System::Void Method_1_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F0BB0040099D30B1_1_METHOD_1_256B6E165124982E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0BB0040099D30B1_1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_256B6E165124982E_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F0BB0040099D30B1_1_METHOD_1_256B6E165124982E_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_25F6F1B55C6B901F(::RPG::Client::ChallengeData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + CLASS_1_F0BB0040099D30B1_1_METHOD_1_25F6F1B55C6B901F_OFFSET))(this, a1);
	}
};
