#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EA3716A61EF929AB;

#define CLASS_1_EA3716A61EF929AB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9ED7F0)
#define CLASS_1_EA3716A61EF929AB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9ED830)
#define CLASS_1_EA3716A61EF929AB___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1D9ED840)

inline static constexpr unsigned int Class_1_EA3716A61EF929AB___c_TypeDefinitionIndex = 28396;

class Class_1_EA3716A61EF929AB___c : public ::System::Object
{
public:
	static ::Class_1_EA3716A61EF929AB___c** StaticGet___9()
	{
		return (::Class_1_EA3716A61EF929AB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA3716A61EF929AB___c_TypeDefinitionIndex)->GetStaticField(0x86A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA3716A61EF929AB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA3716A61EF929AB___C__CTOR_OFFSET))(this);
	}

	::Class_1_EA3716A61EF929AB* __cctor_b__58_0()
	{
		return ((::Class_1_EA3716A61EF929AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA3716A61EF929AB___C___CCTOR_B__58_0_OFFSET))(this);
	}
};
