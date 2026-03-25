#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_295;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_ACQUIREFLAG_OFFSET UNITYSDK_OFFSET(0x97AE410)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_ADDCHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0x97AE900)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_CLEARLOCKFLAGS_OFFSET UNITYSDK_OFFSET(0x97AC800)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0x97AE400)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_HANDLELOCK_OFFSET UNITYSDK_OFFSET(0x97ACF80)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_HANDLEUNLOCK_OFFSET UNITYSDK_OFFSET(0x97AD420)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_HASFLAG_OFFSET UNITYSDK_OFFSET(0x97AD6F0)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_LOCK_OFFSET UNITYSDK_OFFSET(0x97AE9E0)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_RECOVERFLAG_OFFSET UNITYSDK_OFFSET(0x97AE190)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_REFRESHLOCK_OFFSET UNITYSDK_OFFSET(0x97AEA80)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_RELEASEFLAG_OFFSET UNITYSDK_OFFSET(0x97AE500)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_REMOVECHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0x97AE970)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_SHIELDFLAG_OFFSET UNITYSDK_OFFSET(0x97ADE10)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_UNLOCK_OFFSET UNITYSDK_OFFSET(0x97AEA30)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x97AE3F0)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC__GETFLAG_OFFSET UNITYSDK_OFFSET(0x97AE5F0)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC__REFRESHLOCKSTATUS_OFFSET UNITYSDK_OFFSET(0x97AE770)

namespace RPG::Client
{
	inline static constexpr unsigned int GamePlayLockTargetFunc_TypeDefinitionIndex = 52261;

	class GamePlayLockTargetFunc : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* _onLockChangeCallback; // 0x10
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_295*>* _LockFlags; // 0x18
		::System::UInt32 _CurrentFlagId; // 0x20
		::System::Boolean _IsLock; // 0x24

		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_295*>* flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_295*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC__CTOR_OFFSET))(this, flags);
		}

		::System::Boolean get_IsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_GET_ISLOCK_OFFSET))(this);
		}

		::System::Void HandleLock(::System::UInt32 flagID, ::Il2CppArray<::System::Object*>* lockParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_HANDLELOCK_OFFSET))(this, flagID, lockParams);
		}

		::System::Void HandleUnlock(::System::UInt32 flagID, ::Il2CppArray<::System::Object*>* unlockParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_HANDLEUNLOCK_OFFSET))(this, flagID, unlockParams);
		}

		::System::Void AcquireFlag(::System::UInt32 flagID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_ACQUIREFLAG_OFFSET))(this, flagID);
		}

		::System::Void ReleaseFlag(::System::UInt32 flagID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_RELEASEFLAG_OFFSET))(this, flagID);
		}

		::System::Void ShieldFlag(::System::UInt32 flagID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_SHIELDFLAG_OFFSET))(this, flagID);
		}

		::System::Void RecoverFlag(::System::UInt32 flagID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_RECOVERFLAG_OFFSET))(this, flagID);
		}

		::System::Boolean HasFlag(::System::UInt32 flagID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_HASFLAG_OFFSET))(this, flagID);
		}

		::System::Void ClearLockFlags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_CLEARLOCKFLAGS_OFFSET))(this);
		}

		::System::Void AddChangeCallBack(::System::Action_1<::System::Boolean>* callBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_ADDCHANGECALLBACK_OFFSET))(this, callBack);
		}

		::System::Void RemoveChangeCallBack(::System::Action_1<::System::Boolean>* callBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_REMOVECHANGECALLBACK_OFFSET))(this, callBack);
		}

		::Class_0_16E4307DCC419505_295* _GetFlag(::System::UInt32 flagID)
		{
			return ((::Class_0_16E4307DCC419505_295*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC__GETFLAG_OFFSET))(this, flagID);
		}

		::System::Void _RefreshLockStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC__REFRESHLOCKSTATUS_OFFSET))(this);
		}

		::System::Void Lock(::Il2CppArray<::System::Object*>* lockParams)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_LOCK_OFFSET))(this, lockParams);
		}

		::System::Void Unlock(::Il2CppArray<::System::Object*>* unlockParams)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_UNLOCK_OFFSET))(this, unlockParams);
		}

		::System::Void RefreshLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_REFRESHLOCK_OFFSET))(this);
		}
	};
}
