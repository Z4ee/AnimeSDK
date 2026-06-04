#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB08D380)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB08D860)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB08D8C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB08D870)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB08D370)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31__CTOR_OFFSET UNITYSDK_OFFSET(0xB08CB10)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackComponent___BeginRotate_d__31_TypeDefinitionIndex = 69175;

	class AlleyPackComponent___BeginRotate_d__31 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::ActivityAlley::AlleyPackComponent* __4__this; // 0x18
		::System::Single _initYaw_5__2; // 0x20
		::System::Single _currentDeltaYaw_5__4; // 0x24
		::System::Single targetYaw; // 0x28
		::System::Single _needRotateAngle_5__3; // 0x2C
		::System::Single maxRotateSpeed; // 0x30
		::System::Int32 __1__state; // 0x34

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
