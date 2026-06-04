#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleGamePhase; }
namespace System::Collections { class IEnumerator; }

#define RPG_CLIENT_BATTLERESULTPROCESS__CLIENTPRERESULTPROCESS_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB413520)
#define RPG_CLIENT_BATTLERESULTPROCESS__CLIENTPRERESULTPROCESS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB413960)
#define RPG_CLIENT_BATTLERESULTPROCESS__CLIENTPRERESULTPROCESS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB4139C0)
#define RPG_CLIENT_BATTLERESULTPROCESS__CLIENTPRERESULTPROCESS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB413970)
#define RPG_CLIENT_BATTLERESULTPROCESS__CLIENTPRERESULTPROCESS_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB413510)
#define RPG_CLIENT_BATTLERESULTPROCESS__CLIENTPRERESULTPROCESS_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0xB4104D0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResultProcess__ClientPreResultProcess_d__3_TypeDefinitionIndex = 57021;

	class BattleResultProcess__ClientPreResultProcess_d__3 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Collections::IEnumerator* _resultProcess_5__3; // 0x18
		::RPG::Client::BattleGamePhase* _battleGamePhase_5__2; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Boolean bWin; // 0x2C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__CLIENTPRERESULTPROCESS_D__3__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__CLIENTPRERESULTPROCESS_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__CLIENTPRERESULTPROCESS_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__CLIENTPRERESULTPROCESS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__CLIENTPRERESULTPROCESS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__CLIENTPRERESULTPROCESS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
