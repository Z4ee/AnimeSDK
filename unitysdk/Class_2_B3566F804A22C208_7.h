#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_303;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3566F804A22C208_7_LOCK_OFFSET UNITYSDK_OFFSET(0x12429FD0)
#define CLASS_2_B3566F804A22C208_7_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x1242A020)
#define CLASS_2_B3566F804A22C208_7_UNLOCK_OFFSET UNITYSDK_OFFSET(0x1242A130)
#define CLASS_2_B3566F804A22C208_7__CTOR_OFFSET UNITYSDK_OFFSET(0x12429FC0)
#define CLASS_2_B3566F804A22C208_7___IFIXBASEPROXY_LOCK_OFFSET UNITYSDK_OFFSET(0x1242A180)
#define CLASS_2_B3566F804A22C208_7___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x1242A1F0)

inline static constexpr unsigned int Class_2_B3566F804A22C208_7_TypeDefinitionIndex = 68989;

class Class_2_B3566F804A22C208_7 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_7_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_7_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_7_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
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
