#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_B8FF829EFDD29B81;
class Class_2_6B60059019300BAD;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_SelfBoom; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B6ADCCE0C83A0E8A_METHOD_2_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0x178CE7A0)
#define CLASS_2_B6ADCCE0C83A0E8A_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x178D0530)
#define CLASS_2_B6ADCCE0C83A0E8A_METHOD_2_5587AE4B03E68C58_OFFSET UNITYSDK_OFFSET(0x178D0450)
#define CLASS_2_B6ADCCE0C83A0E8A_METHOD_2_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x178CFBC0)
#define CLASS_2_B6ADCCE0C83A0E8A_METHOD_2_F31C8D98E82AD4C4_OFFSET UNITYSDK_OFFSET(0x178CFAB0)
#define CLASS_2_B6ADCCE0C83A0E8A__CTOR_OFFSET UNITYSDK_OFFSET(0x178CE690)

inline static constexpr unsigned int Class_2_B6ADCCE0C83A0E8A_TypeDefinitionIndex = 77441;

class Class_2_B6ADCCE0C83A0E8A : public ::Class_1_F65B6F8790DF074B
{
public:
	::RPG::GameCore::ChenLingBattleAbility_SelfBoom* EOOLHMDBDFA; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* DLLFLMBCNEN; // 0x30
	::System::Single COAELIHGAHH; // 0x38
	::System::Single LDJONAIFFOB; // 0x3C
	::System::Boolean NEGOBENGEFK; // 0x40
	::System::Single LLNIGIGFCEA; // 0x44
	::System::Single KBELPMJNDMB; // 0x48
	::System::Single LFFKDKCGGOE; // 0x4C

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_B8FF829EFDD29B81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_2_B6ADCCE0C83A0E8A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6ADCCE0C83A0E8A_METHOD_2_146E6E50FAF07D8F_OFFSET))(this);
	}

	::System::Void Method_2_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6ADCCE0C83A0E8A_METHOD_2_BA1BB49741CFDFE1_OFFSET))(this);
	}

	::System::Void Method_2_F31C8D98E82AD4C4(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_2_B6ADCCE0C83A0E8A_METHOD_2_F31C8D98E82AD4C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_5587AE4B03E68C58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6ADCCE0C83A0E8A_METHOD_2_5587AE4B03E68C58_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B6ADCCE0C83A0E8A_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}
};
