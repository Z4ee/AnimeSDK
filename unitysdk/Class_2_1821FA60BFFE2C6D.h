#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47EB23CB5C4B2615_33_Class_1_9A90CD018E72DF20_8.h"
#include "unitysdk/RPG/GameCore/ConditionType.h"

class Class_0_16E4307DCC419505_630;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define CLASS_2_1821FA60BFFE2C6D_GET_CONDITIONPARAM_OFFSET UNITYSDK_OFFSET(0x163A8960)
#define CLASS_2_1821FA60BFFE2C6D_METHOD_2_9AD043FF7578EFB2_OFFSET UNITYSDK_OFFSET(0x163A8A20)
#define CLASS_2_1821FA60BFFE2C6D_METHOD_2_AEE8799035F6C4DD_OFFSET UNITYSDK_OFFSET(0x163A89C0)
#define CLASS_2_1821FA60BFFE2C6D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x163A8B60)
#define CLASS_2_1821FA60BFFE2C6D_SET_CONDITIONPARAM_OFFSET UNITYSDK_OFFSET(0x163A8970)
#define CLASS_2_1821FA60BFFE2C6D__CTOR_OFFSET UNITYSDK_OFFSET(0x163A8980)

inline static constexpr unsigned int Class_2_1821FA60BFFE2C6D_TypeDefinitionIndex = 57244;

class Class_2_1821FA60BFFE2C6D : public ::Class_1_47EB23CB5C4B2615_33_Class_1_9A90CD018E72DF20_8
{
public:
	::RPG::GameCore::ConditionParam* _ConditionParam_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::GameCore::ConditionType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConditionType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1821FA60BFFE2C6D__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ConditionParam* get_ConditionParam()
	{
		return ((::RPG::GameCore::ConditionParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1821FA60BFFE2C6D_GET_CONDITIONPARAM_OFFSET))(this);
	}

	::System::Void set_ConditionParam(::RPG::GameCore::ConditionParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + CLASS_2_1821FA60BFFE2C6D_SET_CONDITIONPARAM_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AEE8799035F6C4DD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1821FA60BFFE2C6D_METHOD_2_AEE8799035F6C4DD_OFFSET))(this);
	}

	::System::Void Method_2_9AD043FF7578EFB2(::Class_0_16E4307DCC419505_630* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_630*))((::PBYTE)hIl2Cpp + CLASS_2_1821FA60BFFE2C6D_METHOD_2_9AD043FF7578EFB2_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1821FA60BFFE2C6D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
