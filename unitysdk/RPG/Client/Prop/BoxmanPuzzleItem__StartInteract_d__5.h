#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class BoxmanPuzzleItem; }

#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTINTERACT_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC4DE200)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTINTERACT_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC4DE830)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTINTERACT_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC4DE890)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTINTERACT_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC4DE840)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTINTERACT_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4DE1F0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTINTERACT_D__5__CTOR_OFFSET UNITYSDK_OFFSET(0xC4DCF50)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BoxmanPuzzleItem__StartInteract_d__5_TypeDefinitionIndex = 73369;

	class BoxmanPuzzleItem__StartInteract_d__5 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::Prop::BoxmanPuzzleItem* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single waitAnimTime; // 0x24

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTINTERACT_D__5__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTINTERACT_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTINTERACT_D__5_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTINTERACT_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTINTERACT_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTINTERACT_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
