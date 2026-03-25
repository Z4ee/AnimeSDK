#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIController; }

#define RPG_CLIENT_BATTLERESULTPROCESS___RP_BATTLECOLLEGE_D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x91D1B30)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_BATTLECOLLEGE_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x91D1CB0)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_BATTLECOLLEGE_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x91D1D10)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_BATTLECOLLEGE_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x91D1CC0)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_BATTLECOLLEGE_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91D1B20)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_BATTLECOLLEGE_D__30__CTOR_OFFSET UNITYSDK_OFFSET(0x91CE580)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResultProcess___RP_BattleCollege_d__30_TypeDefinitionIndex = 49465;

	class BattleResultProcess___RP_BattleCollege_d__30 : public ::System::Object
	{
	public:
		::RPG::Client::LuaUIController* _uiCtrl_5__2; // 0x10
		::System::Object* __2__current; // 0x18
		::RPG::GameCore::BattleResultState state; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_BATTLECOLLEGE_D__30__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_BATTLECOLLEGE_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_BATTLECOLLEGE_D__30_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_BATTLECOLLEGE_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_BATTLECOLLEGE_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_BATTLECOLLEGE_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
