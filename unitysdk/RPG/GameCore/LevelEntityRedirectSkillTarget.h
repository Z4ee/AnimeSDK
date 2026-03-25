#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET_CLEAR_OFFSET UNITYSDK_OFFSET(0xA988FC0)
#define RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA989080)
#define RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA989030)
#define RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET_INIT_OFFSET UNITYSDK_OFFSET(0xA988F50)
#define RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xA9890D0)
#define RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA9890E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityRedirectSkillTarget_TypeDefinitionIndex = 45645;

	class LevelEntityRedirectSkillTarget : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* OldTarget; // 0x18
		::RPG::GameCore::GameEntity* Caster; // 0x20
		::RPG::GameCore::GameEntity* NewTarget; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityRedirectSkillTarget* Init(::RPG::GameCore::GameEntity* caster, ::RPG::GameCore::GameEntity* newTarget, ::RPG::GameCore::GameEntity* oldTarget)
		{
			return ((::RPG::GameCore::LevelEntityRedirectSkillTarget*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYREDIRECTSKILLTARGET_INIT_OFFSET))(this, caster, newTarget, oldTarget);
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
