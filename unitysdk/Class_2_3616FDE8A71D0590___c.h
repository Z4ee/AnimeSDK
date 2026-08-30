#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_AEE59ED8DADEC1A1;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_3616FDE8A71D0590___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C03A470)
#define CLASS_2_3616FDE8A71D0590___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C03A4B0)
#define CLASS_2_3616FDE8A71D0590___C___CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0x1C03A4C0)
#define CLASS_2_3616FDE8A71D0590___C___CTOR_B__1_1_OFFSET UNITYSDK_OFFSET(0x1C03A4F0)

inline static constexpr unsigned int Class_2_3616FDE8A71D0590___c_TypeDefinitionIndex = 36339;

class Class_2_3616FDE8A71D0590___c : public ::System::Object
{
public:
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3616FDE8A71D0590___c_TypeDefinitionIndex)->GetStaticField(0x63FE0);
	}
	static ::System::Func_1<::Class_2_AEE59ED8DADEC1A1*>** StaticGet___9__1_1()
	{
		return (::System::Func_1<::Class_2_AEE59ED8DADEC1A1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3616FDE8A71D0590___c_TypeDefinitionIndex)->GetStaticField(0x63FE8);
	}
	static ::Class_2_3616FDE8A71D0590___c** StaticGet___9()
	{
		return (::Class_2_3616FDE8A71D0590___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3616FDE8A71D0590___c_TypeDefinitionIndex)->GetStaticField(0x63FF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__1_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590___C___CTOR_B__1_0_OFFSET))(this, a1);
	}

	::Class_2_AEE59ED8DADEC1A1* __ctor_b__1_1()
	{
		return ((::Class_2_AEE59ED8DADEC1A1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590___C___CTOR_B__1_1_OFFSET))(this);
	}
};
