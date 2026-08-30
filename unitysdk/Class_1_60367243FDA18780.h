#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_1_60367243FDA18780_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xF3E5C20)
#define CLASS_1_60367243FDA18780_METHOD_1_BF51A7F7DC348455_OFFSET UNITYSDK_OFFSET(0xF3E5B50)
#define CLASS_1_60367243FDA18780_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xF3E5BE0)
#define CLASS_1_60367243FDA18780_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF3E5BA0)
#define CLASS_1_60367243FDA18780__CTOR_OFFSET UNITYSDK_OFFSET(0xF3E5C80)

inline static constexpr unsigned int Class_1_60367243FDA18780_TypeDefinitionIndex = 61144;

class Class_1_60367243FDA18780 : public ::System::Object
{
public:
	::System::Func_1<::System::Boolean>* OLPNJHPNJNG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60367243FDA18780__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BF51A7F7DC348455(::System::Func_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_60367243FDA18780_METHOD_1_BF51A7F7DC348455_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60367243FDA18780_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60367243FDA18780_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60367243FDA18780_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
