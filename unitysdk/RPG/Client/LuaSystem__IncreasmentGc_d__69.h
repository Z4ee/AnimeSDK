#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaSystem; }

#define RPG_CLIENT_LUASYSTEM__INCREASMENTGC_D__69_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x174920E0)
#define RPG_CLIENT_LUASYSTEM__INCREASMENTGC_D__69_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17492270)
#define RPG_CLIENT_LUASYSTEM__INCREASMENTGC_D__69_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x174922D0)
#define RPG_CLIENT_LUASYSTEM__INCREASMENTGC_D__69_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17492280)
#define RPG_CLIENT_LUASYSTEM__INCREASMENTGC_D__69_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x174920D0)
#define RPG_CLIENT_LUASYSTEM__INCREASMENTGC_D__69__CTOR_OFFSET UNITYSDK_OFFSET(0x1748FD60)

namespace RPG::Client
{
	inline static constexpr unsigned int LuaSystem__IncreasmentGc_d__69_TypeDefinitionIndex = 59568;

	class LuaSystem__IncreasmentGc_d__69 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::LuaSystem* __4__this; // 0x18
		::System::Boolean _GcFinish_5__2; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__INCREASMENTGC_D__69__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__INCREASMENTGC_D__69_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__INCREASMENTGC_D__69_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__INCREASMENTGC_D__69_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__INCREASMENTGC_D__69_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUASYSTEM__INCREASMENTGC_D__69_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
