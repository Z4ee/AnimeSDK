#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RPG::Client::Prop { class CablePuzzleBoard; }
namespace RPG::Client::Prop { class CablePuzzleItem; }

#define RPG_CLIENT_PROP_CABLEPUZZLEITEM__ROTATE_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC4EE640)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM__ROTATE_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC4EEC10)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM__ROTATE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC4EEC70)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM__ROTATE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC4EEC20)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM__ROTATE_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4EE630)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM__ROTATE_D__11__CTOR_OFFSET UNITYSDK_OFFSET(0xC4ED590)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int CablePuzzleItem__Rotate_d__11_TypeDefinitionIndex = 73127;

	class CablePuzzleItem__Rotate_d__11 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::CablePuzzleBoard* _ownerBoard_5__6; // 0x10
		::RPG::Client::Prop::CablePuzzleItem* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Single _deltaAngle_5__4; // 0x28
		::UnityEngine::Quaternion _currentRotation_5__3; // 0x2C
		::UnityEngine::Quaternion _targetRotation_5__2; // 0x3C
		::System::Int32 __1__state; // 0x4C
		::System::Single _currentDeltaAngle_5__5; // 0x50

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM__ROTATE_D__11__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM__ROTATE_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM__ROTATE_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM__ROTATE_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM__ROTATE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM__ROTATE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
