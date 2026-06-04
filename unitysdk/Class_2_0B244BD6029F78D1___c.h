#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { template <typename T1, typename T2, typename T3> class Triple_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_0B244BD6029F78D1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF2ECE0)
#define CLASS_2_0B244BD6029F78D1___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAF2ED20)
#define CLASS_2_0B244BD6029F78D1___C__TICK_B__4_0_OFFSET UNITYSDK_OFFSET(0xAF2ED30)

inline static constexpr unsigned int Class_2_0B244BD6029F78D1___c_TypeDefinitionIndex = 52072;

class Class_2_0B244BD6029F78D1___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::Triple_3<::System::Boolean, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntityList*>*, ::System::Boolean>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::RPG::GameCore::Triple_3<::System::Boolean, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntityList*>*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0B244BD6029F78D1___c_TypeDefinitionIndex)->GetStaticField(0x38D90);
	}
	static ::Class_2_0B244BD6029F78D1___c** StaticGet___9()
	{
		return (::Class_2_0B244BD6029F78D1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0B244BD6029F78D1___c_TypeDefinitionIndex)->GetStaticField(0x38D98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0B244BD6029F78D1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B244BD6029F78D1___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _Tick_b__4_0(::RPG::GameCore::Triple_3<::System::Boolean, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntityList*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::Triple_3<::System::Boolean, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntityList*>*))((::PBYTE)hIl2Cpp + CLASS_2_0B244BD6029F78D1___C__TICK_B__4_0_OFFSET))(this, a1);
	}
};
