#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class RotatePillarPuzzleFragment; }

#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAEBFE20)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAEC0AA0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAEC0B00)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xAEC0AB0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAEBFE10)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12__CTOR_OFFSET UNITYSDK_OFFSET(0xAEBF840)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RotatePillarPuzzleFragment__DoRotateAction_d__12_TypeDefinitionIndex = 72304;

	class RotatePillarPuzzleFragment__DoRotateAction_d__12 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::RotatePillarPuzzleFragment* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Int32 cnt; // 0x24
		::System::Single _totalTime_5__4; // 0x28
		::System::Single _fElapsedTimeInSec_5__9; // 0x2C
		::System::Int32 targetDegree; // 0x30
		::System::Single _st_5__6; // 0x34
		::System::Boolean needPlaySound; // 0x38
		::System::Boolean _childRotate_5__5; // 0x39
		::System::Single _clock_5__7; // 0x3C
		::System::Nullable_1<::System::Single> forceTime; // 0x40
		::System::Int32 nowDegree; // 0x48
		::System::Int32 _rotDeg_5__3; // 0x4C
		::System::Int32 _sgn_5__2; // 0x50
		::System::Single _closeWait_5__8; // 0x54

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__DOROTATEACTION_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
