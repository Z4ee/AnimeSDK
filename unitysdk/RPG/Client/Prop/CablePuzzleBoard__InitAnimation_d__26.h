#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class CablePuzzleBoard; }

#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD__INITANIMATION_D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA029BF0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD__INITANIMATION_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA02A680)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD__INITANIMATION_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA02A6E0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD__INITANIMATION_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA02A690)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD__INITANIMATION_D__26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA029BE0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD__INITANIMATION_D__26__CTOR_OFFSET UNITYSDK_OFFSET(0xA028670)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int CablePuzzleBoard__InitAnimation_d__26_TypeDefinitionIndex = 64054;

	class CablePuzzleBoard__InitAnimation_d__26 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::CablePuzzleBoard* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single _currentTime_5__2; // 0x24
		::UnityEngine::Vector3 _centerPosition_5__3; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD__INITANIMATION_D__26__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD__INITANIMATION_D__26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD__INITANIMATION_D__26_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD__INITANIMATION_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD__INITANIMATION_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD__INITANIMATION_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
