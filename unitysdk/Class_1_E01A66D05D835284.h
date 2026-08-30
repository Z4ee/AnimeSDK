#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3E926525914B2E70;

#define CLASS_1_E01A66D05D835284_GET_CURRENTATK_OFFSET UNITYSDK_OFFSET(0x1562DA40)
#define CLASS_1_E01A66D05D835284_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x1562DA20)
#define CLASS_1_E01A66D05D835284_GET_ISDEAD_OFFSET UNITYSDK_OFFSET(0x1562DA60)
#define CLASS_1_E01A66D05D835284_METHOD_1_097468641FDED14E_1_OFFSET UNITYSDK_OFFSET(0x1562D9B0)
#define CLASS_1_E01A66D05D835284_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x1562D940)
#define CLASS_1_E01A66D05D835284_METHOD_1_C3A221BD93074219_OFFSET UNITYSDK_OFFSET(0x1562D8E0)
#define CLASS_1_E01A66D05D835284_SET_CURRENTATK_OFFSET UNITYSDK_OFFSET(0x1562DA50)
#define CLASS_1_E01A66D05D835284_SET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x1562DA30)
#define CLASS_1_E01A66D05D835284_SET_ISDEAD_OFFSET UNITYSDK_OFFSET(0x1562DA70)
#define CLASS_1_E01A66D05D835284__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1562D8D0)
#define CLASS_1_E01A66D05D835284__CTOR_OFFSET UNITYSDK_OFFSET(0x1562D8C0)

inline static constexpr unsigned int Class_1_E01A66D05D835284_TypeDefinitionIndex = 63481;

class Class_1_E01A66D05D835284 : public ::System::Object
{
public:
	::System::Int32 _CurrentHP_k__BackingField; // 0x10
	::System::Boolean _IsDead_k__BackingField; // 0x14
	::System::Int32 _CurrentAtk_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C3A221BD93074219(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284_METHOD_1_C3A221BD93074219_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_E01A66D05D835284* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E01A66D05D835284*))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_1_097468641FDED14E_1(::Class_1_3E926525914B2E70* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3E926525914B2E70*))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284_METHOD_1_097468641FDED14E_1_OFFSET))(this, a1);
	}

	::System::Int32 get_CurrentHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284_GET_CURRENTHP_OFFSET))(this);
	}

	::System::Void set_CurrentHP(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284_SET_CURRENTHP_OFFSET))(this, a1);
	}

	::System::Int32 get_CurrentAtk()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284_GET_CURRENTATK_OFFSET))(this);
	}

	::System::Void set_CurrentAtk(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284_SET_CURRENTATK_OFFSET))(this, a1);
	}

	::System::Boolean get_IsDead()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284_GET_ISDEAD_OFFSET))(this);
	}

	::System::Void set_IsDead(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284_SET_ISDEAD_OFFSET))(this, a1);
	}
};
