#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/RPG/GameCore/AdventureSkillCharacterComponent_CustomForbidTag.h"

class Class_0_16E4307DCC419505_359;
namespace RPG::Client { class GamePlayLockTargetFunc; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GAMEPLAYLOCKMODULE_APPLYLOCKFORNEWGAMEWORLD_OFFSET UNITYSDK_OFFSET(0x1AD8D830)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_CLEARALLLOCK_OFFSET UNITYSDK_OFFSET(0x1AD8C770)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_CLEARLOCKBYTARGET_OFFSET UNITYSDK_OFFSET(0x1AD8CB50)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AD8C5A0)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_GETLOCKSOURCEOPCOUNT_OFFSET UNITYSDK_OFFSET(0x1AD8E210)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_GETLOCKTARGETFUNC_OFFSET UNITYSDK_OFFSET(0x1AD8E160)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1AD8B0E0)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_ISLOCKBY_OFFSET UNITYSDK_OFFSET(0x1AD8DC20)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_ISLOCK_OFFSET UNITYSDK_OFFSET(0x1AD8DAE0)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_LOCK_OFFSET UNITYSDK_OFFSET(0x1AD8CDE0)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_RECOVERLOCKSOURCE_OFFSET UNITYSDK_OFFSET(0x1AD8E810)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_REGISTEREVENTS_OFFSET UNITYSDK_OFFSET(0x1AD8AFA0)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_SHIELDLOCKSOURCE_OFFSET UNITYSDK_OFFSET(0x1AD8E2F0)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_UNLOCK_OFFSET UNITYSDK_OFFSET(0x1AD8D310)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_UNREGISTEREVENTS_OFFSET UNITYSDK_OFFSET(0x1AD8B040)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE__CREATELOCKFLAGSLIST_OFFSET UNITYSDK_OFFSET(0x1AD8ED80)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD8AE20)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE__GETLOCKTARGETFUNC_OFFSET UNITYSDK_OFFSET(0x1AD8CD30)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE__INITLOCKTARGETFUNCS_OFFSET UNITYSDK_OFFSET(0x1AD8B140)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE__INITLOCKTARGETS_OFFSET UNITYSDK_OFFSET(0x1AD8C490)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE__ONPLAYERTELEPORTWITHINMAPBEFORE_OFFSET UNITYSDK_OFFSET(0x1AD8ED30)

namespace RPG::Client
{
	inline static constexpr unsigned int GamePlayLockModule_TypeDefinitionIndex = 64417;

	class GamePlayLockModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::GamePlayLockTarget, ::RPG::Client::GamePlayLockTargetFunc*>* _LockTargetFuncs; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LockSource, ::System::UInt32>* _LockSourceOpCount; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LockSource, ::System::Collections::Generic::List_1<::RPG::Client::GamePlayLockTarget>*>* _LockTargets; // 0x20
		::RPG::GameCore::AdventureSkillCharacterComponent_CustomForbidTag ADVSkillForbidTag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_REGISTEREVENTS_OFFSET))(this);
		}

		::System::Void UnregisterEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_UNREGISTEREVENTS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void ClearAllLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_CLEARALLLOCK_OFFSET))(this);
		}

		::System::Void ClearLockByTarget(::RPG::Client::GamePlayLockTarget a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePlayLockTarget))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_CLEARLOCKBYTARGET_OFFSET))(this, a1);
		}

		::System::Void Lock(::RPG::Client::LockSource a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LockSource, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_LOCK_OFFSET))(this, a1, a2);
		}

		::System::Void Unlock(::RPG::Client::LockSource a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LockSource, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_UNLOCK_OFFSET))(this, a1, a2);
		}

		::System::Void ApplyLockForNewGameWorld(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_APPLYLOCKFORNEWGAMEWORLD_OFFSET))(this, a1);
		}

		::System::Boolean IsLockBy(::RPG::Client::LockSource a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LockSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_ISLOCKBY_OFFSET))(this, a1);
		}

		::RPG::Client::GamePlayLockTargetFunc* GetLockTargetFunc(::RPG::Client::GamePlayLockTarget a1)
		{
			return ((::RPG::Client::GamePlayLockTargetFunc*(*)(::PVOID, ::RPG::Client::GamePlayLockTarget))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_GETLOCKTARGETFUNC_OFFSET))(this, a1);
		}

		::System::Boolean IsLock(::RPG::Client::GamePlayLockTarget a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GamePlayLockTarget))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_ISLOCK_OFFSET))(this, a1);
		}

		::System::UInt32 GetLockSourceOpCount(::RPG::Client::LockSource a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::LockSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_GETLOCKSOURCEOPCOUNT_OFFSET))(this, a1);
		}

		::System::Void ShieldLockSource(::RPG::Client::LockSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LockSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_SHIELDLOCKSOURCE_OFFSET))(this, a1);
		}

		::System::Void RecoverLockSource(::RPG::Client::LockSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LockSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_RECOVERLOCKSOURCE_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerTeleportWithinMapBefore(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE__ONPLAYERTELEPORTWITHINMAPBEFORE_OFFSET))(this, a1);
		}

		::RPG::Client::GamePlayLockTargetFunc* _GetLockTargetFunc(::RPG::Client::GamePlayLockTarget a1)
		{
			return ((::RPG::Client::GamePlayLockTargetFunc*(*)(::PVOID, ::RPG::Client::GamePlayLockTarget))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE__GETLOCKTARGETFUNC_OFFSET))(this, a1);
		}

		::System::Void _InitLockTargetFuncs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE__INITLOCKTARGETFUNCS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_359*>* _CreateLockFlagsList()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_359*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE__CREATELOCKFLAGSLIST_OFFSET))(this);
		}

		::System::Void _InitLockTargets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE__INITLOCKTARGETS_OFFSET))(this);
		}
	};
}
