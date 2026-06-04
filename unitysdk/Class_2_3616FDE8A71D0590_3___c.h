#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1D7B82CFD3ED1219_1;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_3616FDE8A71D0590_3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A18200)
#define CLASS_2_3616FDE8A71D0590_3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18A18240)
#define CLASS_2_3616FDE8A71D0590_3___C___CTOR_B__6_0_OFFSET UNITYSDK_OFFSET(0x18A18250)
#define CLASS_2_3616FDE8A71D0590_3___C___CTOR_B__6_1_OFFSET UNITYSDK_OFFSET(0x18A18280)

inline static constexpr unsigned int Class_2_3616FDE8A71D0590_3___c_TypeDefinitionIndex = 34808;

class Class_2_3616FDE8A71D0590_3___c : public ::System::Object
{
public:
	static ::System::Func_1<::Class_2_1D7B82CFD3ED1219_1*>** StaticGet___9__6_1()
	{
		return (::System::Func_1<::Class_2_1D7B82CFD3ED1219_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3616FDE8A71D0590_3___c_TypeDefinitionIndex)->GetStaticField(0x551F0);
	}
	static ::Class_2_3616FDE8A71D0590_3___c** StaticGet___9()
	{
		return (::Class_2_3616FDE8A71D0590_3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3616FDE8A71D0590_3___c_TypeDefinitionIndex)->GetStaticField(0x551F8);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3616FDE8A71D0590_3___c_TypeDefinitionIndex)->GetStaticField(0x55200);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_3___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__6_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_3___C___CTOR_B__6_0_OFFSET))(this, a1);
	}

	::Class_2_1D7B82CFD3ED1219_1* __ctor_b__6_1()
	{
		return ((::Class_2_1D7B82CFD3ED1219_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_3___C___CTOR_B__6_1_OFFSET))(this);
	}
};
