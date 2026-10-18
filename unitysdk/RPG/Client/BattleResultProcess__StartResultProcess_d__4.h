#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleResultProcess_ConfigItem; }
namespace System::Collections { class IEnumerator; }

#define RPG_CLIENT_BATTLERESULTPROCESS__STARTRESULTPROCESS_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC8528B0)
#define RPG_CLIENT_BATTLERESULTPROCESS__STARTRESULTPROCESS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC853130)
#define RPG_CLIENT_BATTLERESULTPROCESS__STARTRESULTPROCESS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC853190)
#define RPG_CLIENT_BATTLERESULTPROCESS__STARTRESULTPROCESS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC853140)
#define RPG_CLIENT_BATTLERESULTPROCESS__STARTRESULTPROCESS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8528A0)
#define RPG_CLIENT_BATTLERESULTPROCESS__STARTRESULTPROCESS_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0xC84E1B0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResultProcess__StartResultProcess_d__4_TypeDefinitionIndex = 60999;

	class BattleResultProcess__StartResultProcess_d__4 : public ::System::Object
	{
	public:
		::System::Collections::IEnumerator* _itor_5__3; // 0x10
		::RPG::Client::BattleResultProcess_ConfigItem* _config_5__2; // 0x18
		::System::Object* __2__current; // 0x20
		::RPG::GameCore::BattleResultState state; // 0x28
		::System::Int32 __1__state; // 0x2C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__STARTRESULTPROCESS_D__4__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__STARTRESULTPROCESS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__STARTRESULTPROCESS_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__STARTRESULTPROCESS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__STARTRESULTPROCESS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__STARTRESULTPROCESS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
