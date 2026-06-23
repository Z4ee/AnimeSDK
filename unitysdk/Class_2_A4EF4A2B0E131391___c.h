#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_A4EF4A2B0E131391___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12835220)
#define CLASS_2_A4EF4A2B0E131391___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x128351D0)
#define CLASS_2_A4EF4A2B0E131391___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12835210)

inline static constexpr unsigned int Class_2_A4EF4A2B0E131391___c_TypeDefinitionIndex = 86904;

class Class_2_A4EF4A2B0E131391___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__8_5()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A4EF4A2B0E131391___c_TypeDefinitionIndex)->GetStaticField(0x40590);
	}
	static ::Class_2_A4EF4A2B0E131391___c** StaticGet___9()
	{
		return (::Class_2_A4EF4A2B0E131391___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A4EF4A2B0E131391___c_TypeDefinitionIndex)->GetStaticField(0x40598);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A4EF4A2B0E131391___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4EF4A2B0E131391___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4EF4A2B0E131391___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
