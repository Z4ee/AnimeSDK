#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"
#include "unitysdk/Class_2_8028292537B6D2B7_DashPhaseState.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_36006FC25F5DDC69;
class Class_1_A02AD12DCED9B766;
class Class_2_181A7F9409C60DBC;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_Dash; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8028292537B6D2B7_METHOD_2_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x12AAAFD0)
#define CLASS_2_8028292537B6D2B7_METHOD_2_0A3B90148BF9AF74_OFFSET UNITYSDK_OFFSET(0x12AAADF0)
#define CLASS_2_8028292537B6D2B7_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x12AAC150)
#define CLASS_2_8028292537B6D2B7_METHOD_2_37011B6DDBE4CF26_OFFSET UNITYSDK_OFFSET(0x12AAB700)
#define CLASS_2_8028292537B6D2B7_METHOD_2_3A9C03366E936C66_OFFSET UNITYSDK_OFFSET(0x12AACD80)
#define CLASS_2_8028292537B6D2B7_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x12AACF70)
#define CLASS_2_8028292537B6D2B7_METHOD_2_8A2905DAFB806E28_OFFSET UNITYSDK_OFFSET(0x12AAC1B0)
#define CLASS_2_8028292537B6D2B7_METHOD_2_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x12AAB910)
#define CLASS_2_8028292537B6D2B7_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x12AAC320)
#define CLASS_2_8028292537B6D2B7_METHOD_2_9823BFA3CE8B5542_OFFSET UNITYSDK_OFFSET(0x12AABAF0)
#define CLASS_2_8028292537B6D2B7_METHOD_2_AEDD27C5E1F99995_OFFSET UNITYSDK_OFFSET(0x12AABA70)
#define CLASS_2_8028292537B6D2B7_METHOD_2_AF36EBA0C8D1FBA2_OFFSET UNITYSDK_OFFSET(0x12AAB3B0)
#define CLASS_2_8028292537B6D2B7_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x12AACEA0)
#define CLASS_2_8028292537B6D2B7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12AACE60)
#define CLASS_2_8028292537B6D2B7__CTOR_OFFSET UNITYSDK_OFFSET(0x12AAAEE0)

inline static constexpr unsigned int Class_2_8028292537B6D2B7_TypeDefinitionIndex = 71402;

class Class_2_8028292537B6D2B7 : public ::Class_1_F65B6F8790DF074B
{
public:
	// static const ::System::Single Field_2_8; // 0x0
	::RPG::GameCore::ChenLingBattleAbility_Dash* Field_2_0; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_6; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_7; // 0x38
	::System::Collections::Generic::List_1<::Class_1_A02AD12DCED9B766*>* Field_2_4; // 0x40
	::Class_1_A02AD12DCED9B766* Field_2_5; // 0x48
	::System::Single Field_2_1; // 0x50
	::Class_2_8028292537B6D2B7_DashPhaseState Field_2_3; // 0x54
	::UnityEngine::Vector3 Field_2_2; // 0x58

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_36006FC25F5DDC69* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_2_8028292537B6D2B7__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_2_181A7F9409C60DBC* Method_2_0A3B90148BF9AF74()
	{
		return ((::Class_2_181A7F9409C60DBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8028292537B6D2B7_METHOD_2_0A3B90148BF9AF74_OFFSET))(this);
	}

	::System::Void Method_2_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8028292537B6D2B7_METHOD_2_071850D2764E9D4C_OFFSET))(this);
	}

	::System::Void Method_2_AF36EBA0C8D1FBA2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8028292537B6D2B7_METHOD_2_AF36EBA0C8D1FBA2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_37011B6DDBE4CF26()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8028292537B6D2B7_METHOD_2_37011B6DDBE4CF26_OFFSET))(this);
	}

	::System::Void Method_2_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8028292537B6D2B7_METHOD_2_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_2_AEDD27C5E1F99995(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8028292537B6D2B7_METHOD_2_AEDD27C5E1F99995_OFFSET))(this, a1);
	}

	::System::Void Method_2_9823BFA3CE8B5542(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8028292537B6D2B7_METHOD_2_9823BFA3CE8B5542_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A9C03366E936C66(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8028292537B6D2B7_METHOD_2_3A9C03366E936C66_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8028292537B6D2B7_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_8A2905DAFB806E28(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8028292537B6D2B7_METHOD_2_8A2905DAFB806E28_OFFSET))(this, a1);
	}

	::System::Void Method_2_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8028292537B6D2B7_METHOD_2_960032BA2E22793D_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8028292537B6D2B7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8028292537B6D2B7_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8028292537B6D2B7_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
