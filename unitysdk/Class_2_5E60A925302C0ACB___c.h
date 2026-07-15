#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_5E60A925302C0ACB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169CD140)
#define CLASS_2_5E60A925302C0ACB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169CD180)
#define CLASS_2_5E60A925302C0ACB___C___REFRESHVIEW_B__19_1_OFFSET UNITYSDK_OFFSET(0x169CD190)

inline static constexpr unsigned int Class_2_5E60A925302C0ACB___c_TypeDefinitionIndex = 69048;

class Class_2_5E60A925302C0ACB___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet___9__19_1()
	{
		return (::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5E60A925302C0ACB___c_TypeDefinitionIndex)->GetStaticField(0x575B0);
	}
	static ::Class_2_5E60A925302C0ACB___c** StaticGet___9()
	{
		return (::Class_2_5E60A925302C0ACB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5E60A925302C0ACB___c_TypeDefinitionIndex)->GetStaticField(0x575B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __RefreshView_b__19_1(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB___C___REFRESHVIEW_B__19_1_OFFSET))(this, a1, a2);
	}
};
