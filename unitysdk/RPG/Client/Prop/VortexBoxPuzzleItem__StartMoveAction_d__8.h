#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanDir.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class VortexBoxPuzzleItem; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM__STARTMOVEACTION_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDD47010)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM__STARTMOVEACTION_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDD47470)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM__STARTMOVEACTION_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDD474D0)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM__STARTMOVEACTION_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDD47480)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM__STARTMOVEACTION_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD47000)
#define RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM__STARTMOVEACTION_D__8__CTOR_OFFSET UNITYSDK_OFFSET(0xDD46ED0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int VortexBoxPuzzleItem__StartMoveAction_d__8_TypeDefinitionIndex = 78390;

	class VortexBoxPuzzleItem__StartMoveAction_d__8 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::VortexBoxPuzzleItem* __4__this; // 0x10
		::UnityEngine::GameObject* _o_5__2; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Single _t_5__5; // 0x28
		::System::Int32 __1__state; // 0x2C
		::System::Single _dist_5__3; // 0x30
		::RPG::Client::Prop::BoxmanDir dir; // 0x34
		::System::Single _totTime_5__4; // 0x38

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM__STARTMOVEACTION_D__8__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM__STARTMOVEACTION_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM__STARTMOVEACTION_D__8_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM__STARTMOVEACTION_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM__STARTMOVEACTION_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_VORTEXBOXPUZZLEITEM__STARTMOVEACTION_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
