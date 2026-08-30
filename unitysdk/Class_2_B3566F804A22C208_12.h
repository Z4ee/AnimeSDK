#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_359;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3566F804A22C208_12_LOCK_OFFSET UNITYSDK_OFFSET(0x1608EC10)
#define CLASS_2_B3566F804A22C208_12_METHOD_2_49B846BD97B39A13_OFFSET UNITYSDK_OFFSET(0x1608EC60)
#define CLASS_2_B3566F804A22C208_12_UNLOCK_OFFSET UNITYSDK_OFFSET(0x1608ED10)
#define CLASS_2_B3566F804A22C208_12__CTOR_OFFSET UNITYSDK_OFFSET(0x1608EC00)

inline static constexpr unsigned int Class_2_B3566F804A22C208_12_TypeDefinitionIndex = 74642;

class Class_2_B3566F804A22C208_12 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_359*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_359*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_12__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_12_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_12_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_2_49B846BD97B39A13(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_12_METHOD_2_49B846BD97B39A13_OFFSET))(this, a1);
	}
};
