#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6D25D6E36F5AF8D2;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_A0DEC2DCD4D779B9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C941330)
#define CLASS_2_A0DEC2DCD4D779B9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C941370)
#define CLASS_2_A0DEC2DCD4D779B9___C___CTOR_B__27_0_OFFSET UNITYSDK_OFFSET(0x1C941380)
#define CLASS_2_A0DEC2DCD4D779B9___C___CTOR_B__27_1_OFFSET UNITYSDK_OFFSET(0x1C9413B0)

inline static constexpr unsigned int Class_2_A0DEC2DCD4D779B9___c_TypeDefinitionIndex = 42595;

class Class_2_A0DEC2DCD4D779B9___c : public ::System::Object
{
public:
	static ::Class_2_A0DEC2DCD4D779B9___c** StaticGet___9()
	{
		return (::Class_2_A0DEC2DCD4D779B9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A0DEC2DCD4D779B9___c_TypeDefinitionIndex)->GetStaticField(0x54B50);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__27_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A0DEC2DCD4D779B9___c_TypeDefinitionIndex)->GetStaticField(0x54B58);
	}
	static ::System::Func_1<::Class_2_6D25D6E36F5AF8D2*>** StaticGet___9__27_1()
	{
		return (::System::Func_1<::Class_2_6D25D6E36F5AF8D2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A0DEC2DCD4D779B9___c_TypeDefinitionIndex)->GetStaticField(0x54B60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A0DEC2DCD4D779B9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0DEC2DCD4D779B9___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__27_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A0DEC2DCD4D779B9___C___CTOR_B__27_0_OFFSET))(this, a1);
	}

	::Class_2_6D25D6E36F5AF8D2* __ctor_b__27_1()
	{
		return ((::Class_2_6D25D6E36F5AF8D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0DEC2DCD4D779B9___C___CTOR_B__27_1_OFFSET))(this);
	}
};
