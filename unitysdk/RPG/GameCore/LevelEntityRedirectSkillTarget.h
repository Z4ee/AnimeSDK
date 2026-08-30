#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET_CLEAR_OFFSET UNITYSDK_OFFSET(0xE692270)
#define RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE692330)
#define RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6922E0)
#define RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET_INIT_OFFSET UNITYSDK_OFFSET(0xE692200)
#define RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xE692380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityRedirectSkillTarget_TypeDefinitionIndex = 56927;

	class LevelEntityRedirectSkillTarget : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Caster; // 0x18
		::RPG::GameCore::GameEntity* OldTarget; // 0x20
		::RPG::GameCore::GameEntity* NewTarget; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityRedirectSkillTarget* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::RPG::GameCore::LevelEntityRedirectSkillTarget*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
