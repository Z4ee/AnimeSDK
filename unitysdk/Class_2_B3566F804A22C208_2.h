#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_303;
namespace RPG::Client { class AdventurePhase; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3566F804A22C208_2_LOCK_OFFSET UNITYSDK_OFFSET(0x123A3F50)
#define CLASS_2_B3566F804A22C208_2_METHOD_2_F67613BBE28769B5_OFFSET UNITYSDK_OFFSET(0x123A3FC0)
#define CLASS_2_B3566F804A22C208_2_UNLOCK_OFFSET UNITYSDK_OFFSET(0x123A40C0)
#define CLASS_2_B3566F804A22C208_2__CTOR_OFFSET UNITYSDK_OFFSET(0x123A3F40)
#define CLASS_2_B3566F804A22C208_2___IFIXBASEPROXY_LOCK_OFFSET UNITYSDK_OFFSET(0x123A4130)
#define CLASS_2_B3566F804A22C208_2___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x123A41A0)

inline static constexpr unsigned int Class_2_B3566F804A22C208_2_TypeDefinitionIndex = 68983;

class Class_2_B3566F804A22C208_2 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_2_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_2_UNLOCK_OFFSET))(this, a1);
	}

	::RPG::Client::AdventurePhase* Method_2_F67613BBE28769B5()
	{
		return ((::RPG::Client::AdventurePhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_2_METHOD_2_F67613BBE28769B5_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Lock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_2___IFIXBASEPROXY_LOCK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Unlock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_2___IFIXBASEPROXY_UNLOCK_OFFSET))(this, P0);
	}
};
