#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BATTLERESULTPROCESS___RP_EVOLVEBUILDACTIVITY_D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19F81BD0)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_EVOLVEBUILDACTIVITY_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19F81D10)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_EVOLVEBUILDACTIVITY_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19F81D70)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_EVOLVEBUILDACTIVITY_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19F81D20)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_EVOLVEBUILDACTIVITY_D__36_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19F81BC0)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_EVOLVEBUILDACTIVITY_D__36__CTOR_OFFSET UNITYSDK_OFFSET(0x19F7DEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResultProcess___RP_EvolveBuildActivity_d__36_TypeDefinitionIndex = 61101;

	class BattleResultProcess___RP_EvolveBuildActivity_d__36 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Int32 __1__state; // 0x18
		::RPG::GameCore::BattleResultState state; // 0x1C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_EVOLVEBUILDACTIVITY_D__36__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_EVOLVEBUILDACTIVITY_D__36_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_EVOLVEBUILDACTIVITY_D__36_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_EVOLVEBUILDACTIVITY_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_EVOLVEBUILDACTIVITY_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_EVOLVEBUILDACTIVITY_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
