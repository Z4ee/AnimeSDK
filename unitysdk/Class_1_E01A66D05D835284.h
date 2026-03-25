#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C5EC8F6B23A665DA;

#define CLASS_1_E01A66D05D835284_GET_CURRENTATK_OFFSET UNITYSDK_OFFSET(0xE463080)
#define CLASS_1_E01A66D05D835284_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0xE463060)
#define CLASS_1_E01A66D05D835284_GET_ISDEAD_OFFSET UNITYSDK_OFFSET(0xE4630A0)
#define CLASS_1_E01A66D05D835284_METHOD_1_097468641FDED14E_1_OFFSET UNITYSDK_OFFSET(0xE462FF0)
#define CLASS_1_E01A66D05D835284_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0xE462F90)
#define CLASS_1_E01A66D05D835284_METHOD_1_C3A221BD93074219_OFFSET UNITYSDK_OFFSET(0xE462F30)
#define CLASS_1_E01A66D05D835284_SET_CURRENTATK_OFFSET UNITYSDK_OFFSET(0xE463090)
#define CLASS_1_E01A66D05D835284_SET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0xE463070)
#define CLASS_1_E01A66D05D835284_SET_ISDEAD_OFFSET UNITYSDK_OFFSET(0xE4630B0)
#define CLASS_1_E01A66D05D835284__CTOR_1_OFFSET UNITYSDK_OFFSET(0xE462F20)
#define CLASS_1_E01A66D05D835284__CTOR_OFFSET UNITYSDK_OFFSET(0xE462F10)

inline static constexpr unsigned int Class_1_E01A66D05D835284_TypeDefinitionIndex = 51489;

class Class_1_E01A66D05D835284 : public ::System::Object
{
public:
	::System::Int32 _CurrentAtk_k__BackingField; // 0x10
	::System::Int32 _CurrentHP_k__BackingField; // 0x14
	::System::Boolean _IsDead_k__BackingField; // 0x18

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

	::System::Void Method_1_097468641FDED14E_1(::Class_1_C5EC8F6B23A665DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C5EC8F6B23A665DA*))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284_METHOD_1_097468641FDED14E_1_OFFSET))(this, a1);
	}

	::System::Int32 get_CurrentHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284_GET_CURRENTHP_OFFSET))(this);
	}

	::System::Void set_CurrentHP(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284_SET_CURRENTHP_OFFSET))(this, value);
	}

	::System::Int32 get_CurrentAtk()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284_GET_CURRENTATK_OFFSET))(this);
	}

	::System::Void set_CurrentAtk(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284_SET_CURRENTATK_OFFSET))(this, value);
	}

	::System::Boolean get_IsDead()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284_GET_ISDEAD_OFFSET))(this);
	}

	::System::Void set_IsDead(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284_SET_ISDEAD_OFFSET))(this, value);
	}
};
