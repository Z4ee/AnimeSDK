#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_FD51057495DB654F;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_C8461ACA8308A704___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6151D0)
#define CLASS_2_C8461ACA8308A704___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A615210)
#define CLASS_2_C8461ACA8308A704___C___CTOR_B__35_0_OFFSET UNITYSDK_OFFSET(0x1A615220)
#define CLASS_2_C8461ACA8308A704___C___CTOR_B__35_1_OFFSET UNITYSDK_OFFSET(0x1A615250)

inline static constexpr unsigned int Class_2_C8461ACA8308A704___c_TypeDefinitionIndex = 40636;

class Class_2_C8461ACA8308A704___c : public ::System::Object
{
public:
	static ::System::Func_1<::Class_2_FD51057495DB654F*>** StaticGet___9__35_1()
	{
		return (::System::Func_1<::Class_2_FD51057495DB654F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C8461ACA8308A704___c_TypeDefinitionIndex)->GetStaticField(0x538C0);
	}
	static ::Class_2_C8461ACA8308A704___c** StaticGet___9()
	{
		return (::Class_2_C8461ACA8308A704___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C8461ACA8308A704___c_TypeDefinitionIndex)->GetStaticField(0x538C8);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__35_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C8461ACA8308A704___c_TypeDefinitionIndex)->GetStaticField(0x538D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__35_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704___C___CTOR_B__35_0_OFFSET))(this, a1);
	}

	::Class_2_FD51057495DB654F* __ctor_b__35_1()
	{
		return ((::Class_2_FD51057495DB654F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704___C___CTOR_B__35_1_OFFSET))(this);
	}
};
