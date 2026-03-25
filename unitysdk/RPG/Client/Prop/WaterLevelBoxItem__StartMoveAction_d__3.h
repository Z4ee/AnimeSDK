#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanDir.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class WaterLevelBoxItem; }

#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA176C80)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA176E60)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA176EC0)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA176E70)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA176C70)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0xA176970)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WaterLevelBoxItem__StartMoveAction_d__3_TypeDefinitionIndex = 64362;

	class WaterLevelBoxItem__StartMoveAction_d__3 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::WaterLevelBoxItem* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
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
