#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_127;

#define CLASS_1_DD57899CB8704013_1_GET_CURRENTPERCENT_OFFSET UNITYSDK_OFFSET(0x12CDA470)
#define CLASS_1_DD57899CB8704013_1_GET_DIVISIONLEVELUPRULE_OFFSET UNITYSDK_OFFSET(0x12CDA450)
#define CLASS_1_DD57899CB8704013_1_GET_MAXPERCENT_OFFSET UNITYSDK_OFFSET(0x12CDA430)
#define CLASS_1_DD57899CB8704013_1_SET_CURRENTPERCENT_OFFSET UNITYSDK_OFFSET(0x12CDA480)
#define CLASS_1_DD57899CB8704013_1_SET_DIVISIONLEVELUPRULE_OFFSET UNITYSDK_OFFSET(0x12CDA460)
#define CLASS_1_DD57899CB8704013_1_SET_MAXPERCENT_OFFSET UNITYSDK_OFFSET(0x12CDA440)
#define CLASS_1_DD57899CB8704013_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12CDA490)

inline static constexpr unsigned int Class_1_DD57899CB8704013_1_TypeDefinitionIndex = 79742;

class Class_1_DD57899CB8704013_1 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_127* _DivisionLevelUpRule_k__BackingField; // 0x10
	::System::Int32 _CurrentPercent_k__BackingField; // 0x18
	::System::Int32 _MaxPercent_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD57899CB8704013_1__CTOR_OFFSET))(this);
	}

	::System::Int32 get_MaxPercent()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD57899CB8704013_1_GET_MAXPERCENT_OFFSET))(this);
	}

	::System::Void set_MaxPercent(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DD57899CB8704013_1_SET_MAXPERCENT_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_127* get_DivisionLevelUpRule()
	{
		return ((::Class_0_16E4307DCC419505_127*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD57899CB8704013_1_GET_DIVISIONLEVELUPRULE_OFFSET))(this);
	}

	::System::Void set_DivisionLevelUpRule(::Class_0_16E4307DCC419505_127* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_127*))((::PBYTE)hIl2Cpp + CLASS_1_DD57899CB8704013_1_SET_DIVISIONLEVELUPRULE_OFFSET))(this, a1);
	}

	::System::Int32 get_CurrentPercent()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD57899CB8704013_1_GET_CURRENTPERCENT_OFFSET))(this);
	}

	::System::Void set_CurrentPercent(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DD57899CB8704013_1_SET_CURRENTPERCENT_OFFSET))(this, a1);
	}
};
