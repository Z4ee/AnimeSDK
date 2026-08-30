#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C097D1ED3AEF29E9;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_3616FDE8A71D0590_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197699A0)
#define CLASS_2_3616FDE8A71D0590_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x197699E0)
#define CLASS_2_3616FDE8A71D0590_2___C___CTOR_B__6_0_OFFSET UNITYSDK_OFFSET(0x197699F0)
#define CLASS_2_3616FDE8A71D0590_2___C___CTOR_B__6_1_OFFSET UNITYSDK_OFFSET(0x19769A20)

inline static constexpr unsigned int Class_2_3616FDE8A71D0590_2___c_TypeDefinitionIndex = 36341;

class Class_2_3616FDE8A71D0590_2___c : public ::System::Object
{
public:
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3616FDE8A71D0590_2___c_TypeDefinitionIndex)->GetStaticField(0xBF60);
	}
	static ::System::Func_1<::Class_2_C097D1ED3AEF29E9*>** StaticGet___9__6_1()
	{
		return (::System::Func_1<::Class_2_C097D1ED3AEF29E9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3616FDE8A71D0590_2___c_TypeDefinitionIndex)->GetStaticField(0xBF68);
	}
	static ::Class_2_3616FDE8A71D0590_2___c** StaticGet___9()
	{
		return (::Class_2_3616FDE8A71D0590_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3616FDE8A71D0590_2___c_TypeDefinitionIndex)->GetStaticField(0xBF70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_2___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__6_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_2___C___CTOR_B__6_0_OFFSET))(this, a1);
	}

	::Class_2_C097D1ED3AEF29E9* __ctor_b__6_1()
	{
		return ((::Class_2_C097D1ED3AEF29E9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_2___C___CTOR_B__6_1_OFFSET))(this);
	}
};
