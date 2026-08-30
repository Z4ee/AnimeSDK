#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_68CB91321C3E76A7;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_C3AB8E04EBC33FFB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C637D80)
#define CLASS_2_C3AB8E04EBC33FFB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C637DC0)
#define CLASS_2_C3AB8E04EBC33FFB___C___CTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1C637DD0)
#define CLASS_2_C3AB8E04EBC33FFB___C___CTOR_B__43_1_OFFSET UNITYSDK_OFFSET(0x1C637E00)

inline static constexpr unsigned int Class_2_C3AB8E04EBC33FFB___c_TypeDefinitionIndex = 40640;

class Class_2_C3AB8E04EBC33FFB___c : public ::System::Object
{
public:
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__43_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C3AB8E04EBC33FFB___c_TypeDefinitionIndex)->GetStaticField(0x5A070);
	}
	static ::Class_2_C3AB8E04EBC33FFB___c** StaticGet___9()
	{
		return (::Class_2_C3AB8E04EBC33FFB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C3AB8E04EBC33FFB___c_TypeDefinitionIndex)->GetStaticField(0x5A078);
	}
	static ::System::Func_1<::Class_2_68CB91321C3E76A7*>** StaticGet___9__43_1()
	{
		return (::System::Func_1<::Class_2_68CB91321C3E76A7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C3AB8E04EBC33FFB___c_TypeDefinitionIndex)->GetStaticField(0x5A080);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C3AB8E04EBC33FFB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AB8E04EBC33FFB___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__43_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C3AB8E04EBC33FFB___C___CTOR_B__43_0_OFFSET))(this, a1);
	}

	::Class_2_68CB91321C3E76A7* __ctor_b__43_1()
	{
		return ((::Class_2_68CB91321C3E76A7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AB8E04EBC33FFB___C___CTOR_B__43_1_OFFSET))(this);
	}
};
