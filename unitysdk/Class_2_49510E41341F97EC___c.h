#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B85019BA1AD57D4D;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_49510E41341F97EC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16784AF0)
#define CLASS_2_49510E41341F97EC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16784B30)
#define CLASS_2_49510E41341F97EC___C___CTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x16784B40)
#define CLASS_2_49510E41341F97EC___C___CTOR_B__9_1_OFFSET UNITYSDK_OFFSET(0x16784B70)

inline static constexpr unsigned int Class_2_49510E41341F97EC___c_TypeDefinitionIndex = 32592;

class Class_2_49510E41341F97EC___c : public ::System::Object
{
public:
	static ::System::Func_1<::Class_2_B85019BA1AD57D4D*>** StaticGet___9__9_1()
	{
		return (::System::Func_1<::Class_2_B85019BA1AD57D4D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_49510E41341F97EC___c_TypeDefinitionIndex)->GetStaticField(0x8AB0);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__9_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_49510E41341F97EC___c_TypeDefinitionIndex)->GetStaticField(0x8AB8);
	}
	static ::Class_2_49510E41341F97EC___c** StaticGet___9()
	{
		return (::Class_2_49510E41341F97EC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_49510E41341F97EC___c_TypeDefinitionIndex)->GetStaticField(0x8AC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_49510E41341F97EC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49510E41341F97EC___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__9_0(::Entitas::IEntity* entity)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_49510E41341F97EC___C___CTOR_B__9_0_OFFSET))(this, entity);
	}

	::Class_2_B85019BA1AD57D4D* __ctor_b__9_1()
	{
		return ((::Class_2_B85019BA1AD57D4D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49510E41341F97EC___C___CTOR_B__9_1_OFFSET))(this);
	}
};
