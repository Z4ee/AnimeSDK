#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_8A4493ED0F5C1CB8___C_METHOD_1_080D5667375425D8_OFFSET UNITYSDK_OFFSET(0xF96F560)
#define CLASS_2_8A4493ED0F5C1CB8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF96F510)
#define CLASS_2_8A4493ED0F5C1CB8___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF96F550)

inline static constexpr unsigned int Class_2_8A4493ED0F5C1CB8___c_TypeDefinitionIndex = 82383;

class Class_2_8A4493ED0F5C1CB8___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__26_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8A4493ED0F5C1CB8___c_TypeDefinitionIndex)->GetStaticField(0x31320);
	}
	static ::Class_2_8A4493ED0F5C1CB8___c** StaticGet___9()
	{
		return (::Class_2_8A4493ED0F5C1CB8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8A4493ED0F5C1CB8___c_TypeDefinitionIndex)->GetStaticField(0x31328);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8A4493ED0F5C1CB8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A4493ED0F5C1CB8___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_080D5667375425D8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A4493ED0F5C1CB8___C_METHOD_1_080D5667375425D8_OFFSET))(this);
	}
};
