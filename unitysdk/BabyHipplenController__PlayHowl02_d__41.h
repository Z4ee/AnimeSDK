#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BabyHipplenController;

#define BABYHIPPLENCONTROLLER__PLAYHOWL02_D__41_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8FCA530)
#define BABYHIPPLENCONTROLLER__PLAYHOWL02_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8FCA820)
#define BABYHIPPLENCONTROLLER__PLAYHOWL02_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8FCA880)
#define BABYHIPPLENCONTROLLER__PLAYHOWL02_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x8FCA830)
#define BABYHIPPLENCONTROLLER__PLAYHOWL02_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FCA520)
#define BABYHIPPLENCONTROLLER__PLAYHOWL02_D__41__CTOR_OFFSET UNITYSDK_OFFSET(0x8FC7650)

inline static constexpr unsigned int BabyHipplenController__PlayHowl02_d__41_TypeDefinitionIndex = 38105;

class BabyHipplenController__PlayHowl02_d__41 : public ::System::Object
{
public:
	::BabyHipplenController* __4__this; // 0x10
	::System::Object* __2__current; // 0x18
	::System::Int32 __1__state; // 0x20

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__PLAYHOWL02_D__41__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__PLAYHOWL02_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__PLAYHOWL02_D__41_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__PLAYHOWL02_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__PLAYHOWL02_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__PLAYHOWL02_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
