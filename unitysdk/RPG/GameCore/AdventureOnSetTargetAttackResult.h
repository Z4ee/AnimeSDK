#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/AdventureAttackResult.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class AdventureDyingParam; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ADVENTUREONSETTARGETATTACKRESULT_CLEAR_OFFSET UNITYSDK_OFFSET(0xB58F710)
#define RPG_GAMECORE_ADVENTUREONSETTARGETATTACKRESULT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB58F7B0)
#define RPG_GAMECORE_ADVENTUREONSETTARGETATTACKRESULT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB58F760)
#define RPG_GAMECORE_ADVENTUREONSETTARGETATTACKRESULT_INIT_OFFSET UNITYSDK_OFFSET(0xB58F6B0)
#define RPG_GAMECORE_ADVENTUREONSETTARGETATTACKRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xB58F800)
#define RPG_GAMECORE_ADVENTUREONSETTARGETATTACKRESULT___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB58F810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureOnSetTargetAttackResult_TypeDefinitionIndex = 52201;

	class AdventureOnSetTargetAttackResult : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Targets; // 0x18
		::RPG::GameCore::AdventureDyingParam* DyingStyleParam; // 0x20
		::RPG::GameCore::AdventureAttackResult AttackResult; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONSETTARGETATTACKRESULT__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureOnSetTargetAttackResult* Init(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* target, ::RPG::GameCore::AdventureAttackResult attackResult)
		{
			return ((::RPG::GameCore::AdventureOnSetTargetAttackResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::AdventureAttackResult))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONSETTARGETATTACKRESULT_INIT_OFFSET))(this, target, attackResult);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONSETTARGETATTACKRESULT_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONSETTARGETATTACKRESULT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONSETTARGETATTACKRESULT_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONSETTARGETATTACKRESULT___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
