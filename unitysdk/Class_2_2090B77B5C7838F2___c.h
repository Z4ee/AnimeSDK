#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6B60059019300BAD;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_2090B77B5C7838F2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9710C0)
#define CLASS_2_2090B77B5C7838F2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C971100)
#define CLASS_2_2090B77B5C7838F2___C___CTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1C971110)
#define CLASS_2_2090B77B5C7838F2___C___CTOR_B__43_1_OFFSET UNITYSDK_OFFSET(0x1C971140)

inline static constexpr unsigned int Class_2_2090B77B5C7838F2___c_TypeDefinitionIndex = 42564;

class Class_2_2090B77B5C7838F2___c : public ::System::Object
{
public:
	static ::System::Func_1<::Class_2_6B60059019300BAD*>** StaticGet___9__43_1()
	{
		return (::System::Func_1<::Class_2_6B60059019300BAD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2090B77B5C7838F2___c_TypeDefinitionIndex)->GetStaticField(0x57820);
	}
	static ::Class_2_2090B77B5C7838F2___c** StaticGet___9()
	{
		return (::Class_2_2090B77B5C7838F2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2090B77B5C7838F2___c_TypeDefinitionIndex)->GetStaticField(0x57828);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__43_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2090B77B5C7838F2___c_TypeDefinitionIndex)->GetStaticField(0x57830);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2090B77B5C7838F2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2090B77B5C7838F2___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__43_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2090B77B5C7838F2___C___CTOR_B__43_0_OFFSET))(this, a1);
	}

	::Class_2_6B60059019300BAD* __ctor_b__43_1()
	{
		return ((::Class_2_6B60059019300BAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2090B77B5C7838F2___C___CTOR_B__43_1_OFFSET))(this);
	}
};
