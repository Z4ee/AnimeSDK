#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B7D8FCA21FE37AFD_GET_BATTLETIME_OFFSET UNITYSDK_OFFSET(0xB687A50)
#define CLASS_1_B7D8FCA21FE37AFD_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0xB687A70)
#define CLASS_1_B7D8FCA21FE37AFD_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xB687A90)
#define CLASS_1_B7D8FCA21FE37AFD_METHOD_1_AF2CFBAAD2629B3B_OFFSET UNITYSDK_OFFSET(0xB687B60)
#define CLASS_1_B7D8FCA21FE37AFD_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB687B00)
#define CLASS_1_B7D8FCA21FE37AFD_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB687AB0)
#define CLASS_1_B7D8FCA21FE37AFD_SET_BATTLETIME_OFFSET UNITYSDK_OFFSET(0xB687A60)
#define CLASS_1_B7D8FCA21FE37AFD_SET_DELTATIME_OFFSET UNITYSDK_OFFSET(0xB687A80)
#define CLASS_1_B7D8FCA21FE37AFD_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xB687AA0)
#define CLASS_1_B7D8FCA21FE37AFD__CTOR_OFFSET UNITYSDK_OFFSET(0xB687C30)

inline static constexpr unsigned int Class_1_B7D8FCA21FE37AFD_TypeDefinitionIndex = 76838;

class Class_1_B7D8FCA21FE37AFD : public ::System::Object
{
public:
	::System::Single _DeltaTime_k__BackingField; // 0x10
	::System::Single _TimeScale_k__BackingField; // 0x14
	::System::Single _BattleTime_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7D8FCA21FE37AFD__CTOR_OFFSET))(this);
	}

	::System::Single get_BattleTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7D8FCA21FE37AFD_GET_BATTLETIME_OFFSET))(this);
	}

	::System::Void set_BattleTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B7D8FCA21FE37AFD_SET_BATTLETIME_OFFSET))(this, a1);
	}

	::System::Single get_DeltaTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7D8FCA21FE37AFD_GET_DELTATIME_OFFSET))(this);
	}

	::System::Void set_DeltaTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B7D8FCA21FE37AFD_SET_DELTATIME_OFFSET))(this, a1);
	}

	::System::Single get_TimeScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7D8FCA21FE37AFD_GET_TIMESCALE_OFFSET))(this);
	}

	::System::Void set_TimeScale(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B7D8FCA21FE37AFD_SET_TIMESCALE_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7D8FCA21FE37AFD_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7D8FCA21FE37AFD_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_AF2CFBAAD2629B3B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B7D8FCA21FE37AFD_METHOD_1_AF2CFBAAD2629B3B_OFFSET))(this, a1);
	}
};
