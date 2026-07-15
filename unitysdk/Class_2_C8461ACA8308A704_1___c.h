#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_7DA0BDDB694F154D;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_C8461ACA8308A704_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x180C7950)
#define CLASS_2_C8461ACA8308A704_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x180C7990)
#define CLASS_2_C8461ACA8308A704_1___C___CTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x180C79A0)
#define CLASS_2_C8461ACA8308A704_1___C___CTOR_B__5_1_OFFSET UNITYSDK_OFFSET(0x180C79D0)

inline static constexpr unsigned int Class_2_C8461ACA8308A704_1___c_TypeDefinitionIndex = 39964;

class Class_2_C8461ACA8308A704_1___c : public ::System::Object
{
public:
	static ::Class_2_C8461ACA8308A704_1___c** StaticGet___9()
	{
		return (::Class_2_C8461ACA8308A704_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C8461ACA8308A704_1___c_TypeDefinitionIndex)->GetStaticField(0x420B0);
	}
	static ::System::Func_1<::Class_2_7DA0BDDB694F154D*>** StaticGet___9__5_1()
	{
		return (::System::Func_1<::Class_2_7DA0BDDB694F154D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C8461ACA8308A704_1___c_TypeDefinitionIndex)->GetStaticField(0x420B8);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C8461ACA8308A704_1___c_TypeDefinitionIndex)->GetStaticField(0x420C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704_1___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__5_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704_1___C___CTOR_B__5_0_OFFSET))(this, a1);
	}

	::Class_2_7DA0BDDB694F154D* __ctor_b__5_1()
	{
		return ((::Class_2_7DA0BDDB694F154D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704_1___C___CTOR_B__5_1_OFFSET))(this);
	}
};
