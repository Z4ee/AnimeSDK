#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELCUSTOMIZESTRINGEVENT_GETCASTENTITY_OFFSET UNITYSDK_OFFSET(0xE68A390)
#define RPG_GAMECORE_LEVELCUSTOMIZESTRINGEVENT_GETCUSTOMIZESTRING_OFFSET UNITYSDK_OFFSET(0xE68A3D0)
#define RPG_GAMECORE_LEVELCUSTOMIZESTRINGEVENT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE68A340)
#define RPG_GAMECORE_LEVELCUSTOMIZESTRINGEVENT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE68A2F0)
#define RPG_GAMECORE_LEVELCUSTOMIZESTRINGEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xE68A2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCustomizeStringEvent_TypeDefinitionIndex = 56906;

	class LevelCustomizeStringEvent : public ::System::Object
	{
	public:
		::System::String* _Customize; // 0x10
		::RPG::GameCore::GameEntity* _CastEntity; // 0x18

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCUSTOMIZESTRINGEVENT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCUSTOMIZESTRINGEVENT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCUSTOMIZESTRINGEVENT_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetCastEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCUSTOMIZESTRINGEVENT_GETCASTENTITY_OFFSET))(this);
		}

		::System::String* GetCustomizeString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCUSTOMIZESTRINGEVENT_GETCUSTOMIZESTRING_OFFSET))(this);
		}
	};
}
