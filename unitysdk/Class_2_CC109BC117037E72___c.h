#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_E1DC3D0DDD796244;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_CC109BC117037E72___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x167EBD70)
#define CLASS_2_CC109BC117037E72___C__CTOR_OFFSET UNITYSDK_OFFSET(0x167EBDB0)
#define CLASS_2_CC109BC117037E72___C___CTOR_B__60_0_OFFSET UNITYSDK_OFFSET(0x167EBDC0)
#define CLASS_2_CC109BC117037E72___C___CTOR_B__60_1_OFFSET UNITYSDK_OFFSET(0x167EBDF0)

inline static constexpr unsigned int Class_2_CC109BC117037E72___c_TypeDefinitionIndex = 32574;

class Class_2_CC109BC117037E72___c : public ::System::Object
{
public:
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__60_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CC109BC117037E72___c_TypeDefinitionIndex)->GetStaticField(0x20FD0);
	}
	static ::Class_2_CC109BC117037E72___c** StaticGet___9()
	{
		return (::Class_2_CC109BC117037E72___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CC109BC117037E72___c_TypeDefinitionIndex)->GetStaticField(0x20FD8);
	}
	static ::System::Func_1<::Class_2_E1DC3D0DDD796244*>** StaticGet___9__60_1()
	{
		return (::System::Func_1<::Class_2_E1DC3D0DDD796244*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CC109BC117037E72___c_TypeDefinitionIndex)->GetStaticField(0x20FE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__60_0(::Entitas::IEntity* entity)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72___C___CTOR_B__60_0_OFFSET))(this, entity);
	}

	::Class_2_E1DC3D0DDD796244* __ctor_b__60_1()
	{
		return ((::Class_2_E1DC3D0DDD796244*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72___C___CTOR_B__60_1_OFFSET))(this);
	}
};
