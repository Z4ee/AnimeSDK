#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_2_05C9B7A09B15945C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDFEBF10)
#define CLASS_2_05C9B7A09B15945C___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDFEBF40)
#define CLASS_2_05C9B7A09B15945C___C__ONTASKBEGIN_B__3_1_OFFSET UNITYSDK_OFFSET(0xDFEBF50)

inline static constexpr unsigned int Class_2_05C9B7A09B15945C___c_TypeDefinitionIndex = 51399;

class Class_2_05C9B7A09B15945C___c : public ::System::Object
{
public:
	static ::Class_2_05C9B7A09B15945C___c** StaticGet___9()
	{
		return (::Class_2_05C9B7A09B15945C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_05C9B7A09B15945C___c_TypeDefinitionIndex)->GetStaticField(0x54C0);
	}
	static ::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet___9__3_1()
	{
		return (::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_05C9B7A09B15945C___c_TypeDefinitionIndex)->GetStaticField(0x54C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_05C9B7A09B15945C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05C9B7A09B15945C___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _OnTaskBegin_b__3_1(::RPG::GameCore::TurnBasedModifierInstance* modifier)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_05C9B7A09B15945C___C__ONTASKBEGIN_B__3_1_OFFSET))(this, modifier);
	}
};
