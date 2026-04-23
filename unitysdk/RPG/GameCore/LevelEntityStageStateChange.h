#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELENTITYSTAGESTATECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6D7750)
#define RPG_GAMECORE_LEVELENTITYSTAGESTATECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6D7700)
#define RPG_GAMECORE_LEVELENTITYSTAGESTATECHANGE_GET_ISONSTAGE_OFFSET UNITYSDK_OFFSET(0xB6D77B0)
#define RPG_GAMECORE_LEVELENTITYSTAGESTATECHANGE_GET_REASONKEY_OFFSET UNITYSDK_OFFSET(0xB6D77C0)
#define RPG_GAMECORE_LEVELENTITYSTAGESTATECHANGE_GET_SOURCEENTITY_OFFSET UNITYSDK_OFFSET(0xB6D77A0)
#define RPG_GAMECORE_LEVELENTITYSTAGESTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D76F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityStageStateChange_TypeDefinitionIndex = 52343;

	class LevelEntityStageStateChange : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _Entity; // 0x10
		::System::String* _ReasonKey; // 0x18
		::System::Boolean _IsOnStage; // 0x20

		::System::Void _ctor(::RPG::GameCore::GameEntity* pEntity, ::System::Boolean onStage, ::System::String* reasonKey)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSTAGESTATECHANGE__CTOR_OFFSET))(this, pEntity, onStage, reasonKey);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSTAGESTATECHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSTAGESTATECHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_SourceEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSTAGESTATECHANGE_GET_SOURCEENTITY_OFFSET))(this);
		}

		::System::Boolean get_IsOnStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSTAGESTATECHANGE_GET_ISONSTAGE_OFFSET))(this);
		}

		::System::String* get_ReasonKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSTAGESTATECHANGE_GET_REASONKEY_OFFSET))(this);
		}
	};
}
