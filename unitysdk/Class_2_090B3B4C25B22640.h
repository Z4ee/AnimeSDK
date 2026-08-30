#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_B8FF829EFDD29B81;
class Class_2_6B60059019300BAD;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_ChainLightning; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_090B3B4C25B22640_METHOD_2_153C244FE00D1BE2_OFFSET UNITYSDK_OFFSET(0x1872C110)
#define CLASS_2_090B3B4C25B22640_METHOD_2_1AB67458471FAC4D_OFFSET UNITYSDK_OFFSET(0x1872BFD0)
#define CLASS_2_090B3B4C25B22640_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1872C0B0)
#define CLASS_2_090B3B4C25B22640_METHOD_2_906D8EFA88B137F6_OFFSET UNITYSDK_OFFSET(0x1872BD20)
#define CLASS_2_090B3B4C25B22640_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x1872BB00)
#define CLASS_2_090B3B4C25B22640_METHOD_2_AAD69C1FDF90A82C_OFFSET UNITYSDK_OFFSET(0x1872C680)
#define CLASS_2_090B3B4C25B22640_METHOD_2_B2E3C8C332C44DC7_OFFSET UNITYSDK_OFFSET(0x1872CA00)
#define CLASS_2_090B3B4C25B22640_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1872CDF0)
#define CLASS_2_090B3B4C25B22640__CTOR_OFFSET UNITYSDK_OFFSET(0x1872B9E0)

inline static constexpr unsigned int Class_2_090B3B4C25B22640_TypeDefinitionIndex = 77423;

class Class_2_090B3B4C25B22640 : public ::Class_1_F65B6F8790DF074B
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* AKCDHCPDHCI; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* BGJCNPHIIOG; // 0x30
	::RPG::GameCore::ChenLingBattleAbility_ChainLightning* AHMOJHDKNFB; // 0x38
	::System::Single BEEHPPHKLDC; // 0x40
	::System::Int32 BENGKHGIGGO; // 0x44
	::System::Int32 PPJHMPNKLFD; // 0x48
	::System::Int32 NCEPPDEAFCJ; // 0x4C
	::System::Single PPFOEPHMLKM; // 0x50

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_B8FF829EFDD29B81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_2_090B3B4C25B22640__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_090B3B4C25B22640_METHOD_2_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_2_1AB67458471FAC4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_090B3B4C25B22640_METHOD_2_1AB67458471FAC4D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_906D8EFA88B137F6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_090B3B4C25B22640_METHOD_2_906D8EFA88B137F6_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_090B3B4C25B22640_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::Class_2_6B60059019300BAD* Method_2_AAD69C1FDF90A82C()
	{
		return ((::Class_2_6B60059019300BAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_090B3B4C25B22640_METHOD_2_AAD69C1FDF90A82C_OFFSET))(this);
	}

	::System::Void Method_2_153C244FE00D1BE2(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_2_090B3B4C25B22640_METHOD_2_153C244FE00D1BE2_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2E3C8C332C44DC7(::Class_2_6B60059019300BAD* a1, ::Class_2_6B60059019300BAD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_2_090B3B4C25B22640_METHOD_2_B2E3C8C332C44DC7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_090B3B4C25B22640_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
