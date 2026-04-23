#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_303;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3566F804A22C208_8_LOCK_OFFSET UNITYSDK_OFFSET(0x11C24020)
#define CLASS_2_B3566F804A22C208_8_METHOD_2_446196FA4D8C65AD_OFFSET UNITYSDK_OFFSET(0x11C241A0)
#define CLASS_2_B3566F804A22C208_8_REFRESHLOCK_OFFSET UNITYSDK_OFFSET(0x11C24160)
#define CLASS_2_B3566F804A22C208_8_UNLOCK_OFFSET UNITYSDK_OFFSET(0x11C240C0)
#define CLASS_2_B3566F804A22C208_8__CTOR_OFFSET UNITYSDK_OFFSET(0x11C24010)
#define CLASS_2_B3566F804A22C208_8___IFIXBASEPROXY_LOCK_OFFSET UNITYSDK_OFFSET(0x11C241B0)
#define CLASS_2_B3566F804A22C208_8___IFIXBASEPROXY_REFRESHLOCK_OFFSET UNITYSDK_OFFSET(0x11C24290)
#define CLASS_2_B3566F804A22C208_8___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x11C24220)

inline static constexpr unsigned int Class_2_B3566F804A22C208_8_TypeDefinitionIndex = 68991;

class Class_2_B3566F804A22C208_8 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_8_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_8_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void RefreshLock()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_8_REFRESHLOCK_OFFSET))(this);
	}

	::RPG::Client::GamePlayLockTarget Method_2_446196FA4D8C65AD()
	{
		return ((::RPG::Client::GamePlayLockTarget(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_8_METHOD_2_446196FA4D8C65AD_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Lock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_8___IFIXBASEPROXY_LOCK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Unlock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_8___IFIXBASEPROXY_UNLOCK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_RefreshLock()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_8___IFIXBASEPROXY_REFRESHLOCK_OFFSET))(this);
	}
};
