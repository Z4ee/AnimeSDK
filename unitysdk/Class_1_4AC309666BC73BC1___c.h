#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4AC309666BC73BC1;

#define CLASS_1_4AC309666BC73BC1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A185190)
#define CLASS_1_4AC309666BC73BC1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1851D0)
#define CLASS_1_4AC309666BC73BC1___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1A1851E0)

inline static constexpr unsigned int Class_1_4AC309666BC73BC1___c_TypeDefinitionIndex = 26304;

class Class_1_4AC309666BC73BC1___c : public ::System::Object
{
public:
	static ::Class_1_4AC309666BC73BC1___c** StaticGet___9()
	{
		return (::Class_1_4AC309666BC73BC1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AC309666BC73BC1___c_TypeDefinitionIndex)->GetStaticField(0x2DFE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4AC309666BC73BC1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC309666BC73BC1___C__CTOR_OFFSET))(this);
	}

	::Class_1_4AC309666BC73BC1* __cctor_b__33_0()
	{
		return ((::Class_1_4AC309666BC73BC1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC309666BC73BC1___C___CCTOR_B__33_0_OFFSET))(this);
	}
};
