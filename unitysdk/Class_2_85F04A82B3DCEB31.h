#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatTaskConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_85F04A82B3DCEB31_METHOD_2_0094A08E076C3CCD_OFFSET UNITYSDK_OFFSET(0x189E9B60)
#define CLASS_2_85F04A82B3DCEB31_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x189E9D00)
#define CLASS_2_85F04A82B3DCEB31_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x189E9CA0)
#define CLASS_2_85F04A82B3DCEB31_METHOD_2_7FC6D3A17F19BD79_OFFSET UNITYSDK_OFFSET(0x189DB330)
#define CLASS_2_85F04A82B3DCEB31_METHOD_2_F8244935488678D1_OFFSET UNITYSDK_OFFSET(0x189DB050)
#define CLASS_2_85F04A82B3DCEB31__CTOR_OFFSET UNITYSDK_OFFSET(0x189DADE0)

inline static constexpr unsigned int Class_2_85F04A82B3DCEB31_TypeDefinitionIndex = 34407;

class Class_2_85F04A82B3DCEB31 : public ::Class_1_B55037134F9E6688
{
public:
	::System::Collections::Generic::List_1<::Class_1_B55037134F9E6688*>* Field_2_0; // 0x18
	::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* Field_2_1; // 0x20

	::System::Void _ctor(::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_85F04A82B3DCEB31__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F8244935488678D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85F04A82B3DCEB31_METHOD_2_F8244935488678D1_OFFSET))(this);
	}

	::System::Void Method_2_0094A08E076C3CCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85F04A82B3DCEB31_METHOD_2_0094A08E076C3CCD_OFFSET))(this);
	}

	::System::Void Method_2_7FC6D3A17F19BD79(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_85F04A82B3DCEB31_METHOD_2_7FC6D3A17F19BD79_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85F04A82B3DCEB31_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_85F04A82B3DCEB31_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
