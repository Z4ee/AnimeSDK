#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_36006FC25F5DDC69;
class Class_2_181A7F9409C60DBC;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_ChainLightning; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_53400D160D567E90_METHOD_2_1AB67458471FAC4D_OFFSET UNITYSDK_OFFSET(0x11DFA890)
#define CLASS_2_53400D160D567E90_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11DFA970)
#define CLASS_2_53400D160D567E90_METHOD_2_392525CC2FC7EDDF_OFFSET UNITYSDK_OFFSET(0x11DFAE80)
#define CLASS_2_53400D160D567E90_METHOD_2_66193B8782064F5D_OFFSET UNITYSDK_OFFSET(0x11DFA690)
#define CLASS_2_53400D160D567E90_METHOD_2_6F3643A075115E43_OFFSET UNITYSDK_OFFSET(0x11DFA9D0)
#define CLASS_2_53400D160D567E90_METHOD_2_A88B36294D55B85C_OFFSET UNITYSDK_OFFSET(0x11DFA4D0)
#define CLASS_2_53400D160D567E90_METHOD_2_BD63D668B3D52C00_OFFSET UNITYSDK_OFFSET(0x11DFB180)
#define CLASS_2_53400D160D567E90_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11DFB590)
#define CLASS_2_53400D160D567E90__CTOR_OFFSET UNITYSDK_OFFSET(0x11DFA3C0)

inline static constexpr unsigned int Class_2_53400D160D567E90_TypeDefinitionIndex = 71392;

class Class_2_53400D160D567E90 : public ::Class_1_F65B6F8790DF074B
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_2; // 0x28
	::RPG::GameCore::ChenLingBattleAbility_ChainLightning* Field_2_0; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x38
	::System::Single Field_2_6; // 0x40
	::System::Int32 Field_2_4; // 0x44
	::System::Int32 Field_2_5; // 0x48
	::System::Int32 Field_2_3; // 0x4C
	::System::Single Field_2_7; // 0x50

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_36006FC25F5DDC69* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_2_53400D160D567E90__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A88B36294D55B85C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53400D160D567E90_METHOD_2_A88B36294D55B85C_OFFSET))(this);
	}

	::System::Void Method_2_1AB67458471FAC4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_53400D160D567E90_METHOD_2_1AB67458471FAC4D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_66193B8782064F5D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53400D160D567E90_METHOD_2_66193B8782064F5D_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53400D160D567E90_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::Class_2_181A7F9409C60DBC* Method_2_392525CC2FC7EDDF()
	{
		return ((::Class_2_181A7F9409C60DBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53400D160D567E90_METHOD_2_392525CC2FC7EDDF_OFFSET))(this);
	}

	::System::Void Method_2_6F3643A075115E43(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_2_53400D160D567E90_METHOD_2_6F3643A075115E43_OFFSET))(this, a1);
	}

	::System::Void Method_2_BD63D668B3D52C00(::Class_2_181A7F9409C60DBC* a1, ::Class_2_181A7F9409C60DBC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_2_53400D160D567E90_METHOD_2_BD63D668B3D52C00_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53400D160D567E90_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
