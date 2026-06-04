#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1D7B82CFD3ED1219;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_3616FDE8A71D0590___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AFBE80)
#define CLASS_2_3616FDE8A71D0590___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18AFBEC0)
#define CLASS_2_3616FDE8A71D0590___C___CTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x18AFBED0)
#define CLASS_2_3616FDE8A71D0590___C___CTOR_B__3_1_OFFSET UNITYSDK_OFFSET(0x18AFBF00)

inline static constexpr unsigned int Class_2_3616FDE8A71D0590___c_TypeDefinitionIndex = 34812;

class Class_2_3616FDE8A71D0590___c : public ::System::Object
{
public:
	static ::System::Func_1<::Class_2_1D7B82CFD3ED1219*>** StaticGet___9__3_1()
	{
		return (::System::Func_1<::Class_2_1D7B82CFD3ED1219*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3616FDE8A71D0590___c_TypeDefinitionIndex)->GetStaticField(0x5BB80);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3616FDE8A71D0590___c_TypeDefinitionIndex)->GetStaticField(0x5BB88);
	}
	static ::Class_2_3616FDE8A71D0590___c** StaticGet___9()
	{
		return (::Class_2_3616FDE8A71D0590___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3616FDE8A71D0590___c_TypeDefinitionIndex)->GetStaticField(0x5BB90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__3_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590___C___CTOR_B__3_0_OFFSET))(this, a1);
	}

	::Class_2_1D7B82CFD3ED1219* __ctor_b__3_1()
	{
		return ((::Class_2_1D7B82CFD3ED1219*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590___C___CTOR_B__3_1_OFFSET))(this);
	}
};
