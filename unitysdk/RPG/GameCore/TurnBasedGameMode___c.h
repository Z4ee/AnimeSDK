#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_GAMECORE_TURNBASEDGAMEMODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A344190)
#define RPG_GAMECORE_TURNBASEDGAMEMODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3441C0)
#define RPG_GAMECORE_TURNBASEDGAMEMODE___C__RESETALLENTITYACTIONDELAY_B__150_0_OFFSET UNITYSDK_OFFSET(0x1A3441D0)
#define RPG_GAMECORE_TURNBASEDGAMEMODE___C__RESETENTITYLISTACTIONDELAY_B__151_0_OFFSET UNITYSDK_OFFSET(0x1A344210)
#define RPG_GAMECORE_TURNBASEDGAMEMODE___C__SETIMMEDIATEACTIONENTITIES_B__580_0_OFFSET UNITYSDK_OFFSET(0x1A344250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedGameMode___c_TypeDefinitionIndex = 53821;

	class TurnBasedGameMode___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint>** StaticGet___9__150_0()
		{
			return (::System::Func_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(TurnBasedGameMode___c_TypeDefinitionIndex)->GetStaticField(0x1F710);
		}
		static ::RPG::GameCore::TurnBasedGameMode___c** StaticGet___9()
		{
			return (::RPG::GameCore::TurnBasedGameMode___c**)Il2CppClass::FromTypeDefinitionIndex(TurnBasedGameMode___c_TypeDefinitionIndex)->GetStaticField(0x1F718);
		}
		static ::System::Func_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint>** StaticGet___9__151_0()
		{
			return (::System::Func_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(TurnBasedGameMode___c_TypeDefinitionIndex)->GetStaticField(0x1F720);
		}
		static ::System::Func_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint>** StaticGet___9__580_0()
		{
			return (::System::Func_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(TurnBasedGameMode___c_TypeDefinitionIndex)->GetStaticField(0x1F728);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDGAMEMODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDGAMEMODE___C__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint _ResetAllEntityActionDelay_b__150_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDGAMEMODE___C__RESETALLENTITYACTIONDELAY_B__150_0_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint _ResetEntityListActionDelay_b__151_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDGAMEMODE___C__RESETENTITYLISTACTIONDELAY_B__151_0_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint _SetImmediateActionEntities_b__580_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDGAMEMODE___C__SETIMMEDIATEACTIONENTITIES_B__580_0_OFFSET))(this, a1);
		}
	};
}
