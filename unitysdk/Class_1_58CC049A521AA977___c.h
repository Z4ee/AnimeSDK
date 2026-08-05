#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_1_58CC049A521AA977___C_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x147E2810)
#define CLASS_1_58CC049A521AA977___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x147E27C0)
#define CLASS_1_58CC049A521AA977___C__CTOR_OFFSET UNITYSDK_OFFSET(0x147E2800)

inline static constexpr unsigned int Class_1_58CC049A521AA977___c_TypeDefinitionIndex = 84031;

class Class_1_58CC049A521AA977___c : public ::System::Object
{
public:
	static ::Class_1_58CC049A521AA977___c** StaticGet___9()
	{
		return (::Class_1_58CC049A521AA977___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_58CC049A521AA977___c_TypeDefinitionIndex)->GetStaticField(0x2F330);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__25_5()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_58CC049A521AA977___c_TypeDefinitionIndex)->GetStaticField(0x2F338);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_58CC049A521AA977___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58CC049A521AA977___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58CC049A521AA977___C_METHOD_1_CE18697B63E52504_OFFSET))(this);
	}
};
