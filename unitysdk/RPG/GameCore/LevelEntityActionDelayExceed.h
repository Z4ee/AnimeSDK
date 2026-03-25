#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYACTIONDELAYEXCEED_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA987DB0)
#define RPG_GAMECORE_LEVELENTITYACTIONDELAYEXCEED_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA987D60)
#define RPG_GAMECORE_LEVELENTITYACTIONDELAYEXCEED__CTOR_OFFSET UNITYSDK_OFFSET(0xA987D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityActionDelayExceed_TypeDefinitionIndex = 45679;

	class LevelEntityActionDelayExceed : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* ExceededEntityRef; // 0x10
		::RPG::GameCore::GameEntity* EntityRef; // 0x18

		::System::Void _ctor(::RPG::GameCore::GameEntity* pEntity, ::RPG::GameCore::GameEntity* pExceededEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYACTIONDELAYEXCEED__CTOR_OFFSET))(this, pEntity, pExceededEntity);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYACTIONDELAYEXCEED_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYACTIONDELAYEXCEED_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
