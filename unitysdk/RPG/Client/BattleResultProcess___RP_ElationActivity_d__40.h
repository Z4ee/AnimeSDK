#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIController; }

#define RPG_CLIENT_BATTLERESULTPROCESS___RP_ELATIONACTIVITY_D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x91D1E00)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_ELATIONACTIVITY_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x91D1F00)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_ELATIONACTIVITY_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x91D1F60)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_ELATIONACTIVITY_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x91D1F10)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_ELATIONACTIVITY_D__40_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91D1DF0)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_ELATIONACTIVITY_D__40__CTOR_OFFSET UNITYSDK_OFFSET(0x91CEAF0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResultProcess___RP_ElationActivity_d__40_TypeDefinitionIndex = 49467;

	class BattleResultProcess___RP_ElationActivity_d__40 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::LuaUIController* _controller_5__2; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_ELATIONACTIVITY_D__40__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_ELATIONACTIVITY_D__40_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_ELATIONACTIVITY_D__40_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_ELATIONACTIVITY_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_ELATIONACTIVITY_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_ELATIONACTIVITY_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
