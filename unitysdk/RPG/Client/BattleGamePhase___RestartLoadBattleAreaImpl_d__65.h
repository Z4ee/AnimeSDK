#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleGamePhaseInitParams; }
namespace RPG::Client { class Map; }
namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x91B87C0)
#define RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x91B89F0)
#define RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x91B8A50)
#define RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x91B8A00)
#define RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91B87B0)
#define RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65__CTOR_OFFSET UNITYSDK_OFFSET(0x91A8300)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhase___RestartLoadBattleAreaImpl_d__65_TypeDefinitionIndex = 49436;

	class BattleGamePhase___RestartLoadBattleAreaImpl_d__65 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::RPG::Client::BattleGamePhaseInitParams* initParam; // 0x18
		::System::Object* __2__current; // 0x20
		::RPG::Client::Map* _map_5__2; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Single _startTime_5__3; // 0x34
		::System::Single timeout; // 0x38

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
