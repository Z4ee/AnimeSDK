#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_EEE27890175F39C0___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x124EE080)
#define CLASS_2_EEE27890175F39C0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x124EE030)
#define CLASS_2_EEE27890175F39C0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x124EE070)

inline static constexpr unsigned int Class_2_EEE27890175F39C0___c_TypeDefinitionIndex = 77746;

class Class_2_EEE27890175F39C0___c : public ::System::Object
{
public:
	static ::Class_2_EEE27890175F39C0___c** StaticGet___9()
	{
		return (::Class_2_EEE27890175F39C0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EEE27890175F39C0___c_TypeDefinitionIndex)->GetStaticField(0x45D30);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__8_13()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EEE27890175F39C0___c_TypeDefinitionIndex)->GetStaticField(0x45D38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EEE27890175F39C0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEE27890175F39C0___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEE27890175F39C0___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
