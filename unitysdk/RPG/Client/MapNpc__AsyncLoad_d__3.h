#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_298;
namespace RPG::Client { class MapNpc; }

#define RPG_CLIENT_MAPNPC__ASYNCLOAD_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17FF9070)
#define RPG_CLIENT_MAPNPC__ASYNCLOAD_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17FF9320)
#define RPG_CLIENT_MAPNPC__ASYNCLOAD_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17FF9380)
#define RPG_CLIENT_MAPNPC__ASYNCLOAD_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17FF9330)
#define RPG_CLIENT_MAPNPC__ASYNCLOAD_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17FF9060)
#define RPG_CLIENT_MAPNPC__ASYNCLOAD_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0x17FF8690)

namespace RPG::Client
{
	inline static constexpr unsigned int MapNpc__AsyncLoad_d__3_TypeDefinitionIndex = 58151;

	class MapNpc__AsyncLoad_d__3 : public ::System::Object
	{
	public:
		::RPG::Client::MapNpc* __4__this; // 0x10
		::Class_0_16E4307DCC419505_298* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC__ASYNCLOAD_D__3__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC__ASYNCLOAD_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC__ASYNCLOAD_D__3_MOVENEXT_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_298* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::Class_0_16E4307DCC419505_298*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC__ASYNCLOAD_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC__ASYNCLOAD_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC__ASYNCLOAD_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
