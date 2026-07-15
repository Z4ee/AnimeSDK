#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_340;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOCKTARGETFUNC_PLAYERCONTROLLOCKTARGET_LOCK_OFFSET UNITYSDK_OFFSET(0x15BCD180)
#define RPG_CLIENT_LOCKTARGETFUNC_PLAYERCONTROLLOCKTARGET_UNLOCK_OFFSET UNITYSDK_OFFSET(0x15BCD440)
#define RPG_CLIENT_LOCKTARGETFUNC_PLAYERCONTROLLOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x15BCD170)

namespace RPG::Client::LockTargetFunc
{
	inline static constexpr unsigned int PlayerControlLockTarget_TypeDefinitionIndex = 71342;

	class PlayerControlLockTarget : public ::RPG::Client::GamePlayLockTargetFunc
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_340*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_340*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCKTARGETFUNC_PLAYERCONTROLLOCKTARGET__CTOR_OFFSET))(this, a1);
		}

		::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCKTARGETFUNC_PLAYERCONTROLLOCKTARGET_LOCK_OFFSET))(this, a1);
		}

		::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCKTARGETFUNC_PLAYERCONTROLLOCKTARGET_UNLOCK_OFFSET))(this, a1);
		}
	};
}
