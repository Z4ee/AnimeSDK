#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_03F582656BE665BC;

#define CLASS_1_03F582656BE665BC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C29C410)
#define CLASS_1_03F582656BE665BC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C29C440)
#define CLASS_1_03F582656BE665BC___C___CCTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0x1C29C450)

inline static constexpr unsigned int Class_1_03F582656BE665BC___c_TypeDefinitionIndex = 25884;

class Class_1_03F582656BE665BC___c : public ::System::Object
{
public:
	static ::Class_1_03F582656BE665BC___c** StaticGet___9()
	{
		return (::Class_1_03F582656BE665BC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_03F582656BE665BC___c_TypeDefinitionIndex)->GetStaticField(0x55C00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_03F582656BE665BC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03F582656BE665BC___C__CTOR_OFFSET))(this);
	}

	::Class_1_03F582656BE665BC* __cctor_b__42_0()
	{
		return ((::Class_1_03F582656BE665BC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03F582656BE665BC___C___CCTOR_B__42_0_OFFSET))(this);
	}
};
