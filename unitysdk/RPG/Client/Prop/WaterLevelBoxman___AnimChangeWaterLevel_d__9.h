#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class WaterLevelBoxman; }

#define RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAEFC040)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAEFC3F0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAEFC450)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xAEFC400)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAEFC030)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9__CTOR_OFFSET UNITYSDK_OFFSET(0xAEFA000)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WaterLevelBoxman___AnimChangeWaterLevel_d__9_TypeDefinitionIndex = 72412;

	class WaterLevelBoxman___AnimChangeWaterLevel_d__9 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::Prop::WaterLevelBoxman* __4__this; // 0x18
		::System::Single delay; // 0x20
		::System::Int32 newIndex; // 0x24
		::System::Single _totalTime_5__3; // 0x28
		::System::Int32 __1__state; // 0x2C
		::System::Single targetWaterLevelChangeDelay; // 0x30
		::System::Single _singleFinishTime_5__2; // 0x34
		::UnityEngine::Vector3 _floatVector_5__5; // 0x38
		::System::Int32 oriIndex; // 0x44
		::System::Single _currentTime_5__4; // 0x48

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
