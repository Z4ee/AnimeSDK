#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_303;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3566F804A22C208_12_LOCK_OFFSET UNITYSDK_OFFSET(0xC6FA4C0)
#define CLASS_2_B3566F804A22C208_12_METHOD_2_A6B0F2C779192279_OFFSET UNITYSDK_OFFSET(0xC6FA510)
#define CLASS_2_B3566F804A22C208_12_UNLOCK_OFFSET UNITYSDK_OFFSET(0xC6FA5B0)
#define CLASS_2_B3566F804A22C208_12__CTOR_OFFSET UNITYSDK_OFFSET(0xC6FA4B0)
#define CLASS_2_B3566F804A22C208_12___IFIXBASEPROXY_LOCK_OFFSET UNITYSDK_OFFSET(0xC6FA600)
#define CLASS_2_B3566F804A22C208_12___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0xC6FA670)

inline static constexpr unsigned int Class_2_B3566F804A22C208_12_TypeDefinitionIndex = 69001;

class Class_2_B3566F804A22C208_12 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_12__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_12_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_12_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A6B0F2C779192279(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_12_METHOD_2_A6B0F2C779192279_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Lock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_12___IFIXBASEPROXY_LOCK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Unlock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_12___IFIXBASEPROXY_UNLOCK_OFFSET))(this, P0);
	}
};
