#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { template <typename T1, typename T2, typename T3> class Triple_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_BC64DF9A816B750A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE001DA0)
#define CLASS_2_BC64DF9A816B750A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE001DD0)
#define CLASS_2_BC64DF9A816B750A___C__TICK_B__4_0_OFFSET UNITYSDK_OFFSET(0xE001DE0)

inline static constexpr unsigned int Class_2_BC64DF9A816B750A___c_TypeDefinitionIndex = 51404;

class Class_2_BC64DF9A816B750A___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::Triple_3<::System::Boolean, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntityList*>*, ::System::Boolean>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::RPG::GameCore::Triple_3<::System::Boolean, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntityList*>*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BC64DF9A816B750A___c_TypeDefinitionIndex)->GetStaticField(0x6CF0);
	}
	static ::Class_2_BC64DF9A816B750A___c** StaticGet___9()
	{
		return (::Class_2_BC64DF9A816B750A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BC64DF9A816B750A___c_TypeDefinitionIndex)->GetStaticField(0x6CF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BC64DF9A816B750A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC64DF9A816B750A___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _Tick_b__4_0(::RPG::GameCore::Triple_3<::System::Boolean, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntityList*>* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::Triple_3<::System::Boolean, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntityList*>*))((::PBYTE)hIl2Cpp + CLASS_2_BC64DF9A816B750A___C__TICK_B__4_0_OFFSET))(this, x);
	}
};
