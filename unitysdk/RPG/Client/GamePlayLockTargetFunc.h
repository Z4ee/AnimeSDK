#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_340;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_ACQUIREFLAG_OFFSET UNITYSDK_OFFSET(0x192DE300)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_ADDCHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0x192DE970)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_CLEARLOCKFLAGS_OFFSET UNITYSDK_OFFSET(0x192DBEA0)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0x192DBE60)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_HANDLELOCK_OFFSET UNITYSDK_OFFSET(0x192DC6A0)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_HANDLEUNLOCK_OFFSET UNITYSDK_OFFSET(0x192DCBD0)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_HASFLAG_OFFSET UNITYSDK_OFFSET(0x192DD390)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_LOCK_OFFSET UNITYSDK_OFFSET(0x192DEA50)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_RECOVERFLAG_OFFSET UNITYSDK_OFFSET(0x192DDF90)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_REFRESHLOCK_OFFSET UNITYSDK_OFFSET(0x192DEAF0)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_RELEASEFLAG_OFFSET UNITYSDK_OFFSET(0x192DE440)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_REMOVECHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0x192DE9E0)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_SHIELDFLAG_OFFSET UNITYSDK_OFFSET(0x192DDA70)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_UNLOCK_OFFSET UNITYSDK_OFFSET(0x192DEAA0)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x192DE2F0)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC__GETFLAG_OFFSET UNITYSDK_OFFSET(0x192DE580)
#define RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC__REFRESHLOCKSTATUS_OFFSET UNITYSDK_OFFSET(0x192DE780)

namespace RPG::Client
{
	inline static constexpr unsigned int GamePlayLockTargetFunc_TypeDefinitionIndex = 61434;

	class GamePlayLockTargetFunc : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_340*>* _LockFlags; // 0x10
		::System::Action_1<::System::Boolean>* _onLockChangeCallback; // 0x18
		::System::UInt32 _CurrentFlagId; // 0x20
		::System::Boolean _IsLock; // 0x24

		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_340*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_340*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_GET_ISLOCK_OFFSET))(this);
		}

		::System::Void HandleLock(::System::UInt32 a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_HANDLELOCK_OFFSET))(this, a1, a2);
		}

		::System::Void HandleUnlock(::System::UInt32 a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_HANDLEUNLOCK_OFFSET))(this, a1, a2);
		}

		::System::Void AcquireFlag(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_ACQUIREFLAG_OFFSET))(this, a1);
		}

		::System::Void ReleaseFlag(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_RELEASEFLAG_OFFSET))(this, a1);
		}

		::System::Void ShieldFlag(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_SHIELDFLAG_OFFSET))(this, a1);
		}

		::System::Void RecoverFlag(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_RECOVERFLAG_OFFSET))(this, a1);
		}

		::System::Boolean HasFlag(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_HASFLAG_OFFSET))(this, a1);
		}

		::System::Void ClearLockFlags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_CLEARLOCKFLAGS_OFFSET))(this);
		}

		::System::Void AddChangeCallBack(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_ADDCHANGECALLBACK_OFFSET))(this, a1);
		}

		::System::Void RemoveChangeCallBack(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_REMOVECHANGECALLBACK_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_340* _GetFlag(::System::UInt32 a1)
		{
			return ((::Class_0_16E4307DCC419505_340*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC__GETFLAG_OFFSET))(this, a1);
		}

		::System::Void _RefreshLockStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC__REFRESHLOCKSTATUS_OFFSET))(this);
		}

		::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_LOCK_OFFSET))(this, a1);
		}

		::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_UNLOCK_OFFSET))(this, a1);
		}

		::System::Void RefreshLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKTARGETFUNC_REFRESHLOCK_OFFSET))(this);
		}
	};
}
