#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_295;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3566F804A22C208_17_LOCK_OFFSET UNITYSDK_OFFSET(0xD144880)
#define CLASS_2_B3566F804A22C208_17_UNLOCK_OFFSET UNITYSDK_OFFSET(0xD144950)
#define CLASS_2_B3566F804A22C208_17__CTOR_OFFSET UNITYSDK_OFFSET(0xD144870)
#define CLASS_2_B3566F804A22C208_17___IFIXBASEPROXY_LOCK_OFFSET UNITYSDK_OFFSET(0xD144A20)
#define CLASS_2_B3566F804A22C208_17___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0xD144A90)

inline static constexpr unsigned int Class_2_B3566F804A22C208_17_TypeDefinitionIndex = 61498;

class Class_2_B3566F804A22C208_17 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_295*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_295*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_17__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_17_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_17_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Lock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_17___IFIXBASEPROXY_LOCK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Unlock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_17___IFIXBASEPROXY_UNLOCK_OFFSET))(this, P0);
	}
};
