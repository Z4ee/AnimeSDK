#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_295;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOCKTARGETFUNC_PLAYERCONTROLLOCKTARGET_LOCK_OFFSET UNITYSDK_OFFSET(0x9A51F00)
#define RPG_CLIENT_LOCKTARGETFUNC_PLAYERCONTROLLOCKTARGET_UNLOCK_OFFSET UNITYSDK_OFFSET(0x9A52190)
#define RPG_CLIENT_LOCKTARGETFUNC_PLAYERCONTROLLOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x9A51EF0)
#define RPG_CLIENT_LOCKTARGETFUNC_PLAYERCONTROLLOCKTARGET___IFIXBASEPROXY_LOCK_OFFSET UNITYSDK_OFFSET(0x9A522A0)
#define RPG_CLIENT_LOCKTARGETFUNC_PLAYERCONTROLLOCKTARGET___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x9A52310)

namespace RPG::Client::LockTargetFunc
{
	inline static constexpr unsigned int PlayerControlLockTarget_TypeDefinitionIndex = 61500;

	class PlayerControlLockTarget : public ::RPG::Client::GamePlayLockTargetFunc
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_295*>* flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_295*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCKTARGETFUNC_PLAYERCONTROLLOCKTARGET__CTOR_OFFSET))(this, flags);
		}

		::System::Void Lock(::Il2CppArray<::System::Object*>* lockParams)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCKTARGETFUNC_PLAYERCONTROLLOCKTARGET_LOCK_OFFSET))(this, lockParams);
		}

		::System::Void Unlock(::Il2CppArray<::System::Object*>* unlockParams)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCKTARGETFUNC_PLAYERCONTROLLOCKTARGET_UNLOCK_OFFSET))(this, unlockParams);
		}

		::System::Void __iFixBaseProxy_Lock(::Il2CppArray<::System::Object*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCKTARGETFUNC_PLAYERCONTROLLOCKTARGET___IFIXBASEPROXY_LOCK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Unlock(::Il2CppArray<::System::Object*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCKTARGETFUNC_PLAYERCONTROLLOCKTARGET___IFIXBASEPROXY_UNLOCK_OFFSET))(this, P0);
		}
	};
}
