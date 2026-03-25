#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9850514C0F89B91A;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_C8461ACA8308A704___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16947930)
#define CLASS_2_C8461ACA8308A704___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16947970)
#define CLASS_2_C8461ACA8308A704___C___CTOR_B__24_0_OFFSET UNITYSDK_OFFSET(0x16947980)
#define CLASS_2_C8461ACA8308A704___C___CTOR_B__24_1_OFFSET UNITYSDK_OFFSET(0x169479B0)

inline static constexpr unsigned int Class_2_C8461ACA8308A704___c_TypeDefinitionIndex = 32528;

class Class_2_C8461ACA8308A704___c : public ::System::Object
{
public:
	static ::System::Func_1<::Class_2_9850514C0F89B91A*>** StaticGet___9__24_1()
	{
		return (::System::Func_1<::Class_2_9850514C0F89B91A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C8461ACA8308A704___c_TypeDefinitionIndex)->GetStaticField(0x16580);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__24_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C8461ACA8308A704___c_TypeDefinitionIndex)->GetStaticField(0x16588);
	}
	static ::Class_2_C8461ACA8308A704___c** StaticGet___9()
	{
		return (::Class_2_C8461ACA8308A704___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C8461ACA8308A704___c_TypeDefinitionIndex)->GetStaticField(0x16590);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__24_0(::Entitas::IEntity* entity)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704___C___CTOR_B__24_0_OFFSET))(this, entity);
	}

	::Class_2_9850514C0F89B91A* __ctor_b__24_1()
	{
		return ((::Class_2_9850514C0F89B91A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704___C___CTOR_B__24_1_OFFSET))(this);
	}
};
