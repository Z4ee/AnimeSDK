#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RPGApplication; }

#define RPG_CLIENT_RPGAPPLICATION__STARTNEXTFRAME_D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC685280)
#define RPG_CLIENT_RPGAPPLICATION__STARTNEXTFRAME_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC6853A0)
#define RPG_CLIENT_RPGAPPLICATION__STARTNEXTFRAME_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC685400)
#define RPG_CLIENT_RPGAPPLICATION__STARTNEXTFRAME_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC6853B0)
#define RPG_CLIENT_RPGAPPLICATION__STARTNEXTFRAME_D__29_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC685270)
#define RPG_CLIENT_RPGAPPLICATION__STARTNEXTFRAME_D__29__CTOR_OFFSET UNITYSDK_OFFSET(0xC684670)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGApplication__StartNextFrame_d__29_TypeDefinitionIndex = 64962;

	class RPGApplication__StartNextFrame_d__29 : public ::System::Object
	{
	public:
		::RPG::Client::RPGApplication* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__STARTNEXTFRAME_D__29__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__STARTNEXTFRAME_D__29_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__STARTNEXTFRAME_D__29_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__STARTNEXTFRAME_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__STARTNEXTFRAME_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__STARTNEXTFRAME_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
