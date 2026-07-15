#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9BD68750D8B87DAA;

#define CLASS_1_9BD68750D8B87DAA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFC5000)
#define CLASS_1_9BD68750D8B87DAA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFC5040)
#define CLASS_1_9BD68750D8B87DAA___C___CCTOR_B__83_0_OFFSET UNITYSDK_OFFSET(0x1BFC5050)

inline static constexpr unsigned int Class_1_9BD68750D8B87DAA___c_TypeDefinitionIndex = 30502;

class Class_1_9BD68750D8B87DAA___c : public ::System::Object
{
public:
	static ::Class_1_9BD68750D8B87DAA___c** StaticGet___9()
	{
		return (::Class_1_9BD68750D8B87DAA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BD68750D8B87DAA___c_TypeDefinitionIndex)->GetStaticField(0x286A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BD68750D8B87DAA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BD68750D8B87DAA___C__CTOR_OFFSET))(this);
	}

	::Class_1_9BD68750D8B87DAA* __cctor_b__83_0()
	{
		return ((::Class_1_9BD68750D8B87DAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BD68750D8B87DAA___C___CCTOR_B__83_0_OFFSET))(this);
	}
};
