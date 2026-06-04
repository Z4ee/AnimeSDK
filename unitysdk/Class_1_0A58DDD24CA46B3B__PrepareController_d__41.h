#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0A58DDD24CA46B3B;

#define CLASS_1_0A58DDD24CA46B3B__PREPARECONTROLLER_D__41_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB2B7C90)
#define CLASS_1_0A58DDD24CA46B3B__PREPARECONTROLLER_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB2B80B0)
#define CLASS_1_0A58DDD24CA46B3B__PREPARECONTROLLER_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB2B8110)
#define CLASS_1_0A58DDD24CA46B3B__PREPARECONTROLLER_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB2B80C0)
#define CLASS_1_0A58DDD24CA46B3B__PREPARECONTROLLER_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2B7C80)
#define CLASS_1_0A58DDD24CA46B3B__PREPARECONTROLLER_D__41__CTOR_OFFSET UNITYSDK_OFFSET(0xB2B7670)

inline static constexpr unsigned int Class_1_0A58DDD24CA46B3B__PrepareController_d__41_TypeDefinitionIndex = 68373;

class Class_1_0A58DDD24CA46B3B__PrepareController_d__41 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::Class_1_0A58DDD24CA46B3B* __4__this; // 0x18
	::System::Int32 __1__state; // 0x20
	::System::Int32 videoIndex; // 0x24
	::System::Int32 controllerIndex; // 0x28

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B__PREPARECONTROLLER_D__41__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B__PREPARECONTROLLER_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B__PREPARECONTROLLER_D__41_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B__PREPARECONTROLLER_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B__PREPARECONTROLLER_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B__PREPARECONTROLLER_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
