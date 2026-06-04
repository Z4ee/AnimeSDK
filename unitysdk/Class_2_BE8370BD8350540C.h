#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5332742A7B058447.h"

class Class_2_5436AF4270279182;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class ChenLingFesLevelAbilityConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_BE8370BD8350540C_GET_ABILITYID_OFFSET UNITYSDK_OFFSET(0x143045D0)
#define CLASS_2_BE8370BD8350540C_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x143045B0)
#define CLASS_2_BE8370BD8350540C_METHOD_2_1EA3754039AA10DF_OFFSET UNITYSDK_OFFSET(0x14304140)
#define CLASS_2_BE8370BD8350540C_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x143044A0)
#define CLASS_2_BE8370BD8350540C_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x14303F40)
#define CLASS_2_BE8370BD8350540C_METHOD_2_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0x14303DE0)
#define CLASS_2_BE8370BD8350540C_METHOD_2_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x143040A0)
#define CLASS_2_BE8370BD8350540C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14304100)
#define CLASS_2_BE8370BD8350540C_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14303DC0)
#define CLASS_2_BE8370BD8350540C_SET_ABILITYID_OFFSET UNITYSDK_OFFSET(0x143045E0)
#define CLASS_2_BE8370BD8350540C_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x143045C0)
#define CLASS_2_BE8370BD8350540C__CTOR_OFFSET UNITYSDK_OFFSET(0x14303980)

inline static constexpr unsigned int Class_2_BE8370BD8350540C_TypeDefinitionIndex = 72232;

class Class_2_BE8370BD8350540C : public ::Class_1_5332742A7B058447
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::RPG::GameCore::ChenLingFesLevelAbilityConfig* _Config_k__BackingField; // 0x20
	::Class_2_5436AF4270279182* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x38
	::Class_3_07C3C4D2990C49EE* Field_2_5; // 0x40
	::System::Single Field_2_6; // 0x48
	::System::Int32 _AbilityID_k__BackingField; // 0x4C
	::System::Single Field_2_8; // 0x50
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

	::System::Void Method_2_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE8370BD8350540C_METHOD_2_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE8370BD8350540C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1EA3754039AA10DF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BE8370BD8350540C_METHOD_2_1EA3754039AA10DF_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE8370BD8350540C_METHOD_2_30D1209326FA87FC_OFFSET))(this);
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
