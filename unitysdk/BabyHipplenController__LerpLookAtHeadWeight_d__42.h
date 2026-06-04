#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BabyHipplenController;

#define BABYHIPPLENCONTROLLER__LERPLOOKATHEADWEIGHT_D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB0373C0)
#define BABYHIPPLENCONTROLLER__LERPLOOKATHEADWEIGHT_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB037540)
#define BABYHIPPLENCONTROLLER__LERPLOOKATHEADWEIGHT_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB0375A0)
#define BABYHIPPLENCONTROLLER__LERPLOOKATHEADWEIGHT_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB037550)
#define BABYHIPPLENCONTROLLER__LERPLOOKATHEADWEIGHT_D__42_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0373B0)
#define BABYHIPPLENCONTROLLER__LERPLOOKATHEADWEIGHT_D__42__CTOR_OFFSET UNITYSDK_OFFSET(0xB034C10)

inline static constexpr unsigned int BabyHipplenController__LerpLookAtHeadWeight_d__42_TypeDefinitionIndex = 44533;

class BabyHipplenController__LerpLookAtHeadWeight_d__42 : public ::System::Object
{
public:
	::BabyHipplenController* __4__this; // 0x10
	::System::Object* __2__current; // 0x18
	::System::Single target; // 0x20
	::System::Single time; // 0x24
	::System::Single _startTime_5__2; // 0x28
	::System::Int32 __1__state; // 0x2C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__LERPLOOKATHEADWEIGHT_D__42__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__LERPLOOKATHEADWEIGHT_D__42_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__LERPLOOKATHEADWEIGHT_D__42_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__LERPLOOKATHEADWEIGHT_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__LERPLOOKATHEADWEIGHT_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__LERPLOOKATHEADWEIGHT_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
