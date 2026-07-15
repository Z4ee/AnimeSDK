#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5332742A7B058447.h"

class Class_2_5436AF4270279182;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class ChenLingFesLevelAbilityConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_BE8370BD8350540C_GET_ABILITYID_OFFSET UNITYSDK_OFFSET(0x1671EC00)
#define CLASS_2_BE8370BD8350540C_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1671EBE0)
#define CLASS_2_BE8370BD8350540C_METHOD_2_1EA3754039AA10DF_OFFSET UNITYSDK_OFFSET(0x1671E5B0)
#define CLASS_2_BE8370BD8350540C_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x1671E510)
#define CLASS_2_BE8370BD8350540C_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x1671E910)
#define CLASS_2_BE8370BD8350540C_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x1671E3B0)
#define CLASS_2_BE8370BD8350540C_METHOD_2_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0x1671E250)
#define CLASS_2_BE8370BD8350540C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1671E570)
#define CLASS_2_BE8370BD8350540C_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1671E230)
#define CLASS_2_BE8370BD8350540C_SET_ABILITYID_OFFSET UNITYSDK_OFFSET(0x1671EC10)
#define CLASS_2_BE8370BD8350540C_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1671EBF0)
#define CLASS_2_BE8370BD8350540C__CTOR_OFFSET UNITYSDK_OFFSET(0x1671DE60)

inline static constexpr unsigned int Class_2_BE8370BD8350540C_TypeDefinitionIndex = 73757;

class Class_2_BE8370BD8350540C : public ::Class_1_5332742A7B058447
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::Class_2_5436AF4270279182* Field_2_3; // 0x30
	::RPG::GameCore::ChenLingFesLevelAbilityConfig* _Config_k__BackingField; // 0x38
	::Class_3_07C3C4D2990C49EE* Field_2_5; // 0x40
	::System::Single Field_2_6; // 0x48
	::System::Single Field_2_7; // 0x4C
	::System::Int32 _AbilityID_k__BackingField; // 0x50
	::System::Single Field_2_9; // 0x54
	::System::Single Field_2_10; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChenLingFesLevelAbilityConfig* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChenLingFesLevelAbilityConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BE8370BD8350540C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE8370BD8350540C_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_A56385E6706FA723()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE8370BD8350540C_METHOD_2_A56385E6706FA723_OFFSET))(this);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE8370BD8350540C_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE8370BD8350540C_METHOD_2_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE8370BD8350540C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1EA3754039AA10DF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BE8370BD8350540C_METHOD_2_1EA3754039AA10DF_OFFSET))(this, a1);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE8370BD8350540C_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::RPG::GameCore::ChenLingFesLevelAbilityConfig* get_Config()
	{
		return ((::RPG::GameCore::ChenLingFesLevelAbilityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE8370BD8350540C_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ChenLingFesLevelAbilityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesLevelAbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_BE8370BD8350540C_SET_CONFIG_OFFSET))(this, a1);
	}

	::System::Int32 get_AbilityID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE8370BD8350540C_GET_ABILITYID_OFFSET))(this);
	}

	::System::Void set_AbilityID(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BE8370BD8350540C_SET_ABILITYID_OFFSET))(this, a1);
	}
};
