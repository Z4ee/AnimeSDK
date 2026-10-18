#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D8354001CDC8D6DC_1_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xBCF0890)
#define CLASS_1_D8354001CDC8D6DC_1_GET_NUM_OFFSET UNITYSDK_OFFSET(0xBCF08B0)
#define CLASS_1_D8354001CDC8D6DC_1_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xBCF08A0)
#define CLASS_1_D8354001CDC8D6DC_1_SET_NUM_OFFSET UNITYSDK_OFFSET(0xBCF08C0)
#define CLASS_1_D8354001CDC8D6DC_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBCF08D0)

inline static constexpr unsigned int Class_1_D8354001CDC8D6DC_1_TypeDefinitionIndex = 79632;

class Class_1_D8354001CDC8D6DC_1 : public ::System::Object
{
public:
	::System::Boolean _IsActive_k__BackingField; // 0x10
	::System::Int32 _Num_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8354001CDC8D6DC_1__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8354001CDC8D6DC_1_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D8354001CDC8D6DC_1_SET_ISACTIVE_OFFSET))(this, a1);
	}

	::System::Int32 get_Num()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8354001CDC8D6DC_1_GET_NUM_OFFSET))(this);
	}

	::System::Void set_Num(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D8354001CDC8D6DC_1_SET_NUM_OFFSET))(this, a1);
	}
};
