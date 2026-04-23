#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2E64892306548DEA;

#define CLASS_1_2E64892306548DEA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x198348D0)
#define CLASS_1_2E64892306548DEA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19834900)
#define CLASS_1_2E64892306548DEA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x19834910)

inline static constexpr unsigned int Class_1_2E64892306548DEA___c_TypeDefinitionIndex = 31051;

class Class_1_2E64892306548DEA___c : public ::System::Object
{
public:
	static ::Class_1_2E64892306548DEA___c** StaticGet___9()
	{
		return (::Class_1_2E64892306548DEA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E64892306548DEA___c_TypeDefinitionIndex)->GetStaticField(0x67540);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA___C__CTOR_OFFSET))(this);
	}

	::Class_1_2E64892306548DEA* __cctor_b__38_0()
	{
		return ((::Class_1_2E64892306548DEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA___C___CCTOR_B__38_0_OFFSET))(this);
	}
};
