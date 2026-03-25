#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_EB6A6370F37BDD01___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A663D0)
#define CLASS_2_EB6A6370F37BDD01___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8A66410)
#define CLASS_2_EB6A6370F37BDD01___C___REFRESHVIEW_B__19_1_OFFSET UNITYSDK_OFFSET(0x8A66420)

inline static constexpr unsigned int Class_2_EB6A6370F37BDD01___c_TypeDefinitionIndex = 59233;

class Class_2_EB6A6370F37BDD01___c : public ::System::Object
{
public:
	static ::Class_2_EB6A6370F37BDD01___c** StaticGet___9()
	{
		return (::Class_2_EB6A6370F37BDD01___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EB6A6370F37BDD01___c_TypeDefinitionIndex)->GetStaticField(0x45DE0);
	}
	static ::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet___9__19_1()
	{
		return (::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EB6A6370F37BDD01___c_TypeDefinitionIndex)->GetStaticField(0x45DE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __RefreshView_b__19_1(::RPG::GameCore::TurnBasedModifierInstance* a, ::RPG::GameCore::TurnBasedModifierInstance* b)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_EB6A6370F37BDD01___C___REFRESHVIEW_B__19_1_OFFSET))(this, a, b);
	}
};
