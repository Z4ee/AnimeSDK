#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_230F5EDDB35DAEBA;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_8D31566281692B25___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6232F0)
#define CLASS_2_8D31566281692B25___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C623330)
#define CLASS_2_8D31566281692B25___C___CTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x1C623340)
#define CLASS_2_8D31566281692B25___C___CTOR_B__73_1_OFFSET UNITYSDK_OFFSET(0x1C623370)

inline static constexpr unsigned int Class_2_8D31566281692B25___c_TypeDefinitionIndex = 40642;

class Class_2_8D31566281692B25___c : public ::System::Object
{
public:
	static ::System::Func_1<::Class_2_230F5EDDB35DAEBA*>** StaticGet___9__73_1()
	{
		return (::System::Func_1<::Class_2_230F5EDDB35DAEBA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8D31566281692B25___c_TypeDefinitionIndex)->GetStaticField(0x58AA0);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__73_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8D31566281692B25___c_TypeDefinitionIndex)->GetStaticField(0x58AA8);
	}
	static ::Class_2_8D31566281692B25___c** StaticGet___9()
	{
		return (::Class_2_8D31566281692B25___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8D31566281692B25___c_TypeDefinitionIndex)->GetStaticField(0x58AB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__73_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25___C___CTOR_B__73_0_OFFSET))(this, a1);
	}

	::Class_2_230F5EDDB35DAEBA* __ctor_b__73_1()
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25___C___CTOR_B__73_1_OFFSET))(this);
	}
};
