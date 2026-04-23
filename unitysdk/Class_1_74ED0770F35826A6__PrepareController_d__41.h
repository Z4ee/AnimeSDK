#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_74ED0770F35826A6;

#define CLASS_1_74ED0770F35826A6__PREPARECONTROLLER_D__41_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xECB6580)
#define CLASS_1_74ED0770F35826A6__PREPARECONTROLLER_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xECB6A00)
#define CLASS_1_74ED0770F35826A6__PREPARECONTROLLER_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xECB6A60)
#define CLASS_1_74ED0770F35826A6__PREPARECONTROLLER_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xECB6A10)
#define CLASS_1_74ED0770F35826A6__PREPARECONTROLLER_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xECB6570)
#define CLASS_1_74ED0770F35826A6__PREPARECONTROLLER_D__41__CTOR_OFFSET UNITYSDK_OFFSET(0xECB5F80)

inline static constexpr unsigned int Class_1_74ED0770F35826A6__PrepareController_d__41_TypeDefinitionIndex = 67421;

class Class_1_74ED0770F35826A6__PrepareController_d__41 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::Class_1_74ED0770F35826A6* __4__this; // 0x18
	::System::Int32 __1__state; // 0x20
	::System::Int32 videoIndex; // 0x24
	::System::Int32 controllerIndex; // 0x28

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6__PREPARECONTROLLER_D__41__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6__PREPARECONTROLLER_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6__PREPARECONTROLLER_D__41_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6__PREPARECONTROLLER_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6__PREPARECONTROLLER_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74ED0770F35826A6__PREPARECONTROLLER_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
