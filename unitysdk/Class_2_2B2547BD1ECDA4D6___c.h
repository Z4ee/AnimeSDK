#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C01BA129C3E40259;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_2B2547BD1ECDA4D6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D00D80)
#define CLASS_2_2B2547BD1ECDA4D6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18D00DC0)
#define CLASS_2_2B2547BD1ECDA4D6___C__GETSORTEDCHIMERATEAM_B__1_0_OFFSET UNITYSDK_OFFSET(0x18D00DD0)
#define CLASS_2_2B2547BD1ECDA4D6___C___CTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x18D00E30)
#define CLASS_2_2B2547BD1ECDA4D6___C___CTOR_B__3_1_OFFSET UNITYSDK_OFFSET(0x18D00E60)

inline static constexpr unsigned int Class_2_2B2547BD1ECDA4D6___c_TypeDefinitionIndex = 38715;

class Class_2_2B2547BD1ECDA4D6___c : public ::System::Object
{
public:
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B2547BD1ECDA4D6___c_TypeDefinitionIndex)->GetStaticField(0x2AC10);
	}
	static ::System::Comparison_1<::Class_2_C01BA129C3E40259*>** StaticGet___9__1_0()
	{
		return (::System::Comparison_1<::Class_2_C01BA129C3E40259*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B2547BD1ECDA4D6___c_TypeDefinitionIndex)->GetStaticField(0x2AC18);
	}
	static ::System::Func_1<::Class_2_C01BA129C3E40259*>** StaticGet___9__3_1()
	{
		return (::System::Func_1<::Class_2_C01BA129C3E40259*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B2547BD1ECDA4D6___c_TypeDefinitionIndex)->GetStaticField(0x2AC20);
	}
	static ::Class_2_2B2547BD1ECDA4D6___c** StaticGet___9()
	{
		return (::Class_2_2B2547BD1ECDA4D6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B2547BD1ECDA4D6___c_TypeDefinitionIndex)->GetStaticField(0x2AC28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2B2547BD1ECDA4D6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B2547BD1ECDA4D6___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetSortedChimeraTeam_b__1_0(::Class_2_C01BA129C3E40259* a1, ::Class_2_C01BA129C3E40259* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_C01BA129C3E40259*, ::Class_2_C01BA129C3E40259*))((::PBYTE)hIl2Cpp + CLASS_2_2B2547BD1ECDA4D6___C__GETSORTEDCHIMERATEAM_B__1_0_OFFSET))(this, a1, a2);
	}

	::Entitas::IAERC* __ctor_b__3_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2B2547BD1ECDA4D6___C___CTOR_B__3_0_OFFSET))(this, a1);
	}

	::Class_2_C01BA129C3E40259* __ctor_b__3_1()
	{
		return ((::Class_2_C01BA129C3E40259*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B2547BD1ECDA4D6___C___CTOR_B__3_1_OFFSET))(this);
	}
};
