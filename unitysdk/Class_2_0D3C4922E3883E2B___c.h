#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6660DE6E19DC27BF;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_0D3C4922E3883E2B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A1D760)
#define CLASS_2_0D3C4922E3883E2B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16A1D7A0)
#define CLASS_2_0D3C4922E3883E2B___C___CTOR_B__27_0_OFFSET UNITYSDK_OFFSET(0x16A1D7B0)
#define CLASS_2_0D3C4922E3883E2B___C___CTOR_B__27_1_OFFSET UNITYSDK_OFFSET(0x16A1D7E0)

inline static constexpr unsigned int Class_2_0D3C4922E3883E2B___c_TypeDefinitionIndex = 32538;

class Class_2_0D3C4922E3883E2B___c : public ::System::Object
{
public:
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__27_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0D3C4922E3883E2B___c_TypeDefinitionIndex)->GetStaticField(0x1E070);
	}
	static ::Class_2_0D3C4922E3883E2B___c** StaticGet___9()
	{
		return (::Class_2_0D3C4922E3883E2B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0D3C4922E3883E2B___c_TypeDefinitionIndex)->GetStaticField(0x1E078);
	}
	static ::System::Func_1<::Class_2_6660DE6E19DC27BF*>** StaticGet___9__27_1()
	{
		return (::System::Func_1<::Class_2_6660DE6E19DC27BF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0D3C4922E3883E2B___c_TypeDefinitionIndex)->GetStaticField(0x1E080);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0D3C4922E3883E2B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D3C4922E3883E2B___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__27_0(::Entitas::IEntity* entity)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0D3C4922E3883E2B___C___CTOR_B__27_0_OFFSET))(this, entity);
	}

	::Class_2_6660DE6E19DC27BF* __ctor_b__27_1()
	{
		return ((::Class_2_6660DE6E19DC27BF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D3C4922E3883E2B___C___CTOR_B__27_1_OFFSET))(this);
	}
};
