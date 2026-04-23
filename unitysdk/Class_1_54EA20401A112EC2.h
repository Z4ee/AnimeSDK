#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_943;

#define CLASS_1_54EA20401A112EC2_GET_TWEENDURATION_OFFSET UNITYSDK_OFFSET(0x11791B70)
#define CLASS_1_54EA20401A112EC2_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x11791B00)
#define CLASS_1_54EA20401A112EC2_METHOD_1_4596F383E794D9CB_OFFSET UNITYSDK_OFFSET(0x11791AA0)
#define CLASS_1_54EA20401A112EC2_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x11791B90)
#define CLASS_1_54EA20401A112EC2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11791B60)
#define CLASS_1_54EA20401A112EC2_SET_TWEENDURATION_OFFSET UNITYSDK_OFFSET(0x11791B80)
#define CLASS_1_54EA20401A112EC2__CTOR_OFFSET UNITYSDK_OFFSET(0x11791BA0)

inline static constexpr unsigned int Class_1_54EA20401A112EC2_TypeDefinitionIndex = 65910;

class Class_1_54EA20401A112EC2 : public ::System::Object
{
public:
	::System::Single _TweenDuration_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54EA20401A112EC2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_4596F383E794D9CB(::Class_0_16E4307DCC419505_943* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_943*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_54EA20401A112EC2_METHOD_1_4596F383E794D9CB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54EA20401A112EC2_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54EA20401A112EC2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single get_TweenDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54EA20401A112EC2_GET_TWEENDURATION_OFFSET))(this);
	}

	::System::Void set_TweenDuration(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54EA20401A112EC2_SET_TWEENDURATION_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54EA20401A112EC2_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
