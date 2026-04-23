#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A891C8E0D74F1DB9;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_GAMECORE_ABILITYSTATIC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5552F0)
#define RPG_GAMECORE_ABILITYSTATIC___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB555320)
#define RPG_GAMECORE_ABILITYSTATIC___C__FILLRESTRICTTARGETLIST_B__91_0_OFFSET UNITYSDK_OFFSET(0xB555330)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__283_0_OFFSET UNITYSDK_OFFSET(0xB555370)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__283_1_OFFSET UNITYSDK_OFFSET(0xB5553B0)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__283_2_OFFSET UNITYSDK_OFFSET(0xB555400)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__283_3_OFFSET UNITYSDK_OFFSET(0xB555440)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__283_4_OFFSET UNITYSDK_OFFSET(0xB555490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityStatic___c_TypeDefinitionIndex = 50183;

	class AbilityStatic___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__91_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(AbilityStatic___c_TypeDefinitionIndex)->GetStaticField(0x3ECD0);
		}
		static ::RPG::GameCore::AbilityStatic___c** StaticGet___9()
		{
			return (::RPG::GameCore::AbilityStatic___c**)Il2CppClass::FromTypeDefinitionIndex(AbilityStatic___c_TypeDefinitionIndex)->GetStaticField(0x3ECD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _FillRestrictTargetList_b__91_0(::RPG::GameCore::GameEntity* lhs, ::RPG::GameCore::GameEntity* rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C__FILLRESTRICTTARGETLIST_B__91_0_OFFSET))(this, lhs, rhs);
		}

		::System::Int32 __cctor_b__283_0(::RPG::GameCore::TurnBasedModifierInstance* x, ::RPG::GameCore::TurnBasedModifierInstance* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__283_0_OFFSET))(this, x, y);
		}

		::System::Int32 __cctor_b__283_1(::Class_1_A891C8E0D74F1DB9* x, ::Class_1_A891C8E0D74F1DB9* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_A891C8E0D74F1DB9*, ::Class_1_A891C8E0D74F1DB9*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__283_1_OFFSET))(this, x, y);
		}

		::System::Int32 __cctor_b__283_2(::RPG::GameCore::TurnBasedModifierInstance* x, ::RPG::GameCore::TurnBasedModifierInstance* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__283_2_OFFSET))(this, x, y);
		}

		::System::Int32 __cctor_b__283_3(::Class_1_A891C8E0D74F1DB9* x, ::Class_1_A891C8E0D74F1DB9* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_A891C8E0D74F1DB9*, ::Class_1_A891C8E0D74F1DB9*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__283_3_OFFSET))(this, x, y);
		}

		::System::Int32 __cctor_b__283_4(::RPG::GameCore::TurnBasedModifierInstance* x, ::RPG::GameCore::TurnBasedModifierInstance* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__283_4_OFFSET))(this, x, y);
		}
	};
}
