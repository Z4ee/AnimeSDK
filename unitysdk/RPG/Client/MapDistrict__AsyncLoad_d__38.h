#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_265;
namespace RPG::Client { class MapDistrict; }

#define RPG_CLIENT_MAPDISTRICT__ASYNCLOAD_D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA7F19D0)
#define RPG_CLIENT_MAPDISTRICT__ASYNCLOAD_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA7F1DF0)
#define RPG_CLIENT_MAPDISTRICT__ASYNCLOAD_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA7F1E50)
#define RPG_CLIENT_MAPDISTRICT__ASYNCLOAD_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA7F1E00)
#define RPG_CLIENT_MAPDISTRICT__ASYNCLOAD_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7F19C0)
#define RPG_CLIENT_MAPDISTRICT__ASYNCLOAD_D__38__CTOR_OFFSET UNITYSDK_OFFSET(0xA7F1250)

namespace RPG::Client
{
	inline static constexpr unsigned int MapDistrict__AsyncLoad_d__38_TypeDefinitionIndex = 56138;

	class MapDistrict__AsyncLoad_d__38 : public ::System::Object
	{
	public:
		::RPG::Client::MapDistrict* __4__this; // 0x10
		::Class_0_16E4307DCC419505_265* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT__ASYNCLOAD_D__38__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT__ASYNCLOAD_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT__ASYNCLOAD_D__38_MOVENEXT_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_265* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::Class_0_16E4307DCC419505_265*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT__ASYNCLOAD_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT__ASYNCLOAD_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT__ASYNCLOAD_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
