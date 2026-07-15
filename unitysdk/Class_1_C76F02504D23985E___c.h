#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C76F02504D23985E;

#define CLASS_1_C76F02504D23985E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8162B0)
#define CLASS_1_C76F02504D23985E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8162F0)
#define CLASS_1_C76F02504D23985E___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1C816300)

inline static constexpr unsigned int Class_1_C76F02504D23985E___c_TypeDefinitionIndex = 25172;

class Class_1_C76F02504D23985E___c : public ::System::Object
{
public:
	static ::Class_1_C76F02504D23985E___c** StaticGet___9()
	{
		return (::Class_1_C76F02504D23985E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C76F02504D23985E___c_TypeDefinitionIndex)->GetStaticField(0x2AB90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C76F02504D23985E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C76F02504D23985E___C__CTOR_OFFSET))(this);
	}

	::Class_1_C76F02504D23985E* __cctor_b__33_0()
	{
		return ((::Class_1_C76F02504D23985E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C76F02504D23985E___C___CCTOR_B__33_0_OFFSET))(this);
	}
};
