#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_E450C4D97FC83888;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_0D3C4922E3883E2B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C407EB0)
#define CLASS_2_0D3C4922E3883E2B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C407EF0)
#define CLASS_2_0D3C4922E3883E2B___C___CTOR_B__27_0_OFFSET UNITYSDK_OFFSET(0x1C407F00)
#define CLASS_2_0D3C4922E3883E2B___C___CTOR_B__27_1_OFFSET UNITYSDK_OFFSET(0x1C407F30)

inline static constexpr unsigned int Class_2_0D3C4922E3883E2B___c_TypeDefinitionIndex = 40777;

class Class_2_0D3C4922E3883E2B___c : public ::System::Object
{
public:
	static ::System::Func_1<::Class_2_E450C4D97FC83888*>** StaticGet___9__27_1()
	{
		return (::System::Func_1<::Class_2_E450C4D97FC83888*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0D3C4922E3883E2B___c_TypeDefinitionIndex)->GetStaticField(0x54570);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__27_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0D3C4922E3883E2B___c_TypeDefinitionIndex)->GetStaticField(0x54578);
	}
	static ::Class_2_0D3C4922E3883E2B___c** StaticGet___9()
	{
		return (::Class_2_0D3C4922E3883E2B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0D3C4922E3883E2B___c_TypeDefinitionIndex)->GetStaticField(0x54580);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0D3C4922E3883E2B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D3C4922E3883E2B___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__27_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0D3C4922E3883E2B___C___CTOR_B__27_0_OFFSET))(this, a1);
	}

	::Class_2_E450C4D97FC83888* __ctor_b__27_1()
	{
		return ((::Class_2_E450C4D97FC83888*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D3C4922E3883E2B___C___CTOR_B__27_1_OFFSET))(this);
	}
};
