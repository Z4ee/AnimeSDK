#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELENTITYSTAGESTATECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BDFB990)
#define RPG_GAMECORE_LEVELENTITYSTAGESTATECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BDFB940)
#define RPG_GAMECORE_LEVELENTITYSTAGESTATECHANGE_GET_ISONSTAGE_OFFSET UNITYSDK_OFFSET(0x1BDFB9F0)
#define RPG_GAMECORE_LEVELENTITYSTAGESTATECHANGE_GET_REASONKEY_OFFSET UNITYSDK_OFFSET(0x1BDFBA00)
#define RPG_GAMECORE_LEVELENTITYSTAGESTATECHANGE_GET_SOURCEENTITY_OFFSET UNITYSDK_OFFSET(0x1BDFB9E0)
#define RPG_GAMECORE_LEVELENTITYSTAGESTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDFB930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityStageStateChange_TypeDefinitionIndex = 54253;

	class LevelEntityStageStateChange : public ::System::Object
	{
	public:
		::System::String* _ReasonKey; // 0x10
		::RPG::GameCore::GameEntity* _Entity; // 0x18
		::System::Boolean _IsOnStage; // 0x20

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSTAGESTATECHANGE__CTOR_OFFSET))(this, a1, a2, a3);
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
