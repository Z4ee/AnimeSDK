#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/QA/QAManager_Message.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE7E4450)
#define RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE7E5400)
#define RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE7E5460)
#define RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xE7E5410)
#define RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE7E4440)
#define RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42__CTOR_OFFSET UNITYSDK_OFFSET(0xE7E42D0)

namespace RPG::QA
{
	inline static constexpr unsigned int QAManager___SendMessageToApmCo_d__42_TypeDefinitionIndex = 52113;

	class QAManager___SendMessageToApmCo_d__42 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* callback; // 0x10
		::System::Object* __2__current; // 0x18
		::RPG::QA::QAManager_Message message; // 0x20
		::System::Int32 __1__state; // 0x40

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
