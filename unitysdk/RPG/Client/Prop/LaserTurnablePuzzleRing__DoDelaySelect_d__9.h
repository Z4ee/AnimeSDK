#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class LaserTurnablePuzzleRing; }

#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING__DODELAYSELECT_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA0C4200)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING__DODELAYSELECT_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA0C43C0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING__DODELAYSELECT_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA0C4420)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING__DODELAYSELECT_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA0C43D0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING__DODELAYSELECT_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0C41F0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING__DODELAYSELECT_D__9__CTOR_OFFSET UNITYSDK_OFFSET(0xA0C3E40)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int LaserTurnablePuzzleRing__DoDelaySelect_d__9_TypeDefinitionIndex = 64119;

	class LaserTurnablePuzzleRing__DoDelaySelect_d__9 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::Prop::LaserTurnablePuzzleRing* __4__this; // 0x18
		::System::Single _totalTime_5__2; // 0x20
		::System::Int32 cnt; // 0x24
		::System::Boolean isSelect; // 0x28
		::System::Int32 __1__state; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING__DODELAYSELECT_D__9__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING__DODELAYSELECT_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING__DODELAYSELECT_D__9_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING__DODELAYSELECT_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING__DODELAYSELECT_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING__DODELAYSELECT_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
