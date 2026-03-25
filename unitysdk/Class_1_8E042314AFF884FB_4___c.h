#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class EntityComponentChanged; }
namespace Entitas { class EntityComponentReplaced; }
namespace Entitas { class IComponent; }
namespace Entitas { class IEntity; }

#define CLASS_1_8E042314AFF884FB_4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8859320)
#define CLASS_1_8E042314AFF884FB_4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8859360)
#define CLASS_1_8E042314AFF884FB_4___C__INITIALIZE_B__1_0_OFFSET UNITYSDK_OFFSET(0x8859370)
#define CLASS_1_8E042314AFF884FB_4___C__INITIALIZE_B__1_1_OFFSET UNITYSDK_OFFSET(0x8859700)
#define CLASS_1_8E042314AFF884FB_4___C__INITIALIZE_B__1_2_OFFSET UNITYSDK_OFFSET(0x88597E0)
#define CLASS_1_8E042314AFF884FB_4___C__INITIALIZE_B__1_3_OFFSET UNITYSDK_OFFSET(0x88598A0)
#define CLASS_1_8E042314AFF884FB_4___C__INITIALIZE_B__1_4_OFFSET UNITYSDK_OFFSET(0x8859950)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_4___c_TypeDefinitionIndex = 62364;

class Class_1_8E042314AFF884FB_4___c : public ::System::Object
{
public:
	static ::Entitas::EntityComponentReplaced** StaticGet___9__1_4()
	{
		return (::Entitas::EntityComponentReplaced**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E042314AFF884FB_4___c_TypeDefinitionIndex)->GetStaticField(0x48E60);
	}
	static ::Entitas::EntityComponentReplaced** StaticGet___9__1_0()
	{
		return (::Entitas::EntityComponentReplaced**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E042314AFF884FB_4___c_TypeDefinitionIndex)->GetStaticField(0x48E68);
	}
	static ::Entitas::EntityComponentChanged** StaticGet___9__1_1()
	{
		return (::Entitas::EntityComponentChanged**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E042314AFF884FB_4___c_TypeDefinitionIndex)->GetStaticField(0x48E70);
	}
	static ::Class_1_8E042314AFF884FB_4___c** StaticGet___9()
	{
		return (::Class_1_8E042314AFF884FB_4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E042314AFF884FB_4___c_TypeDefinitionIndex)->GetStaticField(0x48E78);
	}
	static ::Entitas::EntityComponentChanged** StaticGet___9__1_2()
	{
		return (::Entitas::EntityComponentChanged**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E042314AFF884FB_4___c_TypeDefinitionIndex)->GetStaticField(0x48E80);
	}
	static ::Entitas::EntityComponentChanged** StaticGet___9__1_3()
	{
		return (::Entitas::EntityComponentChanged**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E042314AFF884FB_4___c_TypeDefinitionIndex)->GetStaticField(0x48E88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_4___C__CTOR_OFFSET))(this);
	}

	::System::Void _Initialize_b__1_0(::Entitas::IEntity* entity, ::System::Int32 index, ::Entitas::IComponent* component, ::Entitas::IComponent* newComponent)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_4___C__INITIALIZE_B__1_0_OFFSET))(this, entity, index, component, newComponent);
	}

	::System::Void _Initialize_b__1_1(::Entitas::IEntity* entity, ::System::Int32 index, ::Entitas::IComponent* component)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_4___C__INITIALIZE_B__1_1_OFFSET))(this, entity, index, component);
	}

	::System::Void _Initialize_b__1_2(::Entitas::IEntity* entity, ::System::Int32 index, ::Entitas::IComponent* component)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_4___C__INITIALIZE_B__1_2_OFFSET))(this, entity, index, component);
	}

	::System::Void _Initialize_b__1_3(::Entitas::IEntity* entity, ::System::Int32 index, ::Entitas::IComponent* component)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_4___C__INITIALIZE_B__1_3_OFFSET))(this, entity, index, component);
	}

	::System::Void _Initialize_b__1_4(::Entitas::IEntity* entity, ::System::Int32 index, ::Entitas::IComponent* component, ::Entitas::IComponent* newComponent)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_4___C__INITIALIZE_B__1_4_OFFSET))(this, entity, index, component, newComponent);
	}
};
