#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TimeRewindControlManager; }

#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER___TICKCACHEDASSET_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE1F5CB0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER___TICKCACHEDASSET_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE1F5EA0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER___TICKCACHEDASSET_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE1F5F00)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER___TICKCACHEDASSET_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xE1F5EB0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER___TICKCACHEDASSET_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE1F5CA0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER___TICKCACHEDASSET_D__14__CTOR_OFFSET UNITYSDK_OFFSET(0xE1EC230)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindControlManager___TickCachedAsset_d__14_TypeDefinitionIndex = 60926;

	class TimeRewindControlManager___TickCachedAsset_d__14 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::TimeRewindControlManager* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER___TICKCACHEDASSET_D__14__CTOR_OFFSET))(this, a1);
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
