#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanDir.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class WaterLevelBoxItem; }

#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDD47DA0)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDD47F80)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDD47FE0)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDD47F90)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD47D90)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0xDD47AB0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WaterLevelBoxItem__StartMoveAction_d__3_TypeDefinitionIndex = 78442;

	class WaterLevelBoxItem__StartMoveAction_d__3 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::Prop::WaterLevelBoxItem* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::RPG::Client::Prop::BoxmanDir dir; // 0x24

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3__CTOR_OFFSET))(this, a1);
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
