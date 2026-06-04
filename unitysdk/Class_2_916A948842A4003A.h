#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"
#include "unitysdk/Class_2_916A948842A4003A_DashPhaseState.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B8836451EE3130C0;
class Class_1_B8FF829EFDD29B81;
class Class_2_6B60059019300BAD;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_Dash; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_916A948842A4003A_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xAC04CC0)
#define CLASS_2_916A948842A4003A_METHOD_2_37011B6DDBE4CF26_OFFSET UNITYSDK_OFFSET(0xAC04230)
#define CLASS_2_916A948842A4003A_METHOD_2_3A9C03366E936C66_OFFSET UNITYSDK_OFFSET(0xAC058C0)
#define CLASS_2_916A948842A4003A_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0xAC04E90)
#define CLASS_2_916A948842A4003A_METHOD_2_50D6A7C67ED3EDC7_OFFSET UNITYSDK_OFFSET(0xAC04610)
#define CLASS_2_916A948842A4003A_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAC05AE0)
#define CLASS_2_916A948842A4003A_METHOD_2_83DA8FE11BEA9751_OFFSET UNITYSDK_OFFSET(0xAC04D20)
#define CLASS_2_916A948842A4003A_METHOD_2_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0xAC04430)
#define CLASS_2_916A948842A4003A_METHOD_2_AEDD27C5E1F99995_OFFSET UNITYSDK_OFFSET(0xAC04590)
#define CLASS_2_916A948842A4003A_METHOD_2_AF36EBA0C8D1FBA2_OFFSET UNITYSDK_OFFSET(0xAC03EF0)
#define CLASS_2_916A948842A4003A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAC059A0)
#define CLASS_2_916A948842A4003A_METHOD_2_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0xAC03AF0)
#define CLASS_2_916A948842A4003A_METHOD_2_CFE6FB160FFF5938_OFFSET UNITYSDK_OFFSET(0xAC059E0)
#define CLASS_2_916A948842A4003A_METHOD_2_DF2186C51E25C1BB_OFFSET UNITYSDK_OFFSET(0xAC038A0)
#define CLASS_2_916A948842A4003A__CTOR_OFFSET UNITYSDK_OFFSET(0xAC039F0)

inline static constexpr unsigned int Class_2_916A948842A4003A_TypeDefinitionIndex = 72424;

class Class_2_916A948842A4003A : public ::Class_1_F65B6F8790DF074B
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::System::Collections::Generic::List_1<::Class_1_B8836451EE3130C0*>* Field_2_1; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_2; // 0x30
	::RPG::GameCore::ChenLingBattleAbility_Dash* Field_2_3; // 0x38
	::Class_1_B8836451EE3130C0* Field_2_4; // 0x40
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_5; // 0x48
	::System::Single Field_2_6; // 0x50
	::UnityEngine::Vector3 Field_2_7; // 0x54
	::Class_2_916A948842A4003A_DashPhaseState Field_2_8; // 0x60

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_B8FF829EFDD29B81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_2_916A948842A4003A__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_2_6B60059019300BAD* Method_2_DF2186C51E25C1BB()
	{
		return ((::Class_2_6B60059019300BAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916A948842A4003A_METHOD_2_DF2186C51E25C1BB_OFFSET))(this);
	}

	::System::Void Method_2_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916A948842A4003A_METHOD_2_CEA32FF190776922_OFFSET))(this);
	}

	::System::Void Method_2_AF36EBA0C8D1FBA2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_916A948842A4003A_METHOD_2_AF36EBA0C8D1FBA2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_37011B6DDBE4CF26()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916A948842A4003A_METHOD_2_37011B6DDBE4CF26_OFFSET))(this);
	}

	::System::Void Method_2_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916A948842A4003A_METHOD_2_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_2_AEDD27C5E1F99995(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_916A948842A4003A_METHOD_2_AEDD27C5E1F99995_OFFSET))(this, a1);
	}

	::System::Void Method_2_50D6A7C67ED3EDC7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_916A948842A4003A_METHOD_2_50D6A7C67ED3EDC7_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A9C03366E936C66(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_916A948842A4003A_METHOD_2_3A9C03366E936C66_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916A948842A4003A_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_83DA8FE11BEA9751(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_916A948842A4003A_METHOD_2_83DA8FE11BEA9751_OFFSET))(this, a1);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916A948842A4003A_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916A948842A4003A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CFE6FB160FFF5938()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916A948842A4003A_METHOD_2_CFE6FB160FFF5938_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916A948842A4003A_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
