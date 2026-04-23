#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RandomPlayAnimation; }

#define RPG_CLIENT_RANDOMPLAYANIMATION___PLAYRANDOMLY_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAF755C0)
#define RPG_CLIENT_RANDOMPLAYANIMATION___PLAYRANDOMLY_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAF756F0)
#define RPG_CLIENT_RANDOMPLAYANIMATION___PLAYRANDOMLY_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAF75750)
#define RPG_CLIENT_RANDOMPLAYANIMATION___PLAYRANDOMLY_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xAF75700)
#define RPG_CLIENT_RANDOMPLAYANIMATION___PLAYRANDOMLY_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF755B0)
#define RPG_CLIENT_RANDOMPLAYANIMATION___PLAYRANDOMLY_D__1__CTOR_OFFSET UNITYSDK_OFFSET(0xAF75590)

namespace RPG::Client
{
	inline static constexpr unsigned int RandomPlayAnimation___PlayRandomly_d__1_TypeDefinitionIndex = 63453;

	class RandomPlayAnimation___PlayRandomly_d__1 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::RandomPlayAnimation* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMPLAYANIMATION___PLAYRANDOMLY_D__1__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMPLAYANIMATION___PLAYRANDOMLY_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMPLAYANIMATION___PLAYRANDOMLY_D__1_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMPLAYANIMATION___PLAYRANDOMLY_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMPLAYANIMATION___PLAYRANDOMLY_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMPLAYANIMATION___PLAYRANDOMLY_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
