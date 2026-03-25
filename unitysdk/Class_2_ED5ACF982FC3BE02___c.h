#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A41F1ABCEA98EF1E;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_ED5ACF982FC3BE02___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x167AA680)
#define CLASS_2_ED5ACF982FC3BE02___C__CTOR_OFFSET UNITYSDK_OFFSET(0x167AA6C0)
#define CLASS_2_ED5ACF982FC3BE02___C___CTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x167AA6D0)
#define CLASS_2_ED5ACF982FC3BE02___C___CTOR_B__9_1_OFFSET UNITYSDK_OFFSET(0x167AA700)

inline static constexpr unsigned int Class_2_ED5ACF982FC3BE02___c_TypeDefinitionIndex = 32580;

class Class_2_ED5ACF982FC3BE02___c : public ::System::Object
{
public:
	static ::System::Func_1<::Class_2_A41F1ABCEA98EF1E*>** StaticGet___9__9_1()
	{
		return (::System::Func_1<::Class_2_A41F1ABCEA98EF1E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ED5ACF982FC3BE02___c_TypeDefinitionIndex)->GetStaticField(0xE2B0);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__9_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ED5ACF982FC3BE02___c_TypeDefinitionIndex)->GetStaticField(0xE2B8);
	}
	static ::Class_2_ED5ACF982FC3BE02___c** StaticGet___9()
	{
		return (::Class_2_ED5ACF982FC3BE02___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ED5ACF982FC3BE02___c_TypeDefinitionIndex)->GetStaticField(0xE2C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_ED5ACF982FC3BE02___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5ACF982FC3BE02___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__9_0(::Entitas::IEntity* entity)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_ED5ACF982FC3BE02___C___CTOR_B__9_0_OFFSET))(this, entity);
	}

	::Class_2_A41F1ABCEA98EF1E* __ctor_b__9_1()
	{
		return ((::Class_2_A41F1ABCEA98EF1E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5ACF982FC3BE02___C___CTOR_B__9_1_OFFSET))(this);
	}
};
