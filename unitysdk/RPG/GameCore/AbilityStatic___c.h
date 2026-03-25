#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A891C8E0D74F1DB9;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_GAMECORE_ABILITYSTATIC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA810F50)
#define RPG_GAMECORE_ABILITYSTATIC___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA810F80)
#define RPG_GAMECORE_ABILITYSTATIC___C__FILLRESTRICTTARGETLIST_B__86_0_OFFSET UNITYSDK_OFFSET(0xA810F90)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__276_0_OFFSET UNITYSDK_OFFSET(0xA810FD0)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__276_1_OFFSET UNITYSDK_OFFSET(0xA811010)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__276_2_OFFSET UNITYSDK_OFFSET(0xA811060)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__276_3_OFFSET UNITYSDK_OFFSET(0xA8110A0)
#define RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__276_4_OFFSET UNITYSDK_OFFSET(0xA8110F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityStatic___c_TypeDefinitionIndex = 43486;

	class AbilityStatic___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__86_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(AbilityStatic___c_TypeDefinitionIndex)->GetStaticField(0x41120);
		}
		static ::RPG::GameCore::AbilityStatic___c** StaticGet___9()
		{
			return (::RPG::GameCore::AbilityStatic___c**)Il2CppClass::FromTypeDefinitionIndex(AbilityStatic___c_TypeDefinitionIndex)->GetStaticField(0x41128);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _FillRestrictTargetList_b__86_0(::RPG::GameCore::GameEntity* lhs, ::RPG::GameCore::GameEntity* rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C__FILLRESTRICTTARGETLIST_B__86_0_OFFSET))(this, lhs, rhs);
		}

		::System::Int32 __cctor_b__276_0(::RPG::GameCore::TurnBasedModifierInstance* x, ::RPG::GameCore::TurnBasedModifierInstance* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__276_0_OFFSET))(this, x, y);
		}

		::System::Int32 __cctor_b__276_1(::Class_1_A891C8E0D74F1DB9* x, ::Class_1_A891C8E0D74F1DB9* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_A891C8E0D74F1DB9*, ::Class_1_A891C8E0D74F1DB9*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__276_1_OFFSET))(this, x, y);
		}

		::System::Int32 __cctor_b__276_2(::RPG::GameCore::TurnBasedModifierInstance* x, ::RPG::GameCore::TurnBasedModifierInstance* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__276_2_OFFSET))(this, x, y);
		}

		::System::Int32 __cctor_b__276_3(::Class_1_A891C8E0D74F1DB9* x, ::Class_1_A891C8E0D74F1DB9* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_A891C8E0D74F1DB9*, ::Class_1_A891C8E0D74F1DB9*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__276_3_OFFSET))(this, x, y);
		}

		::System::Int32 __cctor_b__276_4(::RPG::GameCore::TurnBasedModifierInstance* x, ::RPG::GameCore::TurnBasedModifierInstance* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C___CCTOR_B__276_4_OFFSET))(this, x, y);
		}
	};
}
