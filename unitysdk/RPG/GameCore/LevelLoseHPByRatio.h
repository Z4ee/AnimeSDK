#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/MVector3.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELLOSEHPBYRATIO_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD29830)
#define RPG_GAMECORE_LEVELLOSEHPBYRATIO_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD297E0)
#define RPG_GAMECORE_LEVELLOSEHPBYRATIO_INIT_OFFSET UNITYSDK_OFFSET(0x1DD29770)
#define RPG_GAMECORE_LEVELLOSEHPBYRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD29880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelLoseHPByRatio_TypeDefinitionIndex = 56967;

	class LevelLoseHPByRatio : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::RPG::GameCore::GameEntity* Attacker; // 0x20
		::RPG::MVector3 HitPos; // 0x28
		::RPG::GameCore::FixPoint Damage; // 0x38
		::System::Single DitherRangeA; // 0x40
		::System::Single DitherRangeB; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOSEHPBYRATIO__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelLoseHPByRatio* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::LevelLoseHPByRatio*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOSEHPBYRATIO_INIT_OFFSET))(this, a1, a2, a3);
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
