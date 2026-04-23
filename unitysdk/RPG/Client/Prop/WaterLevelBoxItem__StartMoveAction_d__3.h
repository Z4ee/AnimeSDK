#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanDir.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class WaterLevelBoxItem; }

#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAEF8AE0)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAEF8CC0)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAEF8D20)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xAEF8CD0)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAEF8AD0)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0xAEF87D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WaterLevelBoxItem__StartMoveAction_d__3_TypeDefinitionIndex = 72409;

	class WaterLevelBoxItem__StartMoveAction_d__3 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::Prop::WaterLevelBoxItem* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::RPG::Client::Prop::BoxmanDir dir; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
