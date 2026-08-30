#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_305;
namespace RPG::Client { class MapProp; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }

#define RPG_CLIENT_MAPPROP__ASYNCLOAD_D__59_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD604860)
#define RPG_CLIENT_MAPPROP__ASYNCLOAD_D__59_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD605280)
#define RPG_CLIENT_MAPPROP__ASYNCLOAD_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD6052E0)
#define RPG_CLIENT_MAPPROP__ASYNCLOAD_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD605290)
#define RPG_CLIENT_MAPPROP__ASYNCLOAD_D__59_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD604850)
#define RPG_CLIENT_MAPPROP__ASYNCLOAD_D__59__CTOR_OFFSET UNITYSDK_OFFSET(0xD6037E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapProp__AsyncLoad_d__59_TypeDefinitionIndex = 60982;

	class MapProp__AsyncLoad_d__59 : public ::System::Object
	{
	public:
		::RPG::Client::OpenWorld::StreamingItemData* _sceneObjHandler_5__2; // 0x10
		::Class_0_16E4307DCC419505_305* __2__current; // 0x18
		::RPG::Client::MapProp* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__ASYNCLOAD_D__59__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__ASYNCLOAD_D__59_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__ASYNCLOAD_D__59_MOVENEXT_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_305* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::Class_0_16E4307DCC419505_305*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__ASYNCLOAD_D__59_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__ASYNCLOAD_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__ASYNCLOAD_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
