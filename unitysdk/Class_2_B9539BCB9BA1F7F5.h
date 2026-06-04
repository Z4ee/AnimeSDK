#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD6736B46496BBF4.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"

class Class_1_355A2207C3B7A99D_95;
class Class_1_FF03248024BAA97A_2;

#define CLASS_2_B9539BCB9BA1F7F5_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x14147FA0)
#define CLASS_2_B9539BCB9BA1F7F5__CTOR_OFFSET UNITYSDK_OFFSET(0x14147F80)

inline static constexpr unsigned int Class_2_B9539BCB9BA1F7F5_TypeDefinitionIndex = 62756;

class Class_2_B9539BCB9BA1F7F5 : public ::Class_1_CD6736B46496BBF4
{
public:
	::Class_1_FF03248024BAA97A_2* Field_2_0; // 0x20

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_2 a1, ::Class_1_355A2207C3B7A99D_95* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_2, ::Class_1_355A2207C3B7A99D_95*))((::PBYTE)hIl2Cpp + CLASS_2_B9539BCB9BA1F7F5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9539BCB9BA1F7F5_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}
};
