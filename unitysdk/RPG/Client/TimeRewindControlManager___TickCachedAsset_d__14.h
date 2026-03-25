#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TimeRewindControlManager; }

#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER___TICKCACHEDASSET_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA5AD540)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER___TICKCACHEDASSET_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA5AD710)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER___TICKCACHEDASSET_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA5AD770)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER___TICKCACHEDASSET_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA5AD720)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER___TICKCACHEDASSET_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5AD530)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER___TICKCACHEDASSET_D__14__CTOR_OFFSET UNITYSDK_OFFSET(0xA5A4220)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindControlManager___TickCachedAsset_d__14_TypeDefinitionIndex = 49293;

	class TimeRewindControlManager___TickCachedAsset_d__14 : public ::System::Object
	{
	public:
		::RPG::Client::TimeRewindControlManager* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER___TICKCACHEDASSET_D__14__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER___TICKCACHEDASSET_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER___TICKCACHEDASSET_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER___TICKCACHEDASSET_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER___TICKCACHEDASSET_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER___TICKCACHEDASSET_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
