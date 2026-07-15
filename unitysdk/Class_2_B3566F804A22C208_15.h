#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_340;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3566F804A22C208_15_LOCK_OFFSET UNITYSDK_OFFSET(0x17FAD700)
#define CLASS_2_B3566F804A22C208_15_UNLOCK_OFFSET UNITYSDK_OFFSET(0x17FAD7D0)
#define CLASS_2_B3566F804A22C208_15__CTOR_OFFSET UNITYSDK_OFFSET(0x17FAD6F0)

inline static constexpr unsigned int Class_2_B3566F804A22C208_15_TypeDefinitionIndex = 71340;

class Class_2_B3566F804A22C208_15 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_340*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_340*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_15__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_15_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_15_UNLOCK_OFFSET))(this, a1);
	}
};
