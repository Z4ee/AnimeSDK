#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_230F5EDDB35DAEBA;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_D55679E3C796A7AF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF847D0)
#define CLASS_2_D55679E3C796A7AF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF84810)
#define CLASS_2_D55679E3C796A7AF___C___CTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x1BF84820)
#define CLASS_2_D55679E3C796A7AF___C___CTOR_B__73_1_OFFSET UNITYSDK_OFFSET(0x1BF84850)

inline static constexpr unsigned int Class_2_D55679E3C796A7AF___c_TypeDefinitionIndex = 40642;

class Class_2_D55679E3C796A7AF___c : public ::System::Object
{
public:
	static ::System::Func_1<::Class_2_230F5EDDB35DAEBA*>** StaticGet___9__73_1()
	{
		return (::System::Func_1<::Class_2_230F5EDDB35DAEBA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D55679E3C796A7AF___c_TypeDefinitionIndex)->GetStaticField(0x57B10);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__73_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D55679E3C796A7AF___c_TypeDefinitionIndex)->GetStaticField(0x57B18);
	}
	static ::Class_2_D55679E3C796A7AF___c** StaticGet___9()
	{
		return (::Class_2_D55679E3C796A7AF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D55679E3C796A7AF___c_TypeDefinitionIndex)->GetStaticField(0x57B20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D55679E3C796A7AF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D55679E3C796A7AF___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__73_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D55679E3C796A7AF___C___CTOR_B__73_0_OFFSET))(this, a1);
	}

	::Class_2_230F5EDDB35DAEBA* __ctor_b__73_1()
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D55679E3C796A7AF___C___CTOR_B__73_1_OFFSET))(this);
	}
};
