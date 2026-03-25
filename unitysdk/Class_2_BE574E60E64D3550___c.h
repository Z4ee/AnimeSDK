#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_93A4E671E48E5435;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_BE574E60E64D3550___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169E22A0)
#define CLASS_2_BE574E60E64D3550___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169E22E0)
#define CLASS_2_BE574E60E64D3550___C___CTOR_B__14_0_OFFSET UNITYSDK_OFFSET(0x169E22F0)
#define CLASS_2_BE574E60E64D3550___C___CTOR_B__14_1_OFFSET UNITYSDK_OFFSET(0x169E2320)

inline static constexpr unsigned int Class_2_BE574E60E64D3550___c_TypeDefinitionIndex = 32532;

class Class_2_BE574E60E64D3550___c : public ::System::Object
{
public:
	static ::System::Func_1<::Class_2_93A4E671E48E5435*>** StaticGet___9__14_1()
	{
		return (::System::Func_1<::Class_2_93A4E671E48E5435*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BE574E60E64D3550___c_TypeDefinitionIndex)->GetStaticField(0x1A170);
	}
	static ::Class_2_BE574E60E64D3550___c** StaticGet___9()
	{
		return (::Class_2_BE574E60E64D3550___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BE574E60E64D3550___c_TypeDefinitionIndex)->GetStaticField(0x1A178);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BE574E60E64D3550___c_TypeDefinitionIndex)->GetStaticField(0x1A180);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BE574E60E64D3550___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE574E60E64D3550___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__14_0(::Entitas::IEntity* entity)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BE574E60E64D3550___C___CTOR_B__14_0_OFFSET))(this, entity);
	}

	::Class_2_93A4E671E48E5435* __ctor_b__14_1()
	{
		return ((::Class_2_93A4E671E48E5435*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE574E60E64D3550___C___CTOR_B__14_1_OFFSET))(this);
	}
};
