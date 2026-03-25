#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_15E317187C4E8254;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_C8461ACA8308A704_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x167E6A90)
#define CLASS_2_C8461ACA8308A704_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x167E6AD0)
#define CLASS_2_C8461ACA8308A704_1___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x167E6AE0)
#define CLASS_2_C8461ACA8308A704_1___C___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x167E6B10)

inline static constexpr unsigned int Class_2_C8461ACA8308A704_1___c_TypeDefinitionIndex = 32391;

class Class_2_C8461ACA8308A704_1___c : public ::System::Object
{
public:
	static ::System::Func_1<::Class_2_15E317187C4E8254*>** StaticGet___9__0_1()
	{
		return (::System::Func_1<::Class_2_15E317187C4E8254*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C8461ACA8308A704_1___c_TypeDefinitionIndex)->GetStaticField(0x20770);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C8461ACA8308A704_1___c_TypeDefinitionIndex)->GetStaticField(0x20778);
	}
	static ::Class_2_C8461ACA8308A704_1___c** StaticGet___9()
	{
		return (::Class_2_C8461ACA8308A704_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C8461ACA8308A704_1___c_TypeDefinitionIndex)->GetStaticField(0x20780);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704_1___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__0_0(::Entitas::IEntity* entity)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704_1___C___CTOR_B__0_0_OFFSET))(this, entity);
	}

	::Class_2_15E317187C4E8254* __ctor_b__0_1()
	{
		return ((::Class_2_15E317187C4E8254*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704_1___C___CTOR_B__0_1_OFFSET))(this);
	}
};
