#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5332742A7B058447.h"

class Class_2_5436AF4270279182;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class ChenLingFesLevelAbilityConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_BE8370BD8350540C_GET_ABILITYID_OFFSET UNITYSDK_OFFSET(0x18558DC0)
#define CLASS_2_BE8370BD8350540C_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x18558DA0)
#define CLASS_2_BE8370BD8350540C_METHOD_2_1EA3754039AA10DF_OFFSET UNITYSDK_OFFSET(0x18558770)
#define CLASS_2_BE8370BD8350540C_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x185586D0)
#define CLASS_2_BE8370BD8350540C_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x18558AD0)
#define CLASS_2_BE8370BD8350540C_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x18558570)
#define CLASS_2_BE8370BD8350540C_METHOD_2_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0x18558410)
#define CLASS_2_BE8370BD8350540C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18558730)
#define CLASS_2_BE8370BD8350540C_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x185583F0)
#define CLASS_2_BE8370BD8350540C_SET_ABILITYID_OFFSET UNITYSDK_OFFSET(0x18558DD0)
#define CLASS_2_BE8370BD8350540C_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x18558DB0)
#define CLASS_2_BE8370BD8350540C__CTOR_OFFSET UNITYSDK_OFFSET(0x18558020)

inline static constexpr unsigned int Class_2_BE8370BD8350540C_TypeDefinitionIndex = 77241;

class Class_2_BE8370BD8350540C : public ::Class_1_5332742A7B058447
{
public:
	::Class_3_07C3C4D2990C49EE* EELHJCEEBNC; // 0x18
	::RPG::GameCore::ChenLingFesLevelAbilityConfig* _Config_k__BackingField; // 0x20
	::Class_3_07C3C4D2990C49EE* EFMKPFCEKCL; // 0x28
	::Class_3_07C3C4D2990C49EE* GEAKNAPJGFD; // 0x30
	::Class_2_5436AF4270279182* EENKEBPDHCN; // 0x38
	::Class_3_07C3C4D2990C49EE* LEOIENNPNLP; // 0x40
	::System::Single MMOCIIJHFHL; // 0x48
	::System::Single OFDKFNDPEAL; // 0x4C
	::System::Int32 _AbilityID_k__BackingField; // 0x50
	::System::Single PJCPJFBOPEA; // 0x54
	::System::Single DAFAMCIPHDE; // 0x58

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
