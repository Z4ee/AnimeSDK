#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_B16757B03BA12169___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBC8CAC0)
#define CLASS_2_B16757B03BA12169___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBC8CB00)
#define CLASS_2_B16757B03BA12169___C__SETFORMATIONFORMULTITARGETS_B__6_0_OFFSET UNITYSDK_OFFSET(0xBC8CB80)
#define CLASS_2_B16757B03BA12169___C__SETFORMATIONFORSINGLETARGET_B__5_0_OFFSET UNITYSDK_OFFSET(0xBC8CB10)

inline static constexpr unsigned int Class_2_B16757B03BA12169___c_TypeDefinitionIndex = 56424;

class Class_2_B16757B03BA12169___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__5_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B16757B03BA12169___c_TypeDefinitionIndex)->GetStaticField(0x4AEA0);
	}
	static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__6_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B16757B03BA12169___c_TypeDefinitionIndex)->GetStaticField(0x4AEA8);
	}
	static ::Class_2_B16757B03BA12169___c** StaticGet___9()
	{
		return (::Class_2_B16757B03BA12169___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B16757B03BA12169___c_TypeDefinitionIndex)->GetStaticField(0x4AEB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B16757B03BA12169___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B16757B03BA12169___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _SetFormationForSingleTarget_b__5_0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B16757B03BA12169___C__SETFORMATIONFORSINGLETARGET_B__5_0_OFFSET))(this, a1, a2);
	}

	::System::Int32 _SetFormationForMultiTargets_b__6_0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B16757B03BA12169___C__SETFORMATIONFORMULTITARGETS_B__6_0_OFFSET))(this, a1, a2);
	}
};
