#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_B8FF829EFDD29B81;
class Class_2_6B60059019300BAD;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_SelfBoom; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B6ADCCE0C83A0E8A_METHOD_2_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0xBF16690)
#define CLASS_2_B6ADCCE0C83A0E8A_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0xBF183F0)
#define CLASS_2_B6ADCCE0C83A0E8A_METHOD_2_5587AE4B03E68C58_OFFSET UNITYSDK_OFFSET(0xBF18310)
#define CLASS_2_B6ADCCE0C83A0E8A_METHOD_2_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0xBF17A80)
#define CLASS_2_B6ADCCE0C83A0E8A_METHOD_2_F31C8D98E82AD4C4_OFFSET UNITYSDK_OFFSET(0xBF17970)
#define CLASS_2_B6ADCCE0C83A0E8A__CTOR_OFFSET UNITYSDK_OFFSET(0xBF16590)

inline static constexpr unsigned int Class_2_B6ADCCE0C83A0E8A_TypeDefinitionIndex = 72432;

class Class_2_B6ADCCE0C83A0E8A : public ::Class_1_F65B6F8790DF074B
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x28
	::RPG::GameCore::ChenLingBattleAbility_SelfBoom* Field_2_1; // 0x30
	::System::Single Field_2_2; // 0x38
	::System::Boolean Field_2_3; // 0x3C
	::System::Single Field_2_4; // 0x40
	::System::Single Field_2_5; // 0x44
	::System::Single Field_2_6; // 0x48
	::System::Single Field_2_7; // 0x4C

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
