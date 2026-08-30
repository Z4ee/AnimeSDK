#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_64D890C466F37235___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB51F630)
#define CLASS_1_64D890C466F37235___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB51F660)
#define CLASS_1_64D890C466F37235___C___UPDATECHARACTERVISIBILITYBYGROUP_B__79_0_OFFSET UNITYSDK_OFFSET(0xB51F670)

inline static constexpr unsigned int Class_1_64D890C466F37235___c_TypeDefinitionIndex = 60684;

class Class_1_64D890C466F37235___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet___9__79_0()
	{
		return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_64D890C466F37235___c_TypeDefinitionIndex)->GetStaticField(0x5E810);
	}
	static ::Class_1_64D890C466F37235___c** StaticGet___9()
	{
		return (::Class_1_64D890C466F37235___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_64D890C466F37235___c_TypeDefinitionIndex)->GetStaticField(0x5E818);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_64D890C466F37235___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64D890C466F37235___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __UpdateCharacterVisibilityByGroup_b__79_0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_64D890C466F37235___C___UPDATECHARACTERVISIBILITYBYGROUP_B__79_0_OFFSET))(this, a1);
	}
};
