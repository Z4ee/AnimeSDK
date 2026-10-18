#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_440;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3566F804A22C208_1_LOCK_OFFSET UNITYSDK_OFFSET(0xB719DA0)
#define CLASS_2_B3566F804A22C208_1_UNLOCK_OFFSET UNITYSDK_OFFSET(0xB719F10)
#define CLASS_2_B3566F804A22C208_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB719D90)

inline static constexpr unsigned int Class_2_B3566F804A22C208_1_TypeDefinitionIndex = 74767;

class Class_2_B3566F804A22C208_1 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_440*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_440*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_1_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_1_UNLOCK_OFFSET))(this, a1);
	}
};
