#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_2_E24C129C8F986B0F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CAB810)
#define CLASS_2_E24C129C8F986B0F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13CAB840)
#define CLASS_2_E24C129C8F986B0F___C__ONTASKBEGIN_B__3_1_OFFSET UNITYSDK_OFFSET(0x13CAB850)

inline static constexpr unsigned int Class_2_E24C129C8F986B0F___c_TypeDefinitionIndex = 52067;

class Class_2_E24C129C8F986B0F___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet___9__3_1()
	{
		return (::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E24C129C8F986B0F___c_TypeDefinitionIndex)->GetStaticField(0x669B0);
	}
	static ::Class_2_E24C129C8F986B0F___c** StaticGet___9()
	{
		return (::Class_2_E24C129C8F986B0F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E24C129C8F986B0F___c_TypeDefinitionIndex)->GetStaticField(0x669B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E24C129C8F986B0F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24C129C8F986B0F___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _OnTaskBegin_b__3_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E24C129C8F986B0F___C__ONTASKBEGIN_B__3_1_OFFSET))(this, a1);
	}
};
