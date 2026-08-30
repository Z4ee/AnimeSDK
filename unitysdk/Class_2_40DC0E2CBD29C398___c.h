#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_4706D3AD6019CD01;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_40DC0E2CBD29C398___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4EDDB0)
#define CLASS_2_40DC0E2CBD29C398___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4EDDF0)
#define CLASS_2_40DC0E2CBD29C398___C___CTOR_B__476_0_OFFSET UNITYSDK_OFFSET(0x1C4EDE00)
#define CLASS_2_40DC0E2CBD29C398___C___CTOR_B__476_1_OFFSET UNITYSDK_OFFSET(0x1C4EDE30)

inline static constexpr unsigned int Class_2_40DC0E2CBD29C398___c_TypeDefinitionIndex = 40783;

class Class_2_40DC0E2CBD29C398___c : public ::System::Object
{
public:
	static ::Class_2_40DC0E2CBD29C398___c** StaticGet___9()
	{
		return (::Class_2_40DC0E2CBD29C398___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_40DC0E2CBD29C398___c_TypeDefinitionIndex)->GetStaticField(0x2F950);
	}
	static ::System::Func_1<::Class_2_4706D3AD6019CD01*>** StaticGet___9__476_1()
	{
		return (::System::Func_1<::Class_2_4706D3AD6019CD01*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_40DC0E2CBD29C398___c_TypeDefinitionIndex)->GetStaticField(0x2F958);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__476_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_40DC0E2CBD29C398___c_TypeDefinitionIndex)->GetStaticField(0x2F960);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_40DC0E2CBD29C398___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40DC0E2CBD29C398___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__476_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_40DC0E2CBD29C398___C___CTOR_B__476_0_OFFSET))(this, a1);
	}

	::Class_2_4706D3AD6019CD01* __ctor_b__476_1()
	{
		return ((::Class_2_4706D3AD6019CD01*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40DC0E2CBD29C398___C___CTOR_B__476_1_OFFSET))(this);
	}
};
