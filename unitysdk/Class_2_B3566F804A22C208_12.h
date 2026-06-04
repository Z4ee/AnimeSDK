#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_316;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3566F804A22C208_12_LOCK_OFFSET UNITYSDK_OFFSET(0xC455F70)
#define CLASS_2_B3566F804A22C208_12_METHOD_2_E95A4606AAD9C63C_OFFSET UNITYSDK_OFFSET(0xC455FC0)
#define CLASS_2_B3566F804A22C208_12_UNLOCK_OFFSET UNITYSDK_OFFSET(0xC456200)
#define CLASS_2_B3566F804A22C208_12__CTOR_OFFSET UNITYSDK_OFFSET(0xC455F60)
#define CLASS_2_B3566F804A22C208_12___IFIXBASEPROXY_LOCK_OFFSET UNITYSDK_OFFSET(0xC456250)
#define CLASS_2_B3566F804A22C208_12___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0xC4562B0)

inline static constexpr unsigned int Class_2_B3566F804A22C208_12_TypeDefinitionIndex = 69811;

class Class_2_B3566F804A22C208_12 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_316*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_316*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_12__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_12_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_12_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_2_E95A4606AAD9C63C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_12_METHOD_2_E95A4606AAD9C63C_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_12___IFIXBASEPROXY_LOCK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_12___IFIXBASEPROXY_UNLOCK_OFFSET))(this, a1);
	}
};
