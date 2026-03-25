#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BabyHipplenController;

#define BABYHIPPLENCONTROLLER__LERPLOOKATHEADWEIGHT_D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8FC9ED0)
#define BABYHIPPLENCONTROLLER__LERPLOOKATHEADWEIGHT_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8FCA050)
#define BABYHIPPLENCONTROLLER__LERPLOOKATHEADWEIGHT_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8FCA0B0)
#define BABYHIPPLENCONTROLLER__LERPLOOKATHEADWEIGHT_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x8FCA060)
#define BABYHIPPLENCONTROLLER__LERPLOOKATHEADWEIGHT_D__42_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FC9EC0)
#define BABYHIPPLENCONTROLLER__LERPLOOKATHEADWEIGHT_D__42__CTOR_OFFSET UNITYSDK_OFFSET(0x8FC7710)

inline static constexpr unsigned int BabyHipplenController__LerpLookAtHeadWeight_d__42_TypeDefinitionIndex = 38103;

class BabyHipplenController__LerpLookAtHeadWeight_d__42 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::BabyHipplenController* __4__this; // 0x18
	::System::Single target; // 0x20
	::System::Single _startTime_5__2; // 0x24
	::System::Int32 __1__state; // 0x28
	::System::Single time; // 0x2C

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__LERPLOOKATHEADWEIGHT_D__42__CTOR_OFFSET))(this, __1__state);
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
