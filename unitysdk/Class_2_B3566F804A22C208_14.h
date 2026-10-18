#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_440;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3566F804A22C208_14_LOCK_OFFSET UNITYSDK_OFFSET(0xB4A0EC0)
#define CLASS_2_B3566F804A22C208_14_METHOD_2_46D78B8894C3D058_OFFSET UNITYSDK_OFFSET(0xB4A0F10)
#define CLASS_2_B3566F804A22C208_14_UNLOCK_OFFSET UNITYSDK_OFFSET(0xB4A1020)
#define CLASS_2_B3566F804A22C208_14__CTOR_OFFSET UNITYSDK_OFFSET(0xB4A0EB0)

inline static constexpr unsigned int Class_2_B3566F804A22C208_14_TypeDefinitionIndex = 74786;

class Class_2_B3566F804A22C208_14 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_440*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_440*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_14__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_14_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_14_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_2_46D78B8894C3D058(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_14_METHOD_2_46D78B8894C3D058_OFFSET))(this, a1);
	}
};
