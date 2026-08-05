#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/FlexBuffers/FlxVector.h"
#include "unitysdk/System/Object.h"

#define FLEXBUFFERS_FLXVECTOR__GETENUMERATOR_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E9E1650)
#define FLEXBUFFERS_FLXVECTOR__GETENUMERATOR_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_FLEXBUFFERS_FLXVALUE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E9E16D0)
#define FLEXBUFFERS_FLXVECTOR__GETENUMERATOR_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E9E1730)
#define FLEXBUFFERS_FLXVECTOR__GETENUMERATOR_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E9E16E0)
#define FLEXBUFFERS_FLXVECTOR__GETENUMERATOR_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E9E1640)
#define FLEXBUFFERS_FLXVECTOR__GETENUMERATOR_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E15E0)

namespace FlexBuffers
{
	inline static constexpr unsigned int FlxVector__GetEnumerator_d__13_TypeDefinitionIndex = 6757;

	class FlxVector__GetEnumerator_d__13 : public ::System::Object
	{
	public:
		::FlexBuffers::FlxValue __2__current; // 0x10
		::FlexBuffers::FlxVector __4__this; // 0x20
		::System::Int32 _i_5__2; // 0x38
		::System::Int32 __1__state; // 0x3C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVECTOR__GETENUMERATOR_D__13__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVECTOR__GETENUMERATOR_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVECTOR__GETENUMERATOR_D__13_MOVENEXT_OFFSET))(this);
		}

		::FlexBuffers::FlxValue System_Collections_Generic_IEnumerator_FlexBuffers_FlxValue__get_Current()
		{
			return ((::FlexBuffers::FlxValue(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVECTOR__GETENUMERATOR_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_FLEXBUFFERS_FLXVALUE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVECTOR__GETENUMERATOR_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVECTOR__GETENUMERATOR_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
