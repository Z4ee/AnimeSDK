#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_40CD5CE8474BAA94;
class Class_1_EB7FD32C4AD9446F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_40CD5CE8474BAA94__UPGRADEDICEPERFORMANCE_D__53_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13A3DDC0)
#define CLASS_1_40CD5CE8474BAA94__UPGRADEDICEPERFORMANCE_D__53_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13A3E4A0)
#define CLASS_1_40CD5CE8474BAA94__UPGRADEDICEPERFORMANCE_D__53_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13A3E500)
#define CLASS_1_40CD5CE8474BAA94__UPGRADEDICEPERFORMANCE_D__53_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x13A3E4B0)
#define CLASS_1_40CD5CE8474BAA94__UPGRADEDICEPERFORMANCE_D__53_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A3DDA0)
#define CLASS_1_40CD5CE8474BAA94__UPGRADEDICEPERFORMANCE_D__53__CTOR_OFFSET UNITYSDK_OFFSET(0x13A35A40)

inline static constexpr unsigned int Class_1_40CD5CE8474BAA94__UpgradeDicePerformance_d__53_TypeDefinitionIndex = 56384;

class Class_1_40CD5CE8474BAA94__UpgradeDicePerformance_d__53 : public ::System::Object
{
public:
	::Class_1_EB7FD32C4AD9446F* entityDiff; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* _newDicePool_5__3; // 0x18
	::Class_1_40CD5CE8474BAA94* __4__this; // 0x20
	::System::Object* __2__current; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* _oldDicePool_5__2; // 0x30
	::System::Int32 __1__state; // 0x38
	::System::UInt32 triggerEntityUID; // 0x3C
	::System::UInt32 entityUID; // 0x40

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94__UPGRADEDICEPERFORMANCE_D__53__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94__UPGRADEDICEPERFORMANCE_D__53_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94__UPGRADEDICEPERFORMANCE_D__53_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94__UPGRADEDICEPERFORMANCE_D__53_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94__UPGRADEDICEPERFORMANCE_D__53_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94__UPGRADEDICEPERFORMANCE_D__53_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
