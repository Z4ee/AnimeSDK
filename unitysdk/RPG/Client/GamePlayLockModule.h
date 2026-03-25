#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/RPG/GameCore/AdventureSkillCharacterComponent_CustomForbidTag.h"

class Class_0_16E4307DCC419505_295;
namespace RPG::Client { class GamePlayLockTargetFunc; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GAMEPLAYLOCKMODULE_CLEARALLLOCK_OFFSET UNITYSDK_OFFSET(0x97AC6D0)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_CLEARLOCKBYTARGET_OFFSET UNITYSDK_OFFSET(0x97AC970)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x97AC4C0)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_GETLOCKSOURCEOPCOUNT_OFFSET UNITYSDK_OFFSET(0x97ADAD0)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_GETLOCKTARGETFUNC_OFFSET UNITYSDK_OFFSET(0x97AD900)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x97AAF60)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_ISLOCKBY_OFFSET UNITYSDK_OFFSET(0x97AD4B0)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_ISLOCK_OFFSET UNITYSDK_OFFSET(0x97AD9C0)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_LOCK_OFFSET UNITYSDK_OFFSET(0x97ACB70)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_RECOVERLOCKSOURCE_OFFSET UNITYSDK_OFFSET(0x97ADF40)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_REGISTEREVENTS_OFFSET UNITYSDK_OFFSET(0x97AAE80)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_SHIELDLOCKSOURCE_OFFSET UNITYSDK_OFFSET(0x97ADBC0)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_UNLOCK_OFFSET UNITYSDK_OFFSET(0x97AD020)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE_UNREGISTEREVENTS_OFFSET UNITYSDK_OFFSET(0x97AAEF0)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE__CREATELOCKFLAGSLIST_OFFSET UNITYSDK_OFFSET(0x97AE310)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x97AAD00)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE__GETLOCKTARGETFUNC_OFFSET UNITYSDK_OFFSET(0x97ACAB0)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE__INITLOCKTARGETFUNCS_OFFSET UNITYSDK_OFFSET(0x97AB060)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE__INITLOCKTARGETS_OFFSET UNITYSDK_OFFSET(0x97AC3B0)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE__ONPLAYERTELEPORTWITHINMAPBEFORE_OFFSET UNITYSDK_OFFSET(0x97AE2C0)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x97AE3E0)
#define RPG_CLIENT_GAMEPLAYLOCKMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x97AE350)

namespace RPG::Client
{
	inline static constexpr unsigned int GamePlayLockModule_TypeDefinitionIndex = 52260;

	class GamePlayLockModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LockSource, ::System::Collections::Generic::List_1<::RPG::Client::GamePlayLockTarget>*>* _LockTargets; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LockSource, ::System::UInt32>* _LockSourceOpCount; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::GamePlayLockTarget, ::RPG::Client::GamePlayLockTargetFunc*>* _LockTargetFuncs; // 0x20
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

		::System::Void ClearLockByTarget(::RPG::Client::GamePlayLockTarget target)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePlayLockTarget))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_CLEARLOCKBYTARGET_OFFSET))(this, target);
		}

		::System::Void Lock(::RPG::Client::LockSource lockSource, ::Il2CppArray<::System::Object*>* lockParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LockSource, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_LOCK_OFFSET))(this, lockSource, lockParams);
		}

		::System::Void Unlock(::RPG::Client::LockSource lockSource, ::Il2CppArray<::System::Object*>* unlockParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LockSource, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_UNLOCK_OFFSET))(this, lockSource, unlockParams);
		}

		::System::Boolean IsLockBy(::RPG::Client::LockSource lockSource)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LockSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_ISLOCKBY_OFFSET))(this, lockSource);
		}

		::RPG::Client::GamePlayLockTargetFunc* GetLockTargetFunc(::RPG::Client::GamePlayLockTarget target)
		{
			return ((::RPG::Client::GamePlayLockTargetFunc*(*)(::PVOID, ::RPG::Client::GamePlayLockTarget))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_GETLOCKTARGETFUNC_OFFSET))(this, target);
		}

		::System::Boolean IsLock(::RPG::Client::GamePlayLockTarget target)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GamePlayLockTarget))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_ISLOCK_OFFSET))(this, target);
		}

		::System::UInt32 GetLockSourceOpCount(::RPG::Client::LockSource lockSource)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::LockSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_GETLOCKSOURCEOPCOUNT_OFFSET))(this, lockSource);
		}

		::System::Void ShieldLockSource(::RPG::Client::LockSource lockSource)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LockSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_SHIELDLOCKSOURCE_OFFSET))(this, lockSource);
		}

		::System::Void RecoverLockSource(::RPG::Client::LockSource lockSource)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LockSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE_RECOVERLOCKSOURCE_OFFSET))(this, lockSource);
		}

		::System::Void _OnPlayerTeleportWithinMapBefore(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE__ONPLAYERTELEPORTWITHINMAPBEFORE_OFFSET))(this, arg);
		}

		::RPG::Client::GamePlayLockTargetFunc* _GetLockTargetFunc(::RPG::Client::GamePlayLockTarget target)
		{
			return ((::RPG::Client::GamePlayLockTargetFunc*(*)(::PVOID, ::RPG::Client::GamePlayLockTarget))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE__GETLOCKTARGETFUNC_OFFSET))(this, target);
		}

		::System::Void _InitLockTargetFuncs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE__INITLOCKTARGETFUNCS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_295*>* _CreateLockFlagsList()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_295*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE__CREATELOCKFLAGSLIST_OFFSET))(this);
		}

		::System::Void _InitLockTargets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE__INITLOCKTARGETS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
