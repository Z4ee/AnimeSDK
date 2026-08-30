#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightStageNode; }
namespace RPG::Client { class GridFightStageRoute; }

#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD330460)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_GRIDFIGHTSTAGENODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD330660)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD3306C0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD330670)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD330440)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__5__CTOR_OFFSET UNITYSDK_OFFSET(0xD32FEA0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__5___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xD330450)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStageRoute__GetEnumerator_d__5_TypeDefinitionIndex = 65312;

	class GridFightStageRoute__GetEnumerator_d__5 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1_Enumerator<::RPG::Client::GridFightStageNode*> __7__wrap2; // 0x10
		::RPG::Client::GridFightStageRoute* __4__this; // 0x28
		::RPG::Client::GridFightStageNode* __2__current; // 0x30
		::System::UInt32 _chapterID_5__2; // 0x38
		::System::Int32 __1__state; // 0x3C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__5__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__5_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__5___M__FINALLY1_OFFSET))(this);
		}

		::RPG::Client::GridFightStageNode* System_Collections_Generic_IEnumerator_RPG_Client_GridFightStageNode__get_Current()
		{
			return ((::RPG::Client::GridFightStageNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_GRIDFIGHTSTAGENODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE__GETENUMERATOR_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
