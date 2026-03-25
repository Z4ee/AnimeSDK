#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ABILITYHPTHRESHREACHED_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7CD260)
#define RPG_GAMECORE_ABILITYHPTHRESHREACHED_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA7CD300)
#define RPG_GAMECORE_ABILITYHPTHRESHREACHED_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA7CD2B0)
#define RPG_GAMECORE_ABILITYHPTHRESHREACHED_INIT_OFFSET UNITYSDK_OFFSET(0xA7CD1E0)
#define RPG_GAMECORE_ABILITYHPTHRESHREACHED__CTOR_OFFSET UNITYSDK_OFFSET(0xA7CD350)
#define RPG_GAMECORE_ABILITYHPTHRESHREACHED___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7CD360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityHPThreshReached_TypeDefinitionIndex = 45485;

	class AbilityHPThreshReached : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* DefenderEntity; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* LockHPKeys; // 0x20
		::RPG::GameCore::GameEntity* AttackerEntity; // 0x28
		::RPG::GameCore::FixPoint Threshold; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYHPTHRESHREACHED__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityHPThreshReached* Init(::RPG::GameCore::GameEntity* defenderEntity, ::RPG::GameCore::GameEntity* attackerEntity, ::System::Collections::Generic::List_1<::System::String*>* lockHPKeys, ::RPG::GameCore::FixPoint threshold)
		{
			return ((::RPG::GameCore::AbilityHPThreshReached*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::System::String*>*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYHPTHRESHREACHED_INIT_OFFSET))(this, defenderEntity, attackerEntity, lockHPKeys, threshold);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYHPTHRESHREACHED_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYHPTHRESHREACHED_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYHPTHRESHREACHED_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYHPTHRESHREACHED___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
