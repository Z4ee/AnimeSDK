#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_GAMECORE_TURNBASEDGAMEMODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCF87D10)
#define RPG_GAMECORE_TURNBASEDGAMEMODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCF87D40)
#define RPG_GAMECORE_TURNBASEDGAMEMODE___C__RESETALLENTITYACTIONDELAY_B__138_0_OFFSET UNITYSDK_OFFSET(0xCF87D50)
#define RPG_GAMECORE_TURNBASEDGAMEMODE___C__RESETENTITYLISTACTIONDELAY_B__139_0_OFFSET UNITYSDK_OFFSET(0xCF87D90)
#define RPG_GAMECORE_TURNBASEDGAMEMODE___C__SETIMMEDIATEACTIONENTITIES_B__561_0_OFFSET UNITYSDK_OFFSET(0xCF87DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedGameMode___c_TypeDefinitionIndex = 50055;

	class TurnBasedGameMode___c : public ::System::Object
	{
	public:
		static ::RPG::GameCore::TurnBasedGameMode___c** StaticGet___9()
		{
			return (::RPG::GameCore::TurnBasedGameMode___c**)Il2CppClass::FromTypeDefinitionIndex(TurnBasedGameMode___c_TypeDefinitionIndex)->GetStaticField(0x29E0);
		}
		static ::System::Func_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint>** StaticGet___9__138_0()
		{
			return (::System::Func_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(TurnBasedGameMode___c_TypeDefinitionIndex)->GetStaticField(0x29E8);
		}
		static ::System::Func_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint>** StaticGet___9__139_0()
		{
			return (::System::Func_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(TurnBasedGameMode___c_TypeDefinitionIndex)->GetStaticField(0x29F0);
		}
		static ::System::Func_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint>** StaticGet___9__561_0()
		{
			return (::System::Func_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(TurnBasedGameMode___c_TypeDefinitionIndex)->GetStaticField(0x29F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDGAMEMODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDGAMEMODE___C__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint _ResetAllEntityActionDelay_b__138_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDGAMEMODE___C__RESETALLENTITYACTIONDELAY_B__138_0_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint _ResetEntityListActionDelay_b__139_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDGAMEMODE___C__RESETENTITYLISTACTIONDELAY_B__139_0_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint _SetImmediateActionEntities_b__561_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDGAMEMODE___C__SETIMMEDIATEACTIONENTITIES_B__561_0_OFFSET))(this, a1);
		}
	};
}
