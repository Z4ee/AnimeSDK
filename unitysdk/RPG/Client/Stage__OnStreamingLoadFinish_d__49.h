#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_278;
namespace RPG::Client { class Stage; }

#define RPG_CLIENT_STAGE__ONSTREAMINGLOADFINISH_D__49_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC902130)
#define RPG_CLIENT_STAGE__ONSTREAMINGLOADFINISH_D__49_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC9021B0)
#define RPG_CLIENT_STAGE__ONSTREAMINGLOADFINISH_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC902210)
#define RPG_CLIENT_STAGE__ONSTREAMINGLOADFINISH_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC9021C0)
#define RPG_CLIENT_STAGE__ONSTREAMINGLOADFINISH_D__49_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC902120)
#define RPG_CLIENT_STAGE__ONSTREAMINGLOADFINISH_D__49__CTOR_OFFSET UNITYSDK_OFFSET(0xC8FF0A0)

namespace RPG::Client
{
	inline static constexpr unsigned int Stage__OnStreamingLoadFinish_d__49_TypeDefinitionIndex = 64975;

	class Stage__OnStreamingLoadFinish_d__49 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_278* __2__current; // 0x10
		::RPG::Client::Stage* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE__ONSTREAMINGLOADFINISH_D__49__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE__ONSTREAMINGLOADFINISH_D__49_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE__ONSTREAMINGLOADFINISH_D__49_MOVENEXT_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_278* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::Class_0_16E4307DCC419505_278*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE__ONSTREAMINGLOADFINISH_D__49_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE__ONSTREAMINGLOADFINISH_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE__ONSTREAMINGLOADFINISH_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
