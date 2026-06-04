#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B66C1067C0468FBB;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_FB9CF047C8AEAA83___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BCFF00)
#define CLASS_2_FB9CF047C8AEAA83___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18BCFF40)
#define CLASS_2_FB9CF047C8AEAA83___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x18BCFF50)
#define CLASS_2_FB9CF047C8AEAA83___C___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x18BCFF80)

inline static constexpr unsigned int Class_2_FB9CF047C8AEAA83___c_TypeDefinitionIndex = 38871;

class Class_2_FB9CF047C8AEAA83___c : public ::System::Object
{
public:
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FB9CF047C8AEAA83___c_TypeDefinitionIndex)->GetStaticField(0x27CE0);
	}
	static ::System::Func_1<::Class_2_B66C1067C0468FBB*>** StaticGet___9__0_1()
	{
		return (::System::Func_1<::Class_2_B66C1067C0468FBB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FB9CF047C8AEAA83___c_TypeDefinitionIndex)->GetStaticField(0x27CE8);
	}
	static ::Class_2_FB9CF047C8AEAA83___c** StaticGet___9()
	{
		return (::Class_2_FB9CF047C8AEAA83___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FB9CF047C8AEAA83___c_TypeDefinitionIndex)->GetStaticField(0x27CF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FB9CF047C8AEAA83___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB9CF047C8AEAA83___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__0_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FB9CF047C8AEAA83___C___CTOR_B__0_0_OFFSET))(this, a1);
	}

	::Class_2_B66C1067C0468FBB* __ctor_b__0_1()
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB9CF047C8AEAA83___C___CTOR_B__0_1_OFFSET))(this);
	}
};
