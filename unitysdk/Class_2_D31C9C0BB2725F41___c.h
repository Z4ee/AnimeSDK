#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A51EA64DAB51EC60;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_D31C9C0BB2725F41___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16823340)
#define CLASS_2_D31C9C0BB2725F41___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16823380)
#define CLASS_2_D31C9C0BB2725F41___C___CTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x16823390)
#define CLASS_2_D31C9C0BB2725F41___C___CTOR_B__9_1_OFFSET UNITYSDK_OFFSET(0x168233C0)

inline static constexpr unsigned int Class_2_D31C9C0BB2725F41___c_TypeDefinitionIndex = 32604;

class Class_2_D31C9C0BB2725F41___c : public ::System::Object
{
public:
	static ::Class_2_D31C9C0BB2725F41___c** StaticGet___9()
	{
		return (::Class_2_D31C9C0BB2725F41___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D31C9C0BB2725F41___c_TypeDefinitionIndex)->GetStaticField(0x22D80);
	}
	static ::System::Func_1<::Class_2_A51EA64DAB51EC60*>** StaticGet___9__9_1()
	{
		return (::System::Func_1<::Class_2_A51EA64DAB51EC60*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D31C9C0BB2725F41___c_TypeDefinitionIndex)->GetStaticField(0x22D88);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__9_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D31C9C0BB2725F41___c_TypeDefinitionIndex)->GetStaticField(0x22D90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D31C9C0BB2725F41___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D31C9C0BB2725F41___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__9_0(::Entitas::IEntity* entity)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D31C9C0BB2725F41___C___CTOR_B__9_0_OFFSET))(this, entity);
	}

	::Class_2_A51EA64DAB51EC60* __ctor_b__9_1()
	{
		return ((::Class_2_A51EA64DAB51EC60*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D31C9C0BB2725F41___C___CTOR_B__9_1_OFFSET))(this);
	}
};
