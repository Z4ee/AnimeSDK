#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AB73914F11091999;

#define CLASS_1_AB73914F11091999___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3313D0)
#define CLASS_1_AB73914F11091999___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E331410)
#define CLASS_1_AB73914F11091999___C___CCTOR_B__78_0_OFFSET UNITYSDK_OFFSET(0x1E331420)

inline static constexpr unsigned int Class_1_AB73914F11091999___c_TypeDefinitionIndex = 25089;

class Class_1_AB73914F11091999___c : public ::System::Object
{
public:
	static ::Class_1_AB73914F11091999___c** StaticGet___9()
	{
		return (::Class_1_AB73914F11091999___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB73914F11091999___c_TypeDefinitionIndex)->GetStaticField(0x52F60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB73914F11091999___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB73914F11091999___C__CTOR_OFFSET))(this);
	}

	::Class_1_AB73914F11091999* __cctor_b__78_0()
	{
		return ((::Class_1_AB73914F11091999*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB73914F11091999___C___CCTOR_B__78_0_OFFSET))(this);
	}
};
