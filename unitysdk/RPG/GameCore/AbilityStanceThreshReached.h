#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ABILITYSTANCETHRESHREACHED_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7D3480)
#define RPG_GAMECORE_ABILITYSTANCETHRESHREACHED_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA7D3520)
#define RPG_GAMECORE_ABILITYSTANCETHRESHREACHED_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA7D34D0)
#define RPG_GAMECORE_ABILITYSTANCETHRESHREACHED_INIT_OFFSET UNITYSDK_OFFSET(0xA7D33F0)
#define RPG_GAMECORE_ABILITYSTANCETHRESHREACHED__CTOR_OFFSET UNITYSDK_OFFSET(0xA7D3570)
#define RPG_GAMECORE_ABILITYSTANCETHRESHREACHED___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7D3580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityStanceThreshReached_TypeDefinitionIndex = 45486;

	class AbilityStanceThreshReached : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* DefenderEntity; // 0x18
		::RPG::GameCore::GameEntity* AttackerEntity; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* LockHPKeys; // 0x28
		::RPG::GameCore::FixPoint Threshold; // 0x30
		::System::Int32 SumStanceCount; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCETHRESHREACHED__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityStanceThreshReached* Init(::RPG::GameCore::GameEntity* defenderEntity, ::RPG::GameCore::GameEntity* attackerEntity, ::System::Collections::Generic::List_1<::System::String*>* lockHPKeys, ::System::Int32 sumStanceCount, ::RPG::GameCore::FixPoint threshold)
		{
			return ((::RPG::GameCore::AbilityStanceThreshReached*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCETHRESHREACHED_INIT_OFFSET))(this, defenderEntity, attackerEntity, lockHPKeys, sumStanceCount, threshold);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCETHRESHREACHED_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCETHRESHREACHED_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCETHRESHREACHED_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCETHRESHREACHED___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
