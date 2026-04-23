#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_2_2C8D4B25BB143AB1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x910DC90)
#define CLASS_2_2C8D4B25BB143AB1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x910DCC0)
#define CLASS_2_2C8D4B25BB143AB1___C__ONTASKSUCCESS_B__7_0_OFFSET UNITYSDK_OFFSET(0x910DCD0)
#define CLASS_2_2C8D4B25BB143AB1___C__ONTASKSUCCESS_B__7_1_OFFSET UNITYSDK_OFFSET(0x910DDB0)

inline static constexpr unsigned int Class_2_2C8D4B25BB143AB1___c_TypeDefinitionIndex = 48379;

class Class_2_2C8D4B25BB143AB1___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet___9__7_0()
	{
		return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2C8D4B25BB143AB1___c_TypeDefinitionIndex)->GetStaticField(0x628B0);
	}
	static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet___9__7_1()
	{
		return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2C8D4B25BB143AB1___c_TypeDefinitionIndex)->GetStaticField(0x628B8);
	}
	static ::Class_2_2C8D4B25BB143AB1___c** StaticGet___9()
	{
		return (::Class_2_2C8D4B25BB143AB1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2C8D4B25BB143AB1___c_TypeDefinitionIndex)->GetStaticField(0x628C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2C8D4B25BB143AB1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C8D4B25BB143AB1___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _OnTaskSuccess_b__7_0(::RPG::GameCore::GameEntity* entity)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2C8D4B25BB143AB1___C__ONTASKSUCCESS_B__7_0_OFFSET))(this, entity);
	}

	::System::Boolean _OnTaskSuccess_b__7_1(::RPG::GameCore::GameEntity* entity)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2C8D4B25BB143AB1___C__ONTASKSUCCESS_B__7_1_OFFSET))(this, entity);
	}
};
