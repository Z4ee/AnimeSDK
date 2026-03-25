#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class CablePuzzleBoard; }

#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD__DELAYREFRESH_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA029980)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD__DELAYREFRESH_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA029B70)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD__DELAYREFRESH_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA029BD0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD__DELAYREFRESH_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA029B80)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD__DELAYREFRESH_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA029970)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD__DELAYREFRESH_D__9__CTOR_OFFSET UNITYSDK_OFFSET(0xA025A90)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int CablePuzzleBoard__DelayRefresh_d__9_TypeDefinitionIndex = 64053;

	class CablePuzzleBoard__DelayRefresh_d__9 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::CablePuzzleBoard* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD__DELAYREFRESH_D__9__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD__DELAYREFRESH_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD__DELAYREFRESH_D__9_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD__DELAYREFRESH_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD__DELAYREFRESH_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD__DELAYREFRESH_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
