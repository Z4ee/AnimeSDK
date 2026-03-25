#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class DestroyRootPuzzleBoard; }

#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA07E190)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA07E4C0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA07E520)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA07E4D0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA07E180)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0xA07DCE0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DestroyRootPuzzleBoard___DelayLaunch_d__13_TypeDefinitionIndex = 63994;

	class DestroyRootPuzzleBoard___DelayLaunch_d__13 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::Prop::DestroyRootPuzzleBoard* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Boolean result; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
