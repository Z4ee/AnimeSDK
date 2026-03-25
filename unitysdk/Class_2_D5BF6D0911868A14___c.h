#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_BBF288E7BC196760;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_D5BF6D0911868A14___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169DEB10)
#define CLASS_2_D5BF6D0911868A14___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169DEB50)
#define CLASS_2_D5BF6D0911868A14___C___CTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x169DEB60)
#define CLASS_2_D5BF6D0911868A14___C___CTOR_B__9_1_OFFSET UNITYSDK_OFFSET(0x169DEB90)

inline static constexpr unsigned int Class_2_D5BF6D0911868A14___c_TypeDefinitionIndex = 32550;

class Class_2_D5BF6D0911868A14___c : public ::System::Object
{
public:
	static ::System::Func_1<::Class_2_BBF288E7BC196760*>** StaticGet___9__9_1()
	{
		return (::System::Func_1<::Class_2_BBF288E7BC196760*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D5BF6D0911868A14___c_TypeDefinitionIndex)->GetStaticField(0x1A0A0);
	}
	static ::Class_2_D5BF6D0911868A14___c** StaticGet___9()
	{
		return (::Class_2_D5BF6D0911868A14___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D5BF6D0911868A14___c_TypeDefinitionIndex)->GetStaticField(0x1A0A8);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__9_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D5BF6D0911868A14___c_TypeDefinitionIndex)->GetStaticField(0x1A0B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D5BF6D0911868A14___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5BF6D0911868A14___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__9_0(::Entitas::IEntity* entity)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D5BF6D0911868A14___C___CTOR_B__9_0_OFFSET))(this, entity);
	}

	::Class_2_BBF288E7BC196760* __ctor_b__9_1()
	{
		return ((::Class_2_BBF288E7BC196760*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5BF6D0911868A14___C___CTOR_B__9_1_OFFSET))(this);
	}
};
