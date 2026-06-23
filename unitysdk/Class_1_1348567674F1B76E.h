#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_91;
class Class_1_64FA72CEAB1AF5ED;
class Class_1_99BC3314E5B9C3C0;

#define CLASS_1_1348567674F1B76E_METHOD_1_960D14598AB74A01_OFFSET UNITYSDK_OFFSET(0xDC86160)
#define CLASS_1_1348567674F1B76E_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xDC86100)
#define CLASS_1_1348567674F1B76E_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xDC86110)
#define CLASS_1_1348567674F1B76E__CTOR_OFFSET UNITYSDK_OFFSET(0xDC863D0)

inline static constexpr unsigned int Class_1_1348567674F1B76E_TypeDefinitionIndex = 88115;

class Class_1_1348567674F1B76E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1348567674F1B76E__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1348567674F1B76E_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_99BC3314E5B9C3C0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BC3314E5B9C3C0*))((::PBYTE)hIl2Cpp + CLASS_1_1348567674F1B76E_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_960D14598AB74A01(::System::Single a1, ::Class_1_64FA72CEAB1AF5ED* a2, ::System::Int32 a3, ::Class_0_16E4307DCC419505_91* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::Class_1_64FA72CEAB1AF5ED*, ::System::Int32, ::Class_0_16E4307DCC419505_91*))((::PBYTE)hIl2Cpp + CLASS_1_1348567674F1B76E_METHOD_1_960D14598AB74A01_OFFSET))(this, a1, a2, a3, a4);
	}
};
