#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C8FB4A54717458FA_GET_ISGETCRITICALCHANCEPENALTY_OFFSET UNITYSDK_OFFSET(0x16B57360)
#define CLASS_1_C8FB4A54717458FA_GET_ISGETPROPERTYBONUS_OFFSET UNITYSDK_OFFSET(0x16B57340)
#define CLASS_1_C8FB4A54717458FA_GET_ISHASPROPERTYBONUS_OFFSET UNITYSDK_OFFSET(0x16B57320)
#define CLASS_1_C8FB4A54717458FA_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x16B57300)
#define CLASS_1_C8FB4A54717458FA_METHOD_1_AD125F4F7EE61610_OFFSET UNITYSDK_OFFSET(0x16B57380)
#define CLASS_1_C8FB4A54717458FA_SET_ISGETCRITICALCHANCEPENALTY_OFFSET UNITYSDK_OFFSET(0x16B57370)
#define CLASS_1_C8FB4A54717458FA_SET_ISGETPROPERTYBONUS_OFFSET UNITYSDK_OFFSET(0x16B57350)
#define CLASS_1_C8FB4A54717458FA_SET_ISHASPROPERTYBONUS_OFFSET UNITYSDK_OFFSET(0x16B57330)
#define CLASS_1_C8FB4A54717458FA_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x16B57310)
#define CLASS_1_C8FB4A54717458FA__CTOR_OFFSET UNITYSDK_OFFSET(0x16B573F0)

inline static constexpr unsigned int Class_1_C8FB4A54717458FA_TypeDefinitionIndex = 71028;

class Class_1_C8FB4A54717458FA : public ::System::Object
{
public:
	::System::Single _Score_k__BackingField; // 0x10
	::System::Boolean _IsHasPropertyBonus_k__BackingField; // 0x14
	::System::Boolean _IsGetCriticalChancePenalty_k__BackingField; // 0x15
	::System::Boolean _IsGetPropertyBonus_k__BackingField; // 0x16

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8FB4A54717458FA__CTOR_OFFSET))(this);
	}

	::System::Single get_Score()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8FB4A54717458FA_GET_SCORE_OFFSET))(this);
	}

	::System::Void set_Score(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C8FB4A54717458FA_SET_SCORE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsHasPropertyBonus()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8FB4A54717458FA_GET_ISHASPROPERTYBONUS_OFFSET))(this);
	}

	::System::Void set_IsHasPropertyBonus(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C8FB4A54717458FA_SET_ISHASPROPERTYBONUS_OFFSET))(this, a1);
	}

	::System::Boolean get_IsGetPropertyBonus()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8FB4A54717458FA_GET_ISGETPROPERTYBONUS_OFFSET))(this);
	}

	::System::Void set_IsGetPropertyBonus(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C8FB4A54717458FA_SET_ISGETPROPERTYBONUS_OFFSET))(this, a1);
	}

	::System::Boolean get_IsGetCriticalChancePenalty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8FB4A54717458FA_GET_ISGETCRITICALCHANCEPENALTY_OFFSET))(this);
	}

	::System::Void set_IsGetCriticalChancePenalty(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C8FB4A54717458FA_SET_ISGETCRITICALCHANCEPENALTY_OFFSET))(this, a1);
	}

	static ::Class_1_C8FB4A54717458FA* Method_1_AD125F4F7EE61610()
	{
		return ((::Class_1_C8FB4A54717458FA*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8FB4A54717458FA_METHOD_1_AD125F4F7EE61610_OFFSET))();
	}
};
