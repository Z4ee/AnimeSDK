#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_295;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3566F804A22C208_19_LOCK_OFFSET UNITYSDK_OFFSET(0x104DE220)
#define CLASS_2_B3566F804A22C208_19_UNLOCK_OFFSET UNITYSDK_OFFSET(0x104DE2F0)
#define CLASS_2_B3566F804A22C208_19__CTOR_OFFSET UNITYSDK_OFFSET(0x104DE210)
#define CLASS_2_B3566F804A22C208_19___IFIXBASEPROXY_LOCK_OFFSET UNITYSDK_OFFSET(0x104DE3C0)
#define CLASS_2_B3566F804A22C208_19___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x104DE430)

inline static constexpr unsigned int Class_2_B3566F804A22C208_19_TypeDefinitionIndex = 61501;

class Class_2_B3566F804A22C208_19 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_295*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_295*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_19__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_19_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_19_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Lock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_19___IFIXBASEPROXY_LOCK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Unlock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_19___IFIXBASEPROXY_UNLOCK_OFFSET))(this, P0);
	}
};
