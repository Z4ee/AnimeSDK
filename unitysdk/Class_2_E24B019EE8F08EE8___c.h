#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_E24B019EE8F08EE8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D03310)
#define CLASS_2_E24B019EE8F08EE8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D03340)
#define CLASS_2_E24B019EE8F08EE8___C___CREATEMONSTERHUDBUFFPANEL_B__3_0_OFFSET UNITYSDK_OFFSET(0x14D03350)

inline static constexpr unsigned int Class_2_E24B019EE8F08EE8___c_TypeDefinitionIndex = 68539;

class Class_2_E24B019EE8F08EE8___c : public ::System::Object
{
public:
	static ::Class_2_E24B019EE8F08EE8___c** StaticGet___9()
	{
		return (::Class_2_E24B019EE8F08EE8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E24B019EE8F08EE8___c_TypeDefinitionIndex)->GetStaticField(0x6BB90);
	}
	static ::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E24B019EE8F08EE8___c_TypeDefinitionIndex)->GetStaticField(0x6BB98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __CreateMonsterHUDBuffPanel_b__3_0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8___C___CREATEMONSTERHUDBUFFPANEL_B__3_0_OFFSET))(this, a1);
	}
};
