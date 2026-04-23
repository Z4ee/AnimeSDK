#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class RubikCubePuzzleControlBoard; }

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD___DOAUTOFIXROTATE_D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAED0DD0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD___DOAUTOFIXROTATE_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAED12F0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD___DOAUTOFIXROTATE_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAED1350)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD___DOAUTOFIXROTATE_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xAED1300)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD___DOAUTOFIXROTATE_D__36_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAED0DC0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD___DOAUTOFIXROTATE_D__36__CTOR_OFFSET UNITYSDK_OFFSET(0xAECF2D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleControlBoard___DoAutoFixRotate_d__36_TypeDefinitionIndex = 72324;

	class RubikCubePuzzleControlBoard___DoAutoFixRotate_d__36 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::RubikCubePuzzleControlBoard* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 _rotateTime_5__2; // 0x20
		::System::Single _currentRotateDeg_5__6; // 0x24
		::System::Int32 __1__state; // 0x28
		::System::Boolean _oriClockwise_5__3; // 0x2C
		::System::Boolean _isClockWise_5__4; // 0x2D
		::System::Single _needRotateDeg_5__5; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD___DOAUTOFIXROTATE_D__36__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD___DOAUTOFIXROTATE_D__36_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD___DOAUTOFIXROTATE_D__36_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD___DOAUTOFIXROTATE_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD___DOAUTOFIXROTATE_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD___DOAUTOFIXROTATE_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
