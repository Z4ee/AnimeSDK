#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_21AD365C113DC484;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_3616FDE8A71D0590_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A19850)
#define CLASS_2_3616FDE8A71D0590_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18A19890)
#define CLASS_2_3616FDE8A71D0590_2___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x18A198A0)
#define CLASS_2_3616FDE8A71D0590_2___C___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x18A198D0)

inline static constexpr unsigned int Class_2_3616FDE8A71D0590_2___c_TypeDefinitionIndex = 34796;

class Class_2_3616FDE8A71D0590_2___c : public ::System::Object
{
public:
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3616FDE8A71D0590_2___c_TypeDefinitionIndex)->GetStaticField(0x55210);
	}
	static ::System::Func_1<::Class_2_21AD365C113DC484*>** StaticGet___9__0_1()
	{
		return (::System::Func_1<::Class_2_21AD365C113DC484*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3616FDE8A71D0590_2___c_TypeDefinitionIndex)->GetStaticField(0x55218);
	}
	static ::Class_2_3616FDE8A71D0590_2___c** StaticGet___9()
	{
		return (::Class_2_3616FDE8A71D0590_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3616FDE8A71D0590_2___c_TypeDefinitionIndex)->GetStaticField(0x55220);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_2___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__0_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_2___C___CTOR_B__0_0_OFFSET))(this, a1);
	}

	::Class_2_21AD365C113DC484* __ctor_b__0_1()
	{
		return ((::Class_2_21AD365C113DC484*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_2___C___CTOR_B__0_1_OFFSET))(this);
	}
};
