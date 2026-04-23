#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_921296CE04546AF9;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_1152250B69783505___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E31140)
#define CLASS_2_1152250B69783505___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E31180)
#define CLASS_2_1152250B69783505___C___CTOR_B__100_0_OFFSET UNITYSDK_OFFSET(0x17E31190)
#define CLASS_2_1152250B69783505___C___CTOR_B__100_1_OFFSET UNITYSDK_OFFSET(0x17E311C0)

inline static constexpr unsigned int Class_2_1152250B69783505___c_TypeDefinitionIndex = 38204;

class Class_2_1152250B69783505___c : public ::System::Object
{
public:
	static ::Class_2_1152250B69783505___c** StaticGet___9()
	{
		return (::Class_2_1152250B69783505___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1152250B69783505___c_TypeDefinitionIndex)->GetStaticField(0x13B40);
	}
	static ::System::Func_1<::Class_2_921296CE04546AF9*>** StaticGet___9__100_1()
	{
		return (::System::Func_1<::Class_2_921296CE04546AF9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1152250B69783505___c_TypeDefinitionIndex)->GetStaticField(0x13B48);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__100_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1152250B69783505___c_TypeDefinitionIndex)->GetStaticField(0x13B50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1152250B69783505___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1152250B69783505___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__100_0(::Entitas::IEntity* entity)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1152250B69783505___C___CTOR_B__100_0_OFFSET))(this, entity);
	}

	::Class_2_921296CE04546AF9* __ctor_b__100_1()
	{
		return ((::Class_2_921296CE04546AF9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1152250B69783505___C___CTOR_B__100_1_OFFSET))(this);
	}
};
