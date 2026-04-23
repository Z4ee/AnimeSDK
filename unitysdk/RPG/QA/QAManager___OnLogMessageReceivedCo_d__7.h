#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace System { class String; }

#define RPG_QA_QAMANAGER___ONLOGMESSAGERECEIVEDCO_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB86EE00)
#define RPG_QA_QAMANAGER___ONLOGMESSAGERECEIVEDCO_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB86EE80)
#define RPG_QA_QAMANAGER___ONLOGMESSAGERECEIVEDCO_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB86EEE0)
#define RPG_QA_QAMANAGER___ONLOGMESSAGERECEIVEDCO_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB86EE90)
#define RPG_QA_QAMANAGER___ONLOGMESSAGERECEIVEDCO_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB86EDF0)
#define RPG_QA_QAMANAGER___ONLOGMESSAGERECEIVEDCO_D__7__CTOR_OFFSET UNITYSDK_OFFSET(0xB86D820)

namespace RPG::QA
{
	inline static constexpr unsigned int QAManager___OnLogMessageReceivedCo_d__7_TypeDefinitionIndex = 47833;

	class QAManager___OnLogMessageReceivedCo_d__7 : public ::System::Object
	{
	public:
		::System::String* message; // 0x10
		::System::Object* __2__current; // 0x18
		::System::String* stackTrace; // 0x20
		::UnityEngine::LogType type; // 0x28
		::System::Int32 __1__state; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER___ONLOGMESSAGERECEIVEDCO_D__7__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER___ONLOGMESSAGERECEIVEDCO_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER___ONLOGMESSAGERECEIVEDCO_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER___ONLOGMESSAGERECEIVEDCO_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER___ONLOGMESSAGERECEIVEDCO_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER___ONLOGMESSAGERECEIVEDCO_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
