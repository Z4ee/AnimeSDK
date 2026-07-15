#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_340;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3566F804A22C208_8_LOCK_OFFSET UNITYSDK_OFFSET(0x192461E0)
#define CLASS_2_B3566F804A22C208_8_METHOD_2_67BED22BBA5D754E_OFFSET UNITYSDK_OFFSET(0x19246230)
#define CLASS_2_B3566F804A22C208_8_UNLOCK_OFFSET UNITYSDK_OFFSET(0x19246400)
#define CLASS_2_B3566F804A22C208_8__CTOR_OFFSET UNITYSDK_OFFSET(0x192461D0)

inline static constexpr unsigned int Class_2_B3566F804A22C208_8_TypeDefinitionIndex = 71325;

class Class_2_B3566F804A22C208_8 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_340*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_340*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_8_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_8_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_2_67BED22BBA5D754E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_8_METHOD_2_67BED22BBA5D754E_OFFSET))(this, a1);
	}
};
