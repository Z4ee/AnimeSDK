#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_260;
namespace RPG::Client { class UIController; }

#define CLASS_1_5772346ACD452D08___LOADMAINUI_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA21B0F0)
#define CLASS_1_5772346ACD452D08___LOADMAINUI_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA21B150)
#define CLASS_1_5772346ACD452D08___LOADMAINUI_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA21B1B0)
#define CLASS_1_5772346ACD452D08___LOADMAINUI_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA21B160)
#define CLASS_1_5772346ACD452D08___LOADMAINUI_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA21B0E0)
#define CLASS_1_5772346ACD452D08___LOADMAINUI_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0xA21A2B0)

inline static constexpr unsigned int Class_1_5772346ACD452D08___LoadMainUI_d__13_TypeDefinitionIndex = 49599;

class Class_1_5772346ACD452D08___LoadMainUI_d__13 : public ::System::Object
{
public:
	::RPG::Client::UIController* uiController; // 0x10
	::Class_0_16E4307DCC419505_260* __2__current; // 0x18
	::System::Int32 __1__state; // 0x20

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5772346ACD452D08___LOADMAINUI_D__13__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5772346ACD452D08___LOADMAINUI_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5772346ACD452D08___LOADMAINUI_D__13_MOVENEXT_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_260* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
	{
		return ((::Class_0_16E4307DCC419505_260*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5772346ACD452D08___LOADMAINUI_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5772346ACD452D08___LOADMAINUI_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5772346ACD452D08___LOADMAINUI_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
