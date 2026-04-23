#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class BoxmanPuzzleItem; }

#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTFADEIN_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAD9B510)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTFADEIN_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAD9B820)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTFADEIN_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAD9B880)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTFADEIN_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xAD9B830)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTFADEIN_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD9B500)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTFADEIN_D__7__CTOR_OFFSET UNITYSDK_OFFSET(0xAD9B4F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BoxmanPuzzleItem__StartFadeIn_d__7_TypeDefinitionIndex = 72346;

	class BoxmanPuzzleItem__StartFadeIn_d__7 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::Prop::BoxmanPuzzleItem* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single waitAnimTime; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTFADEIN_D__7__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTFADEIN_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTFADEIN_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTFADEIN_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTFADEIN_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTFADEIN_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
