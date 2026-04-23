#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_303;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3566F804A22C208_11_LOCK_OFFSET UNITYSDK_OFFSET(0xB4B8F20)
#define CLASS_2_B3566F804A22C208_11_METHOD_2_D2260F16F48CA325_OFFSET UNITYSDK_OFFSET(0xB4B9010)
#define CLASS_2_B3566F804A22C208_11_UNLOCK_OFFSET UNITYSDK_OFFSET(0xB4B90C0)
#define CLASS_2_B3566F804A22C208_11__CTOR_OFFSET UNITYSDK_OFFSET(0xB4B8F10)
#define CLASS_2_B3566F804A22C208_11___IFIXBASEPROXY_LOCK_OFFSET UNITYSDK_OFFSET(0xB4B91B0)
#define CLASS_2_B3566F804A22C208_11___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0xB4B9220)

inline static constexpr unsigned int Class_2_B3566F804A22C208_11_TypeDefinitionIndex = 69000;

class Class_2_B3566F804A22C208_11 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_11__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_11_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_11_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2260F16F48CA325(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_11_METHOD_2_D2260F16F48CA325_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Lock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_11___IFIXBASEPROXY_LOCK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Unlock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_11___IFIXBASEPROXY_UNLOCK_OFFSET))(this, P0);
	}
};
