#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06CC04D388AFA502;

#define CLASS_1_06CC04D388AFA502___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x193C0410)
#define CLASS_1_06CC04D388AFA502___C__CTOR_OFFSET UNITYSDK_OFFSET(0x193C0450)
#define CLASS_1_06CC04D388AFA502___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x193C0460)

inline static constexpr unsigned int Class_1_06CC04D388AFA502___c_TypeDefinitionIndex = 24132;

class Class_1_06CC04D388AFA502___c : public ::System::Object
{
public:
	static ::Class_1_06CC04D388AFA502___c** StaticGet___9()
	{
		return (::Class_1_06CC04D388AFA502___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_06CC04D388AFA502___c_TypeDefinitionIndex)->GetStaticField(0x3D2C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_06CC04D388AFA502___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06CC04D388AFA502___C__CTOR_OFFSET))(this);
	}

	::Class_1_06CC04D388AFA502* __cctor_b__28_0()
	{
		return ((::Class_1_06CC04D388AFA502*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06CC04D388AFA502___C___CCTOR_B__28_0_OFFSET))(this);
	}
};
