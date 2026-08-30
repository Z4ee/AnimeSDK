#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5436AF4270279182;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_360C00D6092F4D31___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C75F9B0)
#define CLASS_2_360C00D6092F4D31___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C75F9F0)
#define CLASS_2_360C00D6092F4D31___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1C75FA00)
#define CLASS_2_360C00D6092F4D31___C___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x1C75FA30)

inline static constexpr unsigned int Class_2_360C00D6092F4D31___c_TypeDefinitionIndex = 40541;

class Class_2_360C00D6092F4D31___c : public ::System::Object
{
public:
	static ::System::Func_1<::Class_2_5436AF4270279182*>** StaticGet___9__0_1()
	{
		return (::System::Func_1<::Class_2_5436AF4270279182*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_360C00D6092F4D31___c_TypeDefinitionIndex)->GetStaticField(0x3E2F0);
	}
	static ::Class_2_360C00D6092F4D31___c** StaticGet___9()
	{
		return (::Class_2_360C00D6092F4D31___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_360C00D6092F4D31___c_TypeDefinitionIndex)->GetStaticField(0x3E2F8);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_360C00D6092F4D31___c_TypeDefinitionIndex)->GetStaticField(0x3E300);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_360C00D6092F4D31___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_360C00D6092F4D31___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__0_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_360C00D6092F4D31___C___CTOR_B__0_0_OFFSET))(this, a1);
	}

	::Class_2_5436AF4270279182* __ctor_b__0_1()
	{
		return ((::Class_2_5436AF4270279182*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_360C00D6092F4D31___C___CTOR_B__0_1_OFFSET))(this);
	}
};
