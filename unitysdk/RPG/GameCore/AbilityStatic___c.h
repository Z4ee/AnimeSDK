#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A891C8E0D74F1DB9;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_GAMECORE_ABILITYSTATIC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE533690)
#define RPG_GAMECORE_ABILITYSTATIC___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE5336C0)
#define RPG_GAMECORE_ABILITYSTATIC___C__FILLRESTRICTTARGETLIST_B__97_0_OFFSET UNITYSDK_OFFSET(0xE5336D0)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__311_0_OFFSET UNITYSDK_OFFSET(0xE533710)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__311_1_OFFSET UNITYSDK_OFFSET(0xE533750)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__311_2_OFFSET UNITYSDK_OFFSET(0xE5337A0)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__311_3_OFFSET UNITYSDK_OFFSET(0xE5337E0)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__311_4_OFFSET UNITYSDK_OFFSET(0xE533830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityStatic___c_TypeDefinitionIndex = 54405;

	class AbilityStatic___c : public ::System::Object
	{
	public:
		static ::RPG::GameCore::AbilityStatic___c** StaticGet___9()
		{
			return (::RPG::GameCore::AbilityStatic___c**)Il2CppClass::FromTypeDefinitionIndex(AbilityStatic___c_TypeDefinitionIndex)->GetStaticField(0x487F0);
		}
		static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__97_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(AbilityStatic___c_TypeDefinitionIndex)->GetStaticField(0x487F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _FillRestrictTargetList_b__97_0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C__FILLRESTRICTTARGETLIST_B__97_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __cctor_b__311_0(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__311_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __cctor_b__311_1(::Class_1_A891C8E0D74F1DB9* a1, ::Class_1_A891C8E0D74F1DB9* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_A891C8E0D74F1DB9*, ::Class_1_A891C8E0D74F1DB9*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__311_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 __cctor_b__311_2(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__311_2_OFFSET))(this, a1, a2);
		}

		::System::Int32 __cctor_b__311_3(::Class_1_A891C8E0D74F1DB9* a1, ::Class_1_A891C8E0D74F1DB9* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_A891C8E0D74F1DB9*, ::Class_1_A891C8E0D74F1DB9*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__311_3_OFFSET))(this, a1, a2);
		}

		::System::Int32 __cctor_b__311_4(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__311_4_OFFSET))(this, a1, a2);
		}
	};
}
