#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_359;
namespace RPG::Client { class AdventurePhase; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3566F804A22C208_2_LOCK_OFFSET UNITYSDK_OFFSET(0xE048680)
#define CLASS_2_B3566F804A22C208_2_METHOD_2_360E094414677C3D_OFFSET UNITYSDK_OFFSET(0xE0486F0)
#define CLASS_2_B3566F804A22C208_2_UNLOCK_OFFSET UNITYSDK_OFFSET(0xE048800)
#define CLASS_2_B3566F804A22C208_2__CTOR_OFFSET UNITYSDK_OFFSET(0xE048670)

inline static constexpr unsigned int Class_2_B3566F804A22C208_2_TypeDefinitionIndex = 74625;

class Class_2_B3566F804A22C208_2 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_359*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_359*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_2_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_2_UNLOCK_OFFSET))(this, a1);
	}

	::RPG::Client::AdventurePhase* Method_2_360E094414677C3D()
	{
		return ((::RPG::Client::AdventurePhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_2_METHOD_2_360E094414677C3D_OFFSET))(this);
	}
};
