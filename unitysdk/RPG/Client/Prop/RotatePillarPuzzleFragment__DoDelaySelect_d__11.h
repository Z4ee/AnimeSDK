#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class RotatePillarPuzzleFragment; }

#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DODELAYSELECT_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDD103E0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DODELAYSELECT_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDD10590)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DODELAYSELECT_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDD105F0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DODELAYSELECT_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDD105A0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DODELAYSELECT_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD103D0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DODELAYSELECT_D__11__CTOR_OFFSET UNITYSDK_OFFSET(0xDD10090)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RotatePillarPuzzleFragment__DoDelaySelect_d__11_TypeDefinitionIndex = 78336;

	class RotatePillarPuzzleFragment__DoDelaySelect_d__11 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::Prop::RotatePillarPuzzleFragment* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single _totalTime_5__2; // 0x24
		::System::Int32 cnt; // 0x28
		::System::Boolean isSelect; // 0x2C
		::System::Boolean needPlaySound; // 0x2D

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DODELAYSELECT_D__11__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DODELAYSELECT_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DODELAYSELECT_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DODELAYSELECT_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DODELAYSELECT_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DODELAYSELECT_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
