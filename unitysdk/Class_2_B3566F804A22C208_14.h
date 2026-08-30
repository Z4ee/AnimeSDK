#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_359;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3566F804A22C208_14_LOCK_OFFSET UNITYSDK_OFFSET(0x18F80380)
#define CLASS_2_B3566F804A22C208_14_UNLOCK_OFFSET UNITYSDK_OFFSET(0x18F80790)
#define CLASS_2_B3566F804A22C208_14__CTOR_OFFSET UNITYSDK_OFFSET(0x18F80370)

inline static constexpr unsigned int Class_2_B3566F804A22C208_14_TypeDefinitionIndex = 74644;

class Class_2_B3566F804A22C208_14 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_359*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_359*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_14__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_14_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_14_UNLOCK_OFFSET))(this, a1);
	}
};
