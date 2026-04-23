#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIController; }

#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FEVERTIMEACTIVITY_D__32_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9E7A8E0)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FEVERTIMEACTIVITY_D__32_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E7A990)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FEVERTIMEACTIVITY_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E7A9F0)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FEVERTIMEACTIVITY_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9E7A9A0)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FEVERTIMEACTIVITY_D__32_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E7A8D0)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FEVERTIMEACTIVITY_D__32__CTOR_OFFSET UNITYSDK_OFFSET(0x9E76AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResultProcess___RP_FeverTimeActivity_d__32_TypeDefinitionIndex = 56270;

	class BattleResultProcess___RP_FeverTimeActivity_d__32 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::LuaUIController* _uiCtrl_5__2; // 0x18
		::RPG::GameCore::BattleResultState state; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FEVERTIMEACTIVITY_D__32__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FEVERTIMEACTIVITY_D__32_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FEVERTIMEACTIVITY_D__32_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FEVERTIMEACTIVITY_D__32_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FEVERTIMEACTIVITY_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FEVERTIMEACTIVITY_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
