#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/RubikCubePuzzleAxis.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class RubikCubePuzzleCube; }

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAEDB350)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAEDB5B0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAEDB610)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xAEDB5C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAEDB340)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25__CTOR_OFFSET UNITYSDK_OFFSET(0xAED9FA0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleCube___DoAnimRotate_d__25_TypeDefinitionIndex = 72330;

	class RubikCubePuzzleCube___DoAnimRotate_d__25 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::RubikCubePuzzleCube* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Boolean isClockWise; // 0x20
		::System::Single _maxTime_5__3; // 0x24
		::System::Int32 index; // 0x28
		::System::Single _t_5__4; // 0x2C
		::RPG::Client::Prop::RubikCubePuzzleAxis axis; // 0x30
		::UnityEngine::Vector3 _centroid_5__2; // 0x34
		::System::Int32 __1__state; // 0x40

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE___DOANIMROTATE_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
