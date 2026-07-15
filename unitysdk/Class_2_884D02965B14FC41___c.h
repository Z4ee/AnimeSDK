#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1C9DAFE8E76EE3E9;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_884D02965B14FC41___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B254D90)
#define CLASS_2_884D02965B14FC41___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B254DD0)
#define CLASS_2_884D02965B14FC41___C___CTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1B254DE0)
#define CLASS_2_884D02965B14FC41___C___CTOR_B__18_1_OFFSET UNITYSDK_OFFSET(0x1B254E10)

inline static constexpr unsigned int Class_2_884D02965B14FC41___c_TypeDefinitionIndex = 39922;

class Class_2_884D02965B14FC41___c : public ::System::Object
{
public:
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__18_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_884D02965B14FC41___c_TypeDefinitionIndex)->GetStaticField(0x3EC70);
	}
	static ::Class_2_884D02965B14FC41___c** StaticGet___9()
	{
		return (::Class_2_884D02965B14FC41___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_884D02965B14FC41___c_TypeDefinitionIndex)->GetStaticField(0x3EC78);
	}
	static ::System::Func_1<::Class_2_1C9DAFE8E76EE3E9*>** StaticGet___9__18_1()
	{
		return (::System::Func_1<::Class_2_1C9DAFE8E76EE3E9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_884D02965B14FC41___c_TypeDefinitionIndex)->GetStaticField(0x3EC80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_884D02965B14FC41___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_884D02965B14FC41___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__18_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_884D02965B14FC41___C___CTOR_B__18_0_OFFSET))(this, a1);
	}

	::Class_2_1C9DAFE8E76EE3E9* __ctor_b__18_1()
	{
		return ((::Class_2_1C9DAFE8E76EE3E9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_884D02965B14FC41___C___CTOR_B__18_1_OFFSET))(this);
	}
};
