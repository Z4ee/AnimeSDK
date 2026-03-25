#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_2_6C477761977F1F85___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x105344E0)
#define CLASS_2_6C477761977F1F85___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10534510)
#define CLASS_2_6C477761977F1F85___C__ONTASKBEGIN_B__3_1_OFFSET UNITYSDK_OFFSET(0x10534520)

inline static constexpr unsigned int Class_2_6C477761977F1F85___c_TypeDefinitionIndex = 44657;

class Class_2_6C477761977F1F85___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet___9__3_1()
	{
		return (::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6C477761977F1F85___c_TypeDefinitionIndex)->GetStaticField(0x263A0);
	}
	static ::Class_2_6C477761977F1F85___c** StaticGet___9()
	{
		return (::Class_2_6C477761977F1F85___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6C477761977F1F85___c_TypeDefinitionIndex)->GetStaticField(0x263A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6C477761977F1F85___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C477761977F1F85___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _OnTaskBegin_b__3_1(::RPG::GameCore::TurnBasedModifierInstance* modifier)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_6C477761977F1F85___C__ONTASKBEGIN_B__3_1_OFFSET))(this, modifier);
	}
};
