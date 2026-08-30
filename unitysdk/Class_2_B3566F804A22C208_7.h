#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_359;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3566F804A22C208_7_LOCK_OFFSET UNITYSDK_OFFSET(0x15AA5770)
#define CLASS_2_B3566F804A22C208_7_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x15AA57C0)
#define CLASS_2_B3566F804A22C208_7_UNLOCK_OFFSET UNITYSDK_OFFSET(0x15AA58D0)
#define CLASS_2_B3566F804A22C208_7__CTOR_OFFSET UNITYSDK_OFFSET(0x15AA5760)

inline static constexpr unsigned int Class_2_B3566F804A22C208_7_TypeDefinitionIndex = 74631;

class Class_2_B3566F804A22C208_7 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_359*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_359*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_7__CTOR_OFFSET))(this, a1);
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
};
