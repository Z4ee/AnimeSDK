#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/MVector3.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELLOSEHPBYRATIO_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA98F7A0)
#define RPG_GAMECORE_LEVELLOSEHPBYRATIO_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA98F750)
#define RPG_GAMECORE_LEVELLOSEHPBYRATIO_INIT_OFFSET UNITYSDK_OFFSET(0xA98F6E0)
#define RPG_GAMECORE_LEVELLOSEHPBYRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0xA98F7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelLoseHPByRatio_TypeDefinitionIndex = 45684;

	class LevelLoseHPByRatio : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::RPG::GameCore::GameEntity* Attacker; // 0x20
		::System::Single DitherRangeB; // 0x28
		::RPG::GameCore::FixPoint Damage; // 0x30
		::System::Single DitherRangeA; // 0x38
		::RPG::MVector3 HitPos; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOSEHPBYRATIO__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelLoseHPByRatio* Init(::RPG::GameCore::GameEntity* pAttacker, ::RPG::GameCore::GameEntity* pTarget, ::RPG::GameCore::FixPoint fDamage)
		{
			return ((::RPG::GameCore::LevelLoseHPByRatio*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOSEHPBYRATIO_INIT_OFFSET))(this, pAttacker, pTarget, fDamage);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOSEHPBYRATIO_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOSEHPBYRATIO_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
