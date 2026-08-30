#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LightConeSelect; }

#define RPG_CLIENT_LIGHTCONESELECT__CHANGETONEXTCOROUTINE_D__58_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD447E60)
#define RPG_CLIENT_LIGHTCONESELECT__CHANGETONEXTCOROUTINE_D__58_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD447FA0)
#define RPG_CLIENT_LIGHTCONESELECT__CHANGETONEXTCOROUTINE_D__58_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD448000)
#define RPG_CLIENT_LIGHTCONESELECT__CHANGETONEXTCOROUTINE_D__58_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD447FB0)
#define RPG_CLIENT_LIGHTCONESELECT__CHANGETONEXTCOROUTINE_D__58_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD447E50)
#define RPG_CLIENT_LIGHTCONESELECT__CHANGETONEXTCOROUTINE_D__58__CTOR_OFFSET UNITYSDK_OFFSET(0xD447220)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeSelect__ChangeToNextCoroutine_d__58_TypeDefinitionIndex = 71014;

	class LightConeSelect__ChangeToNextCoroutine_d__58 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::LightConeSelect* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single deltaTime; // 0x24
		::System::Single _timeCounter_5__2; // 0x28
		::System::Single _currentDegree_5__3; // 0x2C
		::System::Boolean changeSucceed; // 0x30
		::System::Single deltaDegree; // 0x34

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT__CHANGETONEXTCOROUTINE_D__58__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT__CHANGETONEXTCOROUTINE_D__58_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT__CHANGETONEXTCOROUTINE_D__58_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT__CHANGETONEXTCOROUTINE_D__58_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT__CHANGETONEXTCOROUTINE_D__58_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONESELECT__CHANGETONEXTCOROUTINE_D__58_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
