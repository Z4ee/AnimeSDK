#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class EntityComponentChanged; }
namespace Entitas { class EntityComponentReplaced; }
namespace Entitas { class IComponent; }
namespace Entitas { class IEntity; }

#define CLASS_1_8E042314AFF884FB_4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xACCDBF0)
#define CLASS_1_8E042314AFF884FB_4___C__CTOR_OFFSET UNITYSDK_OFFSET(0xACCDC30)
#define CLASS_1_8E042314AFF884FB_4___C__INITIALIZE_B__1_0_OFFSET UNITYSDK_OFFSET(0xACCDC40)
#define CLASS_1_8E042314AFF884FB_4___C__INITIALIZE_B__1_1_OFFSET UNITYSDK_OFFSET(0xACCDFC0)
#define CLASS_1_8E042314AFF884FB_4___C__INITIALIZE_B__1_2_OFFSET UNITYSDK_OFFSET(0xACCE0A0)
#define CLASS_1_8E042314AFF884FB_4___C__INITIALIZE_B__1_3_OFFSET UNITYSDK_OFFSET(0xACCE160)
#define CLASS_1_8E042314AFF884FB_4___C__INITIALIZE_B__1_4_OFFSET UNITYSDK_OFFSET(0xACCE210)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_4___c_TypeDefinitionIndex = 71179;

class Class_1_8E042314AFF884FB_4___c : public ::System::Object
{
public:
	static ::Entitas::EntityComponentReplaced** StaticGet___9__1_4()
	{
		return (::Entitas::EntityComponentReplaced**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E042314AFF884FB_4___c_TypeDefinitionIndex)->GetStaticField(0x19B00);
	}
	static ::Entitas::EntityComponentChanged** StaticGet___9__1_2()
	{
		return (::Entitas::EntityComponentChanged**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E042314AFF884FB_4___c_TypeDefinitionIndex)->GetStaticField(0x19B08);
	}
	static ::Class_1_8E042314AFF884FB_4___c** StaticGet___9()
	{
		return (::Class_1_8E042314AFF884FB_4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E042314AFF884FB_4___c_TypeDefinitionIndex)->GetStaticField(0x19B10);
	}
	static ::Entitas::EntityComponentChanged** StaticGet___9__1_3()
	{
		return (::Entitas::EntityComponentChanged**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E042314AFF884FB_4___c_TypeDefinitionIndex)->GetStaticField(0x19B18);
	}
	static ::Entitas::EntityComponentChanged** StaticGet___9__1_1()
	{
		return (::Entitas::EntityComponentChanged**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E042314AFF884FB_4___c_TypeDefinitionIndex)->GetStaticField(0x19B20);
	}
	static ::Entitas::EntityComponentReplaced** StaticGet___9__1_0()
	{
		return (::Entitas::EntityComponentReplaced**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E042314AFF884FB_4___c_TypeDefinitionIndex)->GetStaticField(0x19B28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_4___C__CTOR_OFFSET))(this);
	}

	::System::Void _Initialize_b__1_0(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_4___C__INITIALIZE_B__1_0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _Initialize_b__1_1(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_4___C__INITIALIZE_B__1_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _Initialize_b__1_2(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_4___C__INITIALIZE_B__1_2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _Initialize_b__1_3(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_4___C__INITIALIZE_B__1_3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _Initialize_b__1_4(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_4___C__INITIALIZE_B__1_4_OFFSET))(this, a1, a2, a3, a4);
	}
};
