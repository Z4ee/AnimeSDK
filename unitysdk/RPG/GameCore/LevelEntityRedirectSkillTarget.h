#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE45000)
#define RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE450C0)
#define RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE45070)
#define RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET_INIT_OFFSET UNITYSDK_OFFSET(0xCE44F90)
#define RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xCE45110)
#define RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE45120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityRedirectSkillTarget_TypeDefinitionIndex = 52993;

	class LevelEntityRedirectSkillTarget : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* NewTarget; // 0x18
		::RPG::GameCore::GameEntity* Caster; // 0x20
		::RPG::GameCore::GameEntity* OldTarget; // 0x28

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

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
