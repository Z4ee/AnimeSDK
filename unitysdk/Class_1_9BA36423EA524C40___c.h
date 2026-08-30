#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9BA36423EA524C40;

#define CLASS_1_9BA36423EA524C40___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC080F0)
#define CLASS_1_9BA36423EA524C40___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC08130)
#define CLASS_1_9BA36423EA524C40___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EC08140)

inline static constexpr unsigned int Class_1_9BA36423EA524C40___c_TypeDefinitionIndex = 25350;

class Class_1_9BA36423EA524C40___c : public ::System::Object
{
public:
	static ::Class_1_9BA36423EA524C40___c** StaticGet___9()
	{
		return (::Class_1_9BA36423EA524C40___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BA36423EA524C40___c_TypeDefinitionIndex)->GetStaticField(0x35E60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40___C__CTOR_OFFSET))(this);
	}

	::Class_1_9BA36423EA524C40* __cctor_b__23_0()
	{
		return ((::Class_1_9BA36423EA524C40*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40___C___CCTOR_B__23_0_OFFSET))(this);
	}
};
