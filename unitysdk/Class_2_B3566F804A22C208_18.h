#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_303;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3566F804A22C208_18_LOCK_OFFSET UNITYSDK_OFFSET(0x118A6380)
#define CLASS_2_B3566F804A22C208_18_UNLOCK_OFFSET UNITYSDK_OFFSET(0x118A6450)
#define CLASS_2_B3566F804A22C208_18__CTOR_OFFSET UNITYSDK_OFFSET(0x118A6370)
#define CLASS_2_B3566F804A22C208_18___IFIXBASEPROXY_LOCK_OFFSET UNITYSDK_OFFSET(0x118A6520)
#define CLASS_2_B3566F804A22C208_18___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x118A6590)

inline static constexpr unsigned int Class_2_B3566F804A22C208_18_TypeDefinitionIndex = 69008;

class Class_2_B3566F804A22C208_18 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_18__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_18_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_18_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Lock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_18___IFIXBASEPROXY_LOCK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Unlock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_18___IFIXBASEPROXY_UNLOCK_OFFSET))(this, P0);
	}
};
