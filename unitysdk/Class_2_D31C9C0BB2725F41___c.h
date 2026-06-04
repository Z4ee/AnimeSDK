#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B97D78A79857CBF3;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_D31C9C0BB2725F41___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C57D70)
#define CLASS_2_D31C9C0BB2725F41___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18C57DB0)
#define CLASS_2_D31C9C0BB2725F41___C___CTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x18C57DC0)
#define CLASS_2_D31C9C0BB2725F41___C___CTOR_B__9_1_OFFSET UNITYSDK_OFFSET(0x18C57DF0)

inline static constexpr unsigned int Class_2_D31C9C0BB2725F41___c_TypeDefinitionIndex = 39161;

class Class_2_D31C9C0BB2725F41___c : public ::System::Object
{
public:
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__9_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D31C9C0BB2725F41___c_TypeDefinitionIndex)->GetStaticField(0x47E00);
	}
	static ::Class_2_D31C9C0BB2725F41___c** StaticGet___9()
	{
		return (::Class_2_D31C9C0BB2725F41___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D31C9C0BB2725F41___c_TypeDefinitionIndex)->GetStaticField(0x47E08);
	}
	static ::System::Func_1<::Class_2_B97D78A79857CBF3*>** StaticGet___9__9_1()
	{
		return (::System::Func_1<::Class_2_B97D78A79857CBF3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D31C9C0BB2725F41___c_TypeDefinitionIndex)->GetStaticField(0x47E10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D31C9C0BB2725F41___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D31C9C0BB2725F41___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__9_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D31C9C0BB2725F41___C___CTOR_B__9_0_OFFSET))(this, a1);
	}

	::Class_2_B97D78A79857CBF3* __ctor_b__9_1()
	{
		return ((::Class_2_B97D78A79857CBF3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D31C9C0BB2725F41___C___CTOR_B__9_1_OFFSET))(this);
	}
};
