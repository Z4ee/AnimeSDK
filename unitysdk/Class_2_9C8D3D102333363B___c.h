#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_111B5B6592A7432A;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_9C8D3D102333363B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DC7000)
#define CLASS_2_9C8D3D102333363B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC7040)
#define CLASS_2_9C8D3D102333363B___C___CTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x18DC7050)
#define CLASS_2_9C8D3D102333363B___C___CTOR_B__9_1_OFFSET UNITYSDK_OFFSET(0x18DC7080)

inline static constexpr unsigned int Class_2_9C8D3D102333363B___c_TypeDefinitionIndex = 39105;

class Class_2_9C8D3D102333363B___c : public ::System::Object
{
public:
	static ::Class_2_9C8D3D102333363B___c** StaticGet___9()
	{
		return (::Class_2_9C8D3D102333363B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9C8D3D102333363B___c_TypeDefinitionIndex)->GetStaticField(0x38EC0);
	}
	static ::System::Func_1<::Class_2_111B5B6592A7432A*>** StaticGet___9__9_1()
	{
		return (::System::Func_1<::Class_2_111B5B6592A7432A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9C8D3D102333363B___c_TypeDefinitionIndex)->GetStaticField(0x38EC8);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__9_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9C8D3D102333363B___c_TypeDefinitionIndex)->GetStaticField(0x38ED0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9C8D3D102333363B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C8D3D102333363B___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__9_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9C8D3D102333363B___C___CTOR_B__9_0_OFFSET))(this, a1);
	}

	::Class_2_111B5B6592A7432A* __ctor_b__9_1()
	{
		return ((::Class_2_111B5B6592A7432A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C8D3D102333363B___C___CTOR_B__9_1_OFFSET))(this);
	}
};
