#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BabyHipplenController;

#define BABYHIPPLENCONTROLLER__PLAYHOWL01_D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9B92490)
#define BABYHIPPLENCONTROLLER__PLAYHOWL01_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9B92870)
#define BABYHIPPLENCONTROLLER__PLAYHOWL01_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9B928D0)
#define BABYHIPPLENCONTROLLER__PLAYHOWL01_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9B92880)
#define BABYHIPPLENCONTROLLER__PLAYHOWL01_D__40_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B92480)
#define BABYHIPPLENCONTROLLER__PLAYHOWL01_D__40__CTOR_OFFSET UNITYSDK_OFFSET(0x9B8F9F0)

inline static constexpr unsigned int BabyHipplenController__PlayHowl01_d__40_TypeDefinitionIndex = 43988;

class BabyHipplenController__PlayHowl01_d__40 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::BabyHipplenController* __4__this; // 0x18
	::System::Int32 __1__state; // 0x20

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__PLAYHOWL01_D__40__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__PLAYHOWL01_D__40_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__PLAYHOWL01_D__40_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__PLAYHOWL01_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__PLAYHOWL01_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__PLAYHOWL01_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
