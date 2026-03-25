#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_295;
namespace RPG::GameCore { class GameWorld; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3566F804A22C208_7_LOCK_OFFSET UNITYSDK_OFFSET(0x10658700)
#define CLASS_2_B3566F804A22C208_7_METHOD_2_EA4A1D7B94DA7C73_OFFSET UNITYSDK_OFFSET(0x10658900)
#define CLASS_2_B3566F804A22C208_7_UNLOCK_OFFSET UNITYSDK_OFFSET(0x10658AB0)
#define CLASS_2_B3566F804A22C208_7__CTOR_OFFSET UNITYSDK_OFFSET(0x106586F0)
#define CLASS_2_B3566F804A22C208_7___IFIXBASEPROXY_LOCK_OFFSET UNITYSDK_OFFSET(0x10658CB0)
#define CLASS_2_B3566F804A22C208_7___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x10658D20)

inline static constexpr unsigned int Class_2_B3566F804A22C208_7_TypeDefinitionIndex = 61481;

class Class_2_B3566F804A22C208_7 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_295*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_295*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_7_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_7_UNLOCK_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameWorld* Method_2_EA4A1D7B94DA7C73()
	{
		return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_7_METHOD_2_EA4A1D7B94DA7C73_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Lock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_7___IFIXBASEPROXY_LOCK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Unlock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_7___IFIXBASEPROXY_UNLOCK_OFFSET))(this, P0);
	}
};
