#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_17EDF3520C9FC3DE;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_1152250B69783505___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4E01D0)
#define CLASS_2_1152250B69783505___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4E0210)
#define CLASS_2_1152250B69783505___C___CTOR_B__100_0_OFFSET UNITYSDK_OFFSET(0x1C4E0220)
#define CLASS_2_1152250B69783505___C___CTOR_B__100_1_OFFSET UNITYSDK_OFFSET(0x1C4E0250)

inline static constexpr unsigned int Class_2_1152250B69783505___c_TypeDefinitionIndex = 40638;

class Class_2_1152250B69783505___c : public ::System::Object
{
public:
	static ::Class_2_1152250B69783505___c** StaticGet___9()
	{
		return (::Class_2_1152250B69783505___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1152250B69783505___c_TypeDefinitionIndex)->GetStaticField(0x2CEA0);
	}
	static ::System::Func_1<::Class_2_17EDF3520C9FC3DE*>** StaticGet___9__100_1()
	{
		return (::System::Func_1<::Class_2_17EDF3520C9FC3DE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1152250B69783505___c_TypeDefinitionIndex)->GetStaticField(0x2CEA8);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__100_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1152250B69783505___c_TypeDefinitionIndex)->GetStaticField(0x2CEB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1152250B69783505___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1152250B69783505___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__100_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1152250B69783505___C___CTOR_B__100_0_OFFSET))(this, a1);
	}

	::Class_2_17EDF3520C9FC3DE* __ctor_b__100_1()
	{
		return ((::Class_2_17EDF3520C9FC3DE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1152250B69783505___C___CTOR_B__100_1_OFFSET))(this);
	}
};
