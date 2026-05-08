#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_79CEC7EE864FE78E___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x121C0400)
#define CLASS_2_79CEC7EE864FE78E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x121C03B0)
#define CLASS_2_79CEC7EE864FE78E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x121C03F0)

inline static constexpr unsigned int Class_2_79CEC7EE864FE78E___c_TypeDefinitionIndex = 41045;

class Class_2_79CEC7EE864FE78E___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__9_6()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_79CEC7EE864FE78E___c_TypeDefinitionIndex)->GetStaticField(0x42C60);
	}
	static ::Class_2_79CEC7EE864FE78E___c** StaticGet___9()
	{
		return (::Class_2_79CEC7EE864FE78E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_79CEC7EE864FE78E___c_TypeDefinitionIndex)->GetStaticField(0x42C68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_79CEC7EE864FE78E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79CEC7EE864FE78E___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79CEC7EE864FE78E___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
