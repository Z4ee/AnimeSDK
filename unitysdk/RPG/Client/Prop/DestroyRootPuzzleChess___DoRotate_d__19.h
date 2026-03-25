#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class DestroyRootPuzzleChess; }

#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOROTATE_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA080DC0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOROTATE_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA081090)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOROTATE_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA0810F0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOROTATE_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA0810A0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOROTATE_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA080DB0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOROTATE_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0xA0802A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DestroyRootPuzzleChess___DoRotate_d__19_TypeDefinitionIndex = 63997;

	class DestroyRootPuzzleChess___DoRotate_d__19 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::DestroyRootPuzzleChess* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOROTATE_D__19__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOROTATE_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOROTATE_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOROTATE_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOROTATE_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOROTATE_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
