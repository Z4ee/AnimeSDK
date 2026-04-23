#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_7AF1D57CA4301272;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_8CE5A0FC3E91D7F4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18037060)
#define CLASS_2_8CE5A0FC3E91D7F4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x180370A0)
#define CLASS_2_8CE5A0FC3E91D7F4___C__GETSORTEDCHIMERATEAM_B__1_0_OFFSET UNITYSDK_OFFSET(0x180370B0)
#define CLASS_2_8CE5A0FC3E91D7F4___C___CTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x18037110)
#define CLASS_2_8CE5A0FC3E91D7F4___C___CTOR_B__3_1_OFFSET UNITYSDK_OFFSET(0x18037140)

inline static constexpr unsigned int Class_2_8CE5A0FC3E91D7F4___c_TypeDefinitionIndex = 37978;

class Class_2_8CE5A0FC3E91D7F4___c : public ::System::Object
{
public:
	static ::Class_2_8CE5A0FC3E91D7F4___c** StaticGet___9()
	{
		return (::Class_2_8CE5A0FC3E91D7F4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8CE5A0FC3E91D7F4___c_TypeDefinitionIndex)->GetStaticField(0x254A0);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8CE5A0FC3E91D7F4___c_TypeDefinitionIndex)->GetStaticField(0x254A8);
	}
	static ::System::Func_1<::Class_2_7AF1D57CA4301272*>** StaticGet___9__3_1()
	{
		return (::System::Func_1<::Class_2_7AF1D57CA4301272*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8CE5A0FC3E91D7F4___c_TypeDefinitionIndex)->GetStaticField(0x254B0);
	}
	static ::System::Comparison_1<::Class_2_7AF1D57CA4301272*>** StaticGet___9__1_0()
	{
		return (::System::Comparison_1<::Class_2_7AF1D57CA4301272*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8CE5A0FC3E91D7F4___c_TypeDefinitionIndex)->GetStaticField(0x254B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8CE5A0FC3E91D7F4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CE5A0FC3E91D7F4___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetSortedChimeraTeam_b__1_0(::Class_2_7AF1D57CA4301272* a, ::Class_2_7AF1D57CA4301272* b)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_7AF1D57CA4301272*, ::Class_2_7AF1D57CA4301272*))((::PBYTE)hIl2Cpp + CLASS_2_8CE5A0FC3E91D7F4___C__GETSORTEDCHIMERATEAM_B__1_0_OFFSET))(this, a, b);
	}

	::Entitas::IAERC* __ctor_b__3_0(::Entitas::IEntity* entity)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8CE5A0FC3E91D7F4___C___CTOR_B__3_0_OFFSET))(this, entity);
	}

	::Class_2_7AF1D57CA4301272* __ctor_b__3_1()
	{
		return ((::Class_2_7AF1D57CA4301272*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CE5A0FC3E91D7F4___C___CTOR_B__3_1_OFFSET))(this);
	}
};
