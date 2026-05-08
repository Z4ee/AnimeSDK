#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_A6F8D19602712D95;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_5_354FFAF5B0FC5B5A___C_METHOD_1_D90FD016AE3904D5_OFFSET UNITYSDK_OFFSET(0x14387A40)
#define CLASS_5_354FFAF5B0FC5B5A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x143879F0)
#define CLASS_5_354FFAF5B0FC5B5A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14387A30)

inline static constexpr unsigned int Class_5_354FFAF5B0FC5B5A___c_TypeDefinitionIndex = 70167;

class Class_5_354FFAF5B0FC5B5A___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_5_A6F8D19602712D95*, ::System::Boolean>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Class_5_A6F8D19602712D95*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_354FFAF5B0FC5B5A___c_TypeDefinitionIndex)->GetStaticField(0x39AA0);
	}
	static ::Class_5_354FFAF5B0FC5B5A___c** StaticGet___9()
	{
		return (::Class_5_354FFAF5B0FC5B5A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_354FFAF5B0FC5B5A___c_TypeDefinitionIndex)->GetStaticField(0x39AA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_354FFAF5B0FC5B5A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_354FFAF5B0FC5B5A___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D90FD016AE3904D5(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_5_354FFAF5B0FC5B5A___C_METHOD_1_D90FD016AE3904D5_OFFSET))(this, a1);
	}
};
