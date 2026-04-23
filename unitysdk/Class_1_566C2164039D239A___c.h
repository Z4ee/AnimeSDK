#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_566C2164039D239A;

#define CLASS_1_566C2164039D239A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x192F8310)
#define CLASS_1_566C2164039D239A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x192F8350)
#define CLASS_1_566C2164039D239A___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x192F8360)

inline static constexpr unsigned int Class_1_566C2164039D239A___c_TypeDefinitionIndex = 25507;

class Class_1_566C2164039D239A___c : public ::System::Object
{
public:
	static ::Class_1_566C2164039D239A___c** StaticGet___9()
	{
		return (::Class_1_566C2164039D239A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_566C2164039D239A___c_TypeDefinitionIndex)->GetStaticField(0x5E260);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A___C__CTOR_OFFSET))(this);
	}

	::Class_1_566C2164039D239A* __cctor_b__43_0()
	{
		return ((::Class_1_566C2164039D239A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_566C2164039D239A___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
