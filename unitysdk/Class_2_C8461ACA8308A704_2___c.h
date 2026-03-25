#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6DF7001559D3575B;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_C8461ACA8308A704_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169F2C30)
#define CLASS_2_C8461ACA8308A704_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169F2C70)
#define CLASS_2_C8461ACA8308A704_2___C___CTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x169F2C80)
#define CLASS_2_C8461ACA8308A704_2___C___CTOR_B__5_1_OFFSET UNITYSDK_OFFSET(0x169F2CB0)

inline static constexpr unsigned int Class_2_C8461ACA8308A704_2___c_TypeDefinitionIndex = 32598;

class Class_2_C8461ACA8308A704_2___c : public ::System::Object
{
public:
	static ::System::Func_1<::Class_2_6DF7001559D3575B*>** StaticGet___9__5_1()
	{
		return (::System::Func_1<::Class_2_6DF7001559D3575B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C8461ACA8308A704_2___c_TypeDefinitionIndex)->GetStaticField(0x1A850);
	}
	static ::Class_2_C8461ACA8308A704_2___c** StaticGet___9()
	{
		return (::Class_2_C8461ACA8308A704_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C8461ACA8308A704_2___c_TypeDefinitionIndex)->GetStaticField(0x1A858);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C8461ACA8308A704_2___c_TypeDefinitionIndex)->GetStaticField(0x1A860);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704_2___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__5_0(::Entitas::IEntity* entity)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704_2___C___CTOR_B__5_0_OFFSET))(this, entity);
	}

	::Class_2_6DF7001559D3575B* __ctor_b__5_1()
	{
		return ((::Class_2_6DF7001559D3575B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704_2___C___CTOR_B__5_1_OFFSET))(this);
	}
};
