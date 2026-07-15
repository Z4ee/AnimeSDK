#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8D398246A70BD04C;

#define CLASS_1_8D398246A70BD04C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC14970)
#define CLASS_1_8D398246A70BD04C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC149B0)
#define CLASS_1_8D398246A70BD04C___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1CC149C0)

inline static constexpr unsigned int Class_1_8D398246A70BD04C___c_TypeDefinitionIndex = 24570;

class Class_1_8D398246A70BD04C___c : public ::System::Object
{
public:
	static ::Class_1_8D398246A70BD04C___c** StaticGet___9()
	{
		return (::Class_1_8D398246A70BD04C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D398246A70BD04C___c_TypeDefinitionIndex)->GetStaticField(0x27AC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D398246A70BD04C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D398246A70BD04C___C__CTOR_OFFSET))(this);
	}

	::Class_1_8D398246A70BD04C* __cctor_b__33_0()
	{
		return ((::Class_1_8D398246A70BD04C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D398246A70BD04C___C___CCTOR_B__33_0_OFFSET))(this);
	}
};
