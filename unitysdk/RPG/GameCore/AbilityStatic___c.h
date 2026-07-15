#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A891C8E0D74F1DB9;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_GAMECORE_ABILITYSTATIC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10709DF0)
#define RPG_GAMECORE_ABILITYSTATIC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10709E20)
#define RPG_GAMECORE_ABILITYSTATIC___C__FILLRESTRICTTARGETLIST_B__92_0_OFFSET UNITYSDK_OFFSET(0x10709E30)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__288_0_OFFSET UNITYSDK_OFFSET(0x10709E70)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__288_1_OFFSET UNITYSDK_OFFSET(0x10709EB0)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__288_2_OFFSET UNITYSDK_OFFSET(0x10709F00)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__288_3_OFFSET UNITYSDK_OFFSET(0x10709F40)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__288_4_OFFSET UNITYSDK_OFFSET(0x10709F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityStatic___c_TypeDefinitionIndex = 51935;

	class AbilityStatic___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__92_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(AbilityStatic___c_TypeDefinitionIndex)->GetStaticField(0x57A50);
		}
		static ::RPG::GameCore::AbilityStatic___c** StaticGet___9()
		{
			return (::RPG::GameCore::AbilityStatic___c**)Il2CppClass::FromTypeDefinitionIndex(AbilityStatic___c_TypeDefinitionIndex)->GetStaticField(0x57A58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _FillRestrictTargetList_b__92_0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C__FILLRESTRICTTARGETLIST_B__92_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __cctor_b__288_0(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__288_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __cctor_b__288_1(::Class_1_A891C8E0D74F1DB9* a1, ::Class_1_A891C8E0D74F1DB9* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_A891C8E0D74F1DB9*, ::Class_1_A891C8E0D74F1DB9*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__288_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 __cctor_b__288_2(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__288_2_OFFSET))(this, a1, a2);
		}

		::System::Int32 __cctor_b__288_3(::Class_1_A891C8E0D74F1DB9* a1, ::Class_1_A891C8E0D74F1DB9* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_A891C8E0D74F1DB9*, ::Class_1_A891C8E0D74F1DB9*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__288_3_OFFSET))(this, a1, a2);
		}

		::System::Int32 __cctor_b__288_4(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__288_4_OFFSET))(this, a1, a2);
		}
	};
}
