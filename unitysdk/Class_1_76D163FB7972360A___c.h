#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_76D163FB7972360A;

#define CLASS_1_76D163FB7972360A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B1A630)
#define CLASS_1_76D163FB7972360A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1A670)
#define CLASS_1_76D163FB7972360A___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x19B1A680)

inline static constexpr unsigned int Class_1_76D163FB7972360A___c_TypeDefinitionIndex = 28878;

class Class_1_76D163FB7972360A___c : public ::System::Object
{
public:
	static ::Class_1_76D163FB7972360A___c** StaticGet___9()
	{
		return (::Class_1_76D163FB7972360A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76D163FB7972360A___c_TypeDefinitionIndex)->GetStaticField(0x60510);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_76D163FB7972360A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D163FB7972360A___C__CTOR_OFFSET))(this);
	}

	::Class_1_76D163FB7972360A* __cctor_b__48_0()
	{
		return ((::Class_1_76D163FB7972360A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D163FB7972360A___C___CCTOR_B__48_0_OFFSET))(this);
	}
};
