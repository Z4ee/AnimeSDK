#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_359;
namespace RPG::GameCore { class GameWorld; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3566F804A22C208_6_LOCK_OFFSET UNITYSDK_OFFSET(0x134EB670)
#define CLASS_2_B3566F804A22C208_6_METHOD_2_5BA53D8A3BEDBB04_OFFSET UNITYSDK_OFFSET(0x134EB860)
#define CLASS_2_B3566F804A22C208_6_METHOD_2_D23BF0D9B6C3246E_OFFSET UNITYSDK_OFFSET(0x134EBD30)
#define CLASS_2_B3566F804A22C208_6_UNLOCK_OFFSET UNITYSDK_OFFSET(0x134EBAF0)
#define CLASS_2_B3566F804A22C208_6__CTOR_OFFSET UNITYSDK_OFFSET(0x134EB660)

inline static constexpr unsigned int Class_2_B3566F804A22C208_6_TypeDefinitionIndex = 74630;

class Class_2_B3566F804A22C208_6 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_359*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_359*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_6_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_6_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_2_D23BF0D9B6C3246E(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_6_METHOD_2_D23BF0D9B6C3246E_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameWorld* Method_2_5BA53D8A3BEDBB04()
	{
		return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_6_METHOD_2_5BA53D8A3BEDBB04_OFFSET))(this);
	}
};
