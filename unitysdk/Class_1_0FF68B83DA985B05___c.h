#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0FF68B83DA985B05;

#define CLASS_1_0FF68B83DA985B05___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7B7D90)
#define CLASS_1_0FF68B83DA985B05___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7B7DD0)
#define CLASS_1_0FF68B83DA985B05___C___CCTOR_B__84_0_OFFSET UNITYSDK_OFFSET(0x1A7B7DE0)

inline static constexpr unsigned int Class_1_0FF68B83DA985B05___c_TypeDefinitionIndex = 28256;

class Class_1_0FF68B83DA985B05___c : public ::System::Object
{
public:
	static ::Class_1_0FF68B83DA985B05___c** StaticGet___9()
	{
		return (::Class_1_0FF68B83DA985B05___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0FF68B83DA985B05___c_TypeDefinitionIndex)->GetStaticField(0x4A690);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0FF68B83DA985B05___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FF68B83DA985B05___C__CTOR_OFFSET))(this);
	}

	::Class_1_0FF68B83DA985B05* __cctor_b__84_0()
	{
		return ((::Class_1_0FF68B83DA985B05*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FF68B83DA985B05___C___CCTOR_B__84_0_OFFSET))(this);
	}
};
