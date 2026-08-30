#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B9E8C2EEAA5C96EC;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_F47F7A3F5E97970D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4DCD00)
#define CLASS_2_F47F7A3F5E97970D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4DCD30)
#define CLASS_2_F47F7A3F5E97970D___C___CTOR_B__195_0_OFFSET UNITYSDK_OFFSET(0x1C4DCD40)
#define CLASS_2_F47F7A3F5E97970D___C___CTOR_B__195_1_OFFSET UNITYSDK_OFFSET(0x1C4DCD70)

inline static constexpr unsigned int Class_2_F47F7A3F5E97970D___c_TypeDefinitionIndex = 40632;

class Class_2_F47F7A3F5E97970D___c : public ::System::Object
{
public:
	static ::System::Func_1<::Class_2_B9E8C2EEAA5C96EC*>** StaticGet___9__195_1()
	{
		return (::System::Func_1<::Class_2_B9E8C2EEAA5C96EC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F47F7A3F5E97970D___c_TypeDefinitionIndex)->GetStaticField(0x2C4D0);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__195_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F47F7A3F5E97970D___c_TypeDefinitionIndex)->GetStaticField(0x2C4D8);
	}
	static ::Class_2_F47F7A3F5E97970D___c** StaticGet___9()
	{
		return (::Class_2_F47F7A3F5E97970D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F47F7A3F5E97970D___c_TypeDefinitionIndex)->GetStaticField(0x2C4E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F47F7A3F5E97970D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F47F7A3F5E97970D___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__195_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F47F7A3F5E97970D___C___CTOR_B__195_0_OFFSET))(this, a1);
	}

	::Class_2_B9E8C2EEAA5C96EC* __ctor_b__195_1()
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F47F7A3F5E97970D___C___CTOR_B__195_1_OFFSET))(this);
	}
};
